#include "../input/consoleInput.hpp"
#include "../output/consoleOutput.hpp"
#include "../parser/Parser.hpp"
#include "../commandRegistry/CommandRegistry.hpp"

class CommandController {
public:
    void run();

private:
    ConsoleInput  _input;
    ConsoleOutput _output;
    Parser _parser;
    CommandRegistry _command_builder;
};