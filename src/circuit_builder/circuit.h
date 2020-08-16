#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <memory>
#include <string>
#include <vector>

namespace Circuit
{



/// Represents a class that forms a connection
/// The current classes that inherit from this are Net and Port
class Connection { 
public:
    Connection(const std::string name): name(std::move(name)) {}    
    std::string name;
    BitWidth bitWidth;
};

/// Models a Verilog net
struct Net : public Connection {
    Net(std::string n): Connection(std::move(n)) {}
    std::vector<Connection*> incoming;
    std::vector<Connection*> outgoing; 
};

/// Models a Verilog port
/// A port can connect to anything that inherits from Connection
struct Port : public Connection {
    Port (std::string n): Connection(std::move(n)) {}
    PortDir dir;
    std::vector<Connection*> external;
    std::vector<Connection*> internal;
};

/// Instance
struct Instance {
    Instance(std::string type, std::string name): type(std::move(type)), name(std::move(name)) { }
    std::string type;
    std::string name;
    std::vector<std::unique_ptr<Port>> portList;
};

///
/// Module
/// This is the recipe to build a module
///
/// \p name     - the name of the module
/// \p internalPorts - mapping from port name to wires and stuff internal to module
/// \p externalPorts - mapping from external view of module to things
/// \p instances     - vector of all instances within the module
class Module
{
public:
    Module(const std::string name) : name(std::move(name)) { }
    std::string name;
    std::vector<std::unique_ptr<Port>> portList;
    std::vector<Instance> instances;
    std::vector<std::unique_ptr<Net>> nets;
};

} /// namespace Circuit
#endif