#ifndef __COMMAND_REGISTRY_HPP__
#define __COMMAND_REGISTRY_HPP__

#include "../commands/Command.hpp"
#include "../commandBuilders/CommandBuilder.hpp"
#include <memory> //std::unique_ptr
#include <string>
#include <unordered_map>


class CommandRegistry {
private:
    using CommandBuilderPtr = std::unique_ptr<ICommandBuilder>;
    using Registry = std::unordered_map<std::string, CommandBuilderPtr>;

public: 
    CommandRegistry();
    CommandBuilderPtr findCommand(std::string);

 private:
    Registry commands;
    void init();

};
#endif //__COMMAND_REGISTRY_HPP__
