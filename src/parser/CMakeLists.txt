add_library(verilog_parser STATIC parser_conversions.cpp Verilog2001BaseListener.cpp 
    Verilog2001Lexer.cpp Verilog2001Listener.cpp Verilog2001Parser.cpp)

target_link_libraries(verilog_parser PRIVATE project_warnings project_options antlr4-runtime circuit_builder)
target_include_directories(verilog_parser PUBLIC /usr/include/antlr4-runtime)