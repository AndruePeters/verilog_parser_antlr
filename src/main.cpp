#include <antlr4-runtime/antlr4-runtime.h>

#include "parser/Verilog2001Lexer.h"
#include "parser/Verilog2001Parser.h"
#include "parser/Verilog2001BaseListener.h"

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
    Verilog2001BaseListener myListener;

    //parser.addParseListener(&myListener);


    tree::ParseTree* tree = parser.source_text();
    //auto newTree = parser.consume();
    tree::ParseTreeWalker walker;
    walker.walk(&myListener, tree);
    //std::cout << tree->toStringTree(&parser, true) << std::endl << std::endl;
    return 0;
}