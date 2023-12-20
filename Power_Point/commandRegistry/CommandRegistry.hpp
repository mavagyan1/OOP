#ifndef __OOP_COMMAND_REGISTRY_HPP__
#define __OOP_COMMAND_REGISTRY_HPP__

#include "../commands/Command.hpp"
#include "../commandBuilders/CommandBuilder.hpp"
#include <memory> //std::unique_ptr
#include <string>
#include <unordered_map>
/*
* This class serves as a registry which maps the name of the command to its appropriate builder.
* To build the command we need, first we have to find it in this registry by "findCommand"
* function. It retruns a smart pointer to the appropriate builder. Then we just have to call the "buildCommand" function on it.
*/

class CommandRegistry {
private:
    using CommandBuilderPtr = std::shared_ptr<ICommandBuilder>;
    using Registry = std::unordered_map<std::string, CommandBuilderPtr>;

public: 
    CommandRegistry();
    CommandBuilderPtr findCommand(std::string);

private:
    void init(); 
    Registry _commands;

};
#endif //__OOP_COMMAND_REGISTRY_HPP__
