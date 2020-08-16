#ifndef CIRCUIT_DEFINITION_H
#define CIRCUIT_DEFINITION_H


#include <algorithm>
#include <iterator>
#include <memory>
#include <string>
#include <vector>

namespace Circuit
{
/// Direction of a port
enum struct PortDir : short {
    inout,
    input,
    output
};

/// Type of port from the perspective of a module
/// \param internal is an internal connection from the module's perspective
///                 this will connect the port to an internal net or something
/// \param external is an external connection from the module's perspective
///                 this will connect the port to an instance outside of the module
enum struct PortView: short {
    internal, 
    external
};

/// Represents the bitwidth of a net/port
/// \param lsb is the least significant bit
/// \param msb is the most significant bit
struct BitWidth {
    int lsb = 0;
    int msb = 0;
};

namespace Definition {

/// Refers to components that can be connected
/// Used to describe what a Net/Port connect to
struct Connectable {
    std::string name;   ///< name of the component
    std::string type;   ///< type of the component
    unsigned index = 0; ///< for busses; 
};

struct NetInstance {
    std::string name;
    unsigned netIndex; ///< used for busses
};

/// Describes how a port should be constructed
class Port {
public:

    /// Build a port object
    Port(const std::string portName, const BitWidth bitWidth): 
        name_(std::move(portName)), width_(std::move(bitWidth))  {}

    /// Describes a connection for a Port
    /// Valid value for connectionType are "net", "port", "reg"
    /// connectionIndex should be set if using a bus
    void addConnection(const std::string connectionType, const std::string connectionName, const unsigned connectionIndex = 0) {
        connections_.push_back( {std::move(connectionType), std::move(connectionName), connectionIndex} );
    }

    /// Sets the direction for a port
    void setPortDirection(const PortDir dir) {
        direction = dir;
    }

    /// Sets the bit width
    void setWidth(const int lsb, const int msb) {
        width_ = {lsb, msb};
    }

    /// Return the port name
    const std::string& name() const { return name_; }

    /// Return the port width
    const BitWidth& width() const { return width_; }

private:
    std::string name_;  ///< port name
    BitWidth width_;    ///< port bit width
    PortDir direction;  ///< port direction
    std::vector<Connectable> connections_;  ///< port connections
};


/// Describes how a net should be constructed
class Net {
public:
    
    /// Build a net object
    Net(const std::string netType, const std::string netName, const BitWidth bitWidth = {0,0}): 
         type_(std::move(netType)), name_(std::move(netName)), width_(std::move(bitWidth))  {}

    /// Describes a net connection
    /// Valid value for connectionType are "instance", "port", "reg"
    void addConnection(const std::string connectionType, const std::string connectionName, const unsigned connectionIndex = 0) {
        connections_.push_back( {std::move(connectionType), std::move(connectionName), connectionIndex} );
    }

    const std::string& name() const { return name_; }
    const std::string& type() const { return type_; }
    const BitWidth&    width()   const { return width_;}
private:
    std::string type_;  ///< net type
    std::string name_;  ///< net name
    BitWidth width_;    ///< net bit width
    std::vector<Connectable> connections_;
};

/// Describes an instantiation of a module
class InstanceDefinition  {
public:
    /// Buiild an instance definition
    /// \p type the type of instance, typically a module name
    /// \p name name of the instance
    InstanceDefinition(std::string type, std::string name): type_(std::move(type)), name_(std::move(name)) { }
    
    /// Add a port to an instance
    /// Throws exception of a port with the same name already exists
    Port& addPort(const Port portDef) {
        auto portIt = std::find_if(ports_.begin(), ports_.end(), 
            [&portDef](const Port& pd) {
                return portDef.name() == pd.name();
            });

        /// If the port exists
        if (portIt != ports_.end()) {
            throw std::runtime_error("Can't have multiple ports with the same name");
        }

        /// If the port does exist
        ports_.push_back(std::move(portDef));
        return ports_.back();
    }

    const std::string& name() const { return name_; }
    const std::string& type() const { return type_; }
private:
    std::string type_;
    std::string  name_;
    std::vector<Port> ports_;
};


/// Models gates in Verilog: buf, xor, or, not, and
class VerilogPrimitiveDefinition {
public:
    VerilogPrimitiveDefinition(const std::string name): name_(std::move(name)) {}
private:
    std::string name_; 
    std::string gateOut_;
    std::vector<std::string> gateIn_;
};

///
/// Module
/// This is the recipe to build a module
///
/// \p name     - the name of the module
/// \p internalPorts - mapping from port name to wires and stuff internal to module
/// \p externalPorts - mapping from external view of module to things
/// \p instances     - vector of all instances within the module
class ModuleDefinition {
public:
    ModuleDefinition(const std::string name) : name_(std::move(name)) { }

    /// Add a port to an instance definition
    /// Throws exception of port already exists as it's a sign of a malformed Verilog file
    /// \return Reference to newly added port
    Port& addPort(const Port portDef) {

        auto* port = findPort(portDef.name()); 

        /// If the port exists
        if (port != nullptr) {
            throw std::runtime_error("Can't have multiple ports with the same name");
        }

        /// If the port does exist
        ports_.push_back(std::move(portDef));
        return ports_.back();
    }

    /// Finds a port with portName
    /// \return pointer to the port if found; otherwise nullptr
    /// \p portName name of port to find
    Port* findPort(const std::string& portName) {
        auto portIt = std::find_if(ports_.begin(), ports_.end(), 
        [&portName](const Port& port) {
            return port.name() == portName;
        });
    
        if (portIt == ports_.end()) {
            return nullptr;
        }

        return &(*portIt);
    }

    /// Adds an InstanceDefinition
    /// \return Address of newly added instance
    /// Throws exception of an instance with the same name already exists within this module
    InstanceDefinition& addInstance(const InstanceDefinition instance) {
        auto instIt = std::lower_bound(instances_.begin(), instances_.end(), instance.name(),
            [](const InstanceDefinition& inst, const std::string& instName){
                return inst.name() < instName;
            });


        // If instIt is equal to end(), then the item doesn't exist
        if (instIt == instances_.end()) {
            instances_.push_back(std::move(instance));
            return instances_.back();
        }

        // if the names are the same then we're trying to insert an instance with the same name
        if (instIt->name() == instance.name()) {
            const std::string error = "Cannot have multiple instances with the same name: " + instIt->name() + ":" + instance.name();
            throw std::runtime_error(error);
        }

        // now we can just insert at the position
        return *instances_.insert(instIt, std::move(instance));
    }

    /// Finds an instance by name
    /// \return pointer to instance if it exists; otherwise nullptr
    InstanceDefinition* findInstance(const std::string& instanceName) {
        auto instIt = std::lower_bound(instances_.begin(), instances_.end(), instanceName,
            [](const InstanceDefinition& inst, const std::string& instName){
                return inst.name() < instName;
            });

        if (instIt == instances_.end()) {
            return nullptr;
        }

        return &(*instIt);
    }

    /// Adds a net
    /// \return Reference to newly added net
    /// Throws an exception if a net with the same name already exists
    Net& addNet(const Net net) {
        auto netIt = std::lower_bound(nets_.begin(), nets_.end(), net.name(),
            [](const Net& net, const std::string& netName){
                return net.name() < netName;
            });


        // If instIt is equal to end(), then the item doesn't exist
        if (netIt == nets_.end()) {
            nets_.push_back(std::move(net));
            return nets_.back();
        }

        // if the names are the same then we're trying to insert an instance with the same name
        if (netIt->name() == net.name()) {
            const std::string error = "Cannot have multiple nets with the same name in a module: " + net.name() + ":" + netIt->name();
            throw std::runtime_error(error);
        }

        // now we can just insert at the position
        return *nets_.insert(netIt, std::move(net));     
    }

    /// Finds a net
    /// \return Pointer to existing net; otherwise nullptr
    Net* findNet(const std::string& netName) {
       auto netIt = std::lower_bound(nets_.begin(), nets_.end(), netName,
            [](const Net& net, const std::string& netName){
                return net.name() < netName;
            });

        if (netIt == nets_.end()) {
            return nullptr;
        }

        return &(*netIt);
    }


    const std::string& name() const { return name_; }

private:
    std::string name_;
    std::vector<Port> ports_;
    std::vector<InstanceDefinition> instances_;
    std::vector<Net> nets_;
};

} /// namespace Circuit::Definition
} /// namespace Circuit
#endif