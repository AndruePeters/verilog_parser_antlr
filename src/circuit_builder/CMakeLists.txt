add_library(circuit_builder STATIC circuit_builder.cpp circuit_def.cpp)
target_include_directories(circuit_builder INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
