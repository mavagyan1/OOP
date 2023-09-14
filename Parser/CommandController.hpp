#include "consoleInput.hpp"
#include "consoleOutput.hpp"
#include "Parser.hpp"
#include "CommandBuilder.hpp"

class CommandController {
public:
    void run();

private:
    ConsoleInput  _input;
    ConsoleOutput _output;
    Parser _parser;
    CommandBuilder _command_builder;
};