#include "CommandRegistry.hpp"
#include "../commandBuilders/AddCommandBuilder.hpp"
#include "../commandBuilders/ExitCommandBuilder.hpp"
#include "../commandBuilders/RemoveSlideCommandBuilder.hpp"
#include "../commandBuilders/RemoveItemCommandBuilder.hpp"
#include "../commandBuilders/DisplayCommandBuilder.hpp"
#include <iostream>
#include <stdexcept>


CommandRegistry::CommandRegistry() {
    init();
}

void CommandRegistry::init() {
    _commands.insert({"add",CommandBuilderPtr(new AddCommandBuilder)});
    _commands.insert({"removeSlide",CommandBuilderPtr(new RemoveSlideCommandBuilder)});
    _commands.insert({"removeItem",CommandBuilderPtr(new RemoveItemCommandBuilder)});
    _commands.insert({"display",CommandBuilderPtr(new DisplayCommandBuilder)});
    _commands.insert({"exit",CommandBuilderPtr(new ExitCommandBuilder)});

}

auto CommandRegistry::findCommand(std::string command) -> CommandBuilderPtr {
    auto it = _commands.find(command);
    if(it == _commands.end()) {
        throw std::runtime_error("Cannot find the command\n");
    }
    return it->second;
}
