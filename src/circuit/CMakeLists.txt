add_library(circuit_lib STATIC circuit_funcs.cpp)
target_include_directories(circuit_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} 
    project_options project_warnings)