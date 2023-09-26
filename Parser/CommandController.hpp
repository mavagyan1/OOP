#include "consoleInput.hpp"
#include "consoleOutput.hpp"
#include "Parser.hpp"
#include "CommandRegistry.hpp"

class CommandController {
public:
    void run();

private:
    ConsoleInput  _input;
    ConsoleOutput _output;
    Parser _parser;
    CommandRegistry _command_builder;
};