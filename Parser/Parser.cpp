#include "Parser.hpp"
#include <stdexcept>

auto Parser::parse(std::stringstream inputStream) -> CommandPtr {
    std::string command;
    std::string key;
    std::string value;

    inputStream >> command;
    auto cmd_ptr =  _registry.findCommand(command);

    while (inputStream >> key && inputStream >> value) {
        if(cmd_ptr->checkArgument(key))
            cmd_ptr->addArgument(key,value);
        else
            throw std::runtime_error("Incorrect command argument");
    }
        
    return cmd_ptr;
}