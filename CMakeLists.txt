# Andrue Peters 
# 4/25/20
#

cmake_minimum_required (VERSION 3.12.2)
project (vparse)
include (cmake/StandardProjectSettings.cmake)

# use C++17
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)

# compile-time options and cxx standard
add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_17)

if(CMAKE_CXX_COMPILER_ID MATCHES ".*Clang")
  option(ENABLE_BUILD_WITH_TIME_TRACE "Enable -ftime-trace to generate time tracing .json files on clang" OFF)
  if (ENABLE_BUILD_WITH_TIME_TRACE)
    add_compile_definitions(project_options INTERFACE -ftime-trace)
  endif()
endif()

# enable project warningss
add_library(project_warnings INTERFACE)
include(cmake/CompilerWarnings.cmake)
set_project_warnings(project_warnings)

# sanitizer options
include(cmake/Sanitizers.cmake)
enable_sanitizers(project_options)

# enable doxygen
# include (cmake/Doxygen.cmake)
# enable_doxygen()

# allow for static analysis options
include(cmake/StaticAnalyzers.cmake)


# option(BUILD_SHARED_LIBS "Enable compilation of shared libraries" OFF)
# option(ENABLE_TESTING "Enable Test Builds" OFF)
add_subdirectory(src/circuit_builder)

add_executable(vparse src/main.cpp src/parser/Verilog2001Lexer.cpp src/parser/Verilog2001Listener.cpp src/parser/Verilog2001Parser.cpp 
                      src/parser/Verilog2001BaseListener.cpp src/parser/parser_conversions.cpp)
target_link_libraries(vparse PUBLIC project_options project_warnings antlr4-runtime circuit_builder)
target_include_directories(vparse PUBLIC /usr/include/antlr4-runtime)

