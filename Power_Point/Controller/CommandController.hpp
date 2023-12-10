#ifndef __OOP_COMMAND_CONTROLLER_HPP__
#define __OOP_COMMAND_CONTROLLER_HPP__
#include <iostream>

#include "../input/consoleInput.hpp"
#include "../output/consoleOutput.hpp"
#include "../parser/Parser.hpp"
#include "../commandRegistry/CommandRegistry.hpp"

class CommandController {
public:
    CommandController(std::istream&, std::ostream&);
    void run();

private:
    bool isOn{true};
    std::istream&  _input;
    std::ostream& _output;
    CommandRegistry _cmdReg;
    Parser _parser;
};

#endif //__OOP_COMMAND_CONTROLLER_HPP__