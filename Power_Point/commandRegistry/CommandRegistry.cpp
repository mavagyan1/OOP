#include "CommandRegistry.hpp"
//#include "../commands/AddCommand.hpp"
#include "../commandBuilders/AddCommandBuilder.hpp"
#include "../commandBuilders/ExitCommandBuilder.hpp"
#include <iostream>
#include <stdexcept>


CommandRegistry::CommandRegistry() {
    init();
}

void CommandRegistry::init() {
    _commands.insert({"add",CommandBuilderPtr(new AddCommandBuilder)});
    _commands.insert({"exit",CommandBuilderPtr(new ExitCommandBuilder)});

}

auto CommandRegistry::findCommand(std::string command) -> CommandBuilderPtr {
    auto it = _commands.find(command);
    if(it == _commands.end()) {
        throw std::runtime_error("Cannot find the command\n");
    }
    return std::move(it->second);
}
