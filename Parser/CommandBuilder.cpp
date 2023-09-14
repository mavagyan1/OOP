#include "CommandBuilder.hpp"
#include "Command.hpp"

CommandBuilder::CommandBuilder() {
        init();
}

void CommandBuilder::init() {
        commands.insert({"add", CommandPtr(new Add)});
        commands.insert({"sub", CommandPtr(new Sub)});
        commands.insert({"mul", CommandPtr(new Mul)});
        commands.insert({"xor", CommandPtr(new Xor)});
        commands.insert({"div", CommandPtr(new Div)});
        commands.insert({"or",  CommandPtr(new Or) });
        commands.insert({"not", CommandPtr(new Not)});
}

auto CommandBuilder::buildCommand(std::string command) -> CommandPtr& {
    auto it = commands.find(command);
    if(it == commands.end()){
         throw std::runtime_error("Command not found");
    }
    return commands.find(command)->second;
   
}
