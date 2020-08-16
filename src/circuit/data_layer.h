#ifndef DATA_LAYER_H
#define DATA_LAYER_H


/// Design Notes
/// All modules, ports, nets, etc are created on the heap for pointer validity
#include <algorithm>

#include <circuit_def.h>
#include <circuit_funcs.h>

#include <iostream>
namespace Circuit
{

class VerilogDatabase
{
public:
    Definition::ModuleDefinition& addModule(const Definition::ModuleDefinition module) {

        /// Returns the location for a sorted insert into the vector
        auto insertPos = std::lower_bound(definitions.begin(), definitions.end(), module.name(),
            [](const Definition::ModuleDefinition& module, const std::string& newModuleName) {
                return module.name() < newModuleName;
            });

        /// Throw exception if a module already exists
        /// because there would be multiple definitions
        if (insertPos != definitions.end()) {
            if (insertPos->name() == module.name())
            throw std::runtime_error("Cannot have duplicated modules");
        }

        /// At this point, we can just insert the module
        /// Return a reference to the module just added
        newestModule_ = &(*definitions.insert(insertPos, std::move(module)));
        return *newestModule_;
    }

    Definition::ModuleDefinition& newestModule() const
    {
        return *newestModule_;
    }
    void dump()
    {
        for(const auto& module: definitions) {
            std::cout << "Dumping information for module: " << module.name() << '\n';

            for(const auto& port: module.ports_) {
                std::cout << "port:" << port.name() << std::endl;
            }

            for(const auto& instance: module.instances_) {
                std::cout << "instance:" << instance.name() << '\n';
            }

            for(const auto& net: module.nets_) {
                std::cout << "net:" << net.name() << '\n';
            }

        }
    }
private:
    std::vector<Circuit::Definition::ModuleDefinition> definitions;
    Definition::ModuleDefinition* newestModule_ = nullptr;
};


/*

    /// Returns a pointer to a port within module with portName as the name
    /// Returns nullptr if it doesn't exist
    template <typename T>
    auto findPort (const T* module, const std::string& portName) -> Port*
    {
        auto portIt = std::find_if(module->portList.begin(), module->portList.end(), 
            [&portName](const std::unique_ptr<Port>& p){ return p->name == portName; });

        if (portIt == module->portList.end()) {
            return nullptr;
        }

        // the object should never be const, so this is okay
        // tells the user that the module isn't being edited
        return const_cast<Port*>(portIt->get());
    }

    /// Creates a new port with portName as the name within module
    /// If the port already exists, then it returns a pointer to that port
    template <typename T>
    auto createPort(T* module, const std::string portName) -> Port*
    {
        Port* existingPort = findPort(module, portName);
        if (existingPort != nullptr) return existingPort;

        auto newPort = std::make_unique<Port>(std::move(portName));
        module->portList.push_back(std::move(newPort));
        return module->portList.back().get();
    }

    /// Returns a pointer to a Net within module with netName as the name
    /// Returns nullptr if the net doesn't exist
    auto findNet (const Module* module, const std::string& netName) -> Net*
    {
        auto netIt = std::find_if(module->nets.begin(), module->nets.end(), [&netName](const std::unique_ptr<Net>& n) { return n->name == netName; });
        if (netIt == module->nets.end()) return nullptr;
        return const_cast<Net*>(netIt->get());
    }

*/
}

#endif