#ifndef CIRCUIT_BUILDER_H_
#define CIRCUIT_BUILDER_H_

#include "circuit_def.h"


class CircuitBuilder {
    std::vector<Circuit::Definition::ModuleDefinition> moduleDefs;

public:
    void addModule(const Circuit::Definition::ModuleDefinition module);
    Circuit::Definition::ModuleDefinition& getModule();
};

#endif