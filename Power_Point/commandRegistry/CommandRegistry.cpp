#include "CommandRegistry.hpp"
//#include "../commands/AddCommand.hpp"
#include "../commandBuilders/AddCommandBuilder.hpp"
#include <iostream>


CommandRegistry::CommandRegistry() {
    init();
}

void CommandRegistry::init() {
    _commands.insert({"add",CommandBuilderPtr(new AddCommandBuilder)});
}

auto CommandRegistry::findCommand(std::string command) -> CommandBuilderPtr {
    auto it = _commands.find(command);
    if(it == _commands.end()) {
        std::cout << "Cannot find the command"<< std::endl; //TODO:Add strickt checks
    }
    return std::move(it->second);
}
