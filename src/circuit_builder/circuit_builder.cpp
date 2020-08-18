#include "circuit_builder.h"
#include "circuit_def.h"

Circuit::Definition::ModuleDefinition& CircuitBuilder::getModule()
{
    return moduleDefs.back();
}

void CircuitBuilder::addModule(const Circuit::Definition::ModuleDefinition moduleDef)
{
    moduleDefs.push_back(std::move(moduleDef));
}