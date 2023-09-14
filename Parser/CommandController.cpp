#include "CommandController.hpp"
#include <iostream>

void CommandController::run() {
    while(true) {
        try
        {
            auto input = _input.read();
            ParsingResult parsed_cmd = _parser.parse(input);
            auto& cmd = _command_builder.buildCommand(parsed_cmd.first);
            if(!cmd)
                break;
            auto result = cmd->execute(parsed_cmd.second);
            _output.print(result);

        }
        catch(std::runtime_error error)
        {
           std::cout << error.what() << std::endl;
        }
        
    }
}