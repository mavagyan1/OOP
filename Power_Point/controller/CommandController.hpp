#ifndef __OOP_COMMAND_CONTROLLER_HPP__
#define __OOP_COMMAND_CONTROLLER_HPP__

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

#endif //__OOP_COMMAND_CONTROLLER_HPP__