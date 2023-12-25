#include "CommandController.hpp"
#include "../commandRegistry/CommandRegistry.hpp"

#include <sstream>

CommandController::CommandController(std::istream& input, std::ostream& output)
: _input(input),
  _output(output) { }

void CommandController::run(){
    
    while(isOn) {
        std::string userInput;
        std::getline(_input,userInput);
        std::stringstream inputStream{userInput};

        try {
            auto parser_result = _parser.parse(inputStream);
            auto cmd_builder = _cmdReg.findCommand(parser_result.first);
            auto cmd = cmd_builder->buildCommand(parser_result.second);
            cmd->execute();
        }
        catch(const std::exception& exp) {
            _output << exp.what();
        }
    }
}

void CommandController::off() {
    isOn = false;
}
