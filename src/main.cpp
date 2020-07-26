#include <antlr4-runtime/antlr4-runtime.h>

#include "Verilog2001Lexer.h"
#include "Verilog2001Parser.h"

using namespace antlr4;
using namespace antlrcpp;


int main(int argc, const char ** argv) {

    ANTLRFileStream input(argv[1]);
    Verilog2001Lexer lexer (&input);
    CommonTokenStream tokens(&lexer);

    for (const auto token: tokens.getTokens()) {
        std::cout << "8" <<  token->toString() << std::endl;
    }

    Verilog2001Parser parser(&tokens);
    tree::ParseTree* tree = parser.module_declaration();
    std::cout << tree->toStringTree(&parser, true) << std::endl << std::endl;
    return 0;
}