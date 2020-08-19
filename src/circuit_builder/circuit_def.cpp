#include "circuit_def.h"
namespace  Circuit::Definition {
    InstanceDefinition* ModuleDefinition::findInstance(const std::string &instanceName) {
        auto instIt = std::lower_bound(instances_.begin(), instances_.end(), instanceName,
                                       [](const InstanceDefinition &inst, const std::string &instName) {
                                           return inst.name() < instName;
                                       });

        if (instIt == instances_.end()) {
            return nullptr;
        }

        return &(*instIt);
    }

    Port& ModuleDefinition::addPort(const Port portDef) {

        auto *port = findPort(portDef.name());

        /// If the port exists
        if (port != nullptr) {
            throw std::runtime_error("Can't have multiple ports with the same name");
        }

        /// If the port does exist
        ports_.push_back(std::move(portDef));
        return ports_.back();
    }

    InstanceDefinition& ModuleDefinition::addGate(const InstanceDefinition gateInst) {
        auto gateIt = std::lower_bound(gates_.begin(), gates_.end(), gateInst.name(),
                                       [](const InstanceDefinition &inst, const std::string &gateName) {
                                           return inst.name() < gateName;
                                       });

        // If gateIt is equal to end(), then the item doesn't exist
        if (gateIt == gates_.end()) {
            gates_.push_back(std::move(gateInst));
            return gates_.back();
        }

        // if the names are the same then we're trying to insert an instance with the same name
        if (gateIt->name() == gateInst.name()) {
            const std::string error =
                    "Cannot have multiple gate instances with the same name: " + gateIt->name() + ":" + gateInst.name();
            throw std::runtime_error(error);
        }

        // now we can just insert at the position
        return *gates_.insert(gateIt, std::move(gateInst));
    }

    Net* ModuleDefinition::findNet(const std::string &netName) {
        auto netIt = std::lower_bound(nets_.begin(), nets_.end(), netName,
                                      [](const Net &net, const std::string &tmpNetName) {
                                          return net.name() < tmpNetName;
                                      });

        if (netIt == nets_.end()) {
            return nullptr;
        }

        return &(*netIt);
    }

    Net& ModuleDefinition::addNet(const Net net) {
        auto netIt = std::lower_bound(nets_.begin(), nets_.end(), net.name(),
                                      [](const Net &tmpNet, const std::string &netName) {
                                          return tmpNet.name() < netName;
                                      });


        // If instIt is equal to end(), then the item doesn't exist
        if (netIt == nets_.end()) {
            nets_.push_back(std::move(net));
            return nets_.back();
        }

        // if the names are the same then we're trying to insert an instance with the same name
        if (netIt->name() == net.name()) {
            const std::string error =
                    "Cannot have multiple nets with the same name in a module: " + net.name() + ":" + netIt->name();
            throw std::runtime_error(error);
        }

        // now we can just insert at the position
        return *nets_.insert(netIt, std::move(net));
    }

    InstanceDefinition* ModuleDefinition::findGate(const std::string &gateName) {
        auto gateIt = std::lower_bound(gates_.begin(), gates_.end(), gateName,
                                       [](const InstanceDefinition &gate, const std::string &gName) {
                                           return gate.name() < gName;
                                       });

        if (gateIt == gates_.end()) {
            return nullptr;
        }

        return &(*gateIt);
    }

    InstanceDefinition& ModuleDefinition::addInstance(const InstanceDefinition instance) {
        auto instIt = std::lower_bound(instances_.begin(), instances_.end(), instance.name(),
                                       [](const InstanceDefinition &inst, const std::string &instName) {
                                           return inst.name() < instName;
                                       });

        // If instIt is equal to end(), then the item doesn't exist
        if (instIt == instances_.end()) {
            instances_.push_back(std::move(instance));
            return instances_.back();
        }

        // if the names are the same then we're trying to insert an instance with the same name
        if (instIt->name() == instance.name()) {
            const std::string error =
                    "Cannot have multiple instances with the same name: " + instIt->name() + ":" + instance.name();
            throw std::runtime_error(error);
        }

        // now we can just insert at the position
        return *instances_.insert(instIt, std::move(instance));
    }

    Port* ModuleDefinition::findPort(const std::string &portName) {
        auto portIt = std::find_if(ports_.begin(), ports_.end(),
                                   [&portName](const Port &port) {
                                       return port.name() == portName;
                                   });

        if (portIt == ports_.end()) {
            return nullptr;
        }

        return &(*portIt);
    }

    Port& InstanceDefinition::addPort(const Port portDef) {
        auto portIt = std::find_if(ports_.begin(), ports_.end(),
                                   [&portDef](const Port &pd) {
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

} // namespace Circuit::Definition