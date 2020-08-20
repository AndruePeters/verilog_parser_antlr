#ifndef CIRCUIT_DEFINITION_H
#define CIRCUIT_DEFINITION_H


#include <algorithm>
#include <iterator>
#include <memory>
#include <string>
#include <vector>

namespace Circuit {
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
enum struct PortView : short {
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
    Port(const std::string portName, const BitWidth bitWidth) :
            name_(std::move(portName)), width_(std::move(bitWidth)) {}

    /// Describes a connection for a Port
    /// Valid value for connectionType are "net", "port", "reg"
    /// connectionIndex should be set if using a bus
    void addConnection(const std::string connectionType, const std::string connectionName,
                       const unsigned connectionIndex = 0) {
        connections_.push_back({std::move(connectionType), std::move(connectionName), connectionIndex});
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
    Net(const std::string netType, const std::string netName, const BitWidth bitWidth = {0, 0}) :
            type_(std::move(netType)), name_(std::move(netName)), width_(std::move(bitWidth)) {}

    /// Describes a net connection
    /// Valid value for connectionType are "instance", "port", "reg"
    void addConnection(const std::string connectionType, const std::string connectionName,
                       const unsigned connectionIndex = 0) {
        connections_.push_back({std::move(connectionType), std::move(connectionName), connectionIndex});
    }

    const std::string& name() const { return name_; }

    const std::string& type() const { return type_; }

    const BitWidth& width() const { return width_; }

private:
    std::string type_;  ///< net type
    std::string name_;  ///< net name
    BitWidth width_;    ///< net bit width
    std::vector<Connectable> connections_;
};

/// Describes an instantiation of a module
class InstanceDefinition {
public:
    /// Buiild an instance definition
    /// \p type the type of instance, typically a module name
    /// \p name name of the instance
    InstanceDefinition(std::string type, std::string name) : type_(std::move(type)), name_(std::move(name)) {}

    /// Add a port to an instance
    /// Throws exception of a port with the same name already exists
    Port& addPort(const Port portDef);

    const std::string& name() const { return name_; }

    const std::string& type() const { return type_; }

private:
    std::string type_;
    std::string name_;
    std::vector<Port> ports_;
};

/// Models gates in Verilog: buf, xor, or, not, and
class VerilogPrimitive {
public:
    VerilogPrimitive(const std::string type, const std::string name) : type_(std::move(type)), name_(std::move(name)) {}

    void addInput(const std::string input)      { gateIn_.push_back(std::move(input)); }

    void addOutput(const std::string output)    { gateOut_.push_back(std::move(output)); }

    void addEnable(const std::string enable)    { enable_ = std::move(enable); }

    const std::string& name() const { return name_; }
    const std::string& type() const { return type_; }

private:
    std::string type_;
    std::string name_;
    std::string enable_;
    std::vector<std::string> gateOut_;
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
    ModuleDefinition(const std::string name) : name_(std::move(name)) {}

    /// Add a port to an instance definition
    /// Throws exception of port already exists as it's a sign of a malformed Verilog file
    /// \return Reference to newly added port
    Port& addPort(const Port portDef);

    /// Finds a port with portName
    /// \return pointer to the port if found; otherwise nullptr
    /// \p portName name of port to find
    Port* findPort(const std::string& portName);

    /// Adds an InstanceDefinition
    /// \return Address of newly added instance
    /// Throws exception of an instance with the same name already exists within this module
    InstanceDefinition& addInstance(const InstanceDefinition instance);

    /// Finds an instance by name
    /// \return pointer to instance if it exists; otherwise nullptr
    InstanceDefinition* findInstance(const std::string& instanceName);

    /// Adds a gate
    /// \return Address of newly added gate
    /// Throws exception of an gate with the same name already exists within this module
    VerilogPrimitive& addPrimitive(const VerilogPrimitive gateInst);


    /// Finds a gate by name
    /// \return pointer to instance if it exists; otherwise nullptr
    VerilogPrimitive* findPrimitive(const std::string& primitiveName);

    /// Adds a net
    /// \return Reference to newly added net
    /// Throws an exception if a net with the same name already exists
    Net& addNet(const Net net);

    /// Finds a net
    /// \return Pointer to existing net; otherwise nullptr
    Net* findNet(const std::string& netName);


    const std::string& name() const { return name_; }

private:
    std::string name_;
    std::vector<Port> ports_;
    std::vector<InstanceDefinition> instances_;
    std::vector<VerilogPrimitive> verilogPrimitives_;
    std::vector<Net> nets_;
};

} /// namespace Circuit::Definition
} /// namespace Circuit
#endif