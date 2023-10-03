#include "CommandRegistry.hpp"
#include "AddCommand.hpp"

CommandRegistry::CommandRegistry() {
        init();
}

void CommandRegistry::init() {
    commands.insert({"add", CommandPtr(new Add)});
}

auto CommandRegistry::findCommand(std::string command) -> CommandPtr {
    auto it = commands.find(command);
    if(it == commands.end()) {
        throw std::runtime_error("Command not found");
    }
    return CommandPtr(it->second->getCommand());
}
