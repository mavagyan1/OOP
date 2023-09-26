#ifndef __COMMAND_REGISTRY_HPP__
#define __COMMAND_REGISTRY_HPP__

#include "Command.hpp"
#include <memory> //std::unique_ptr
#include <string>
#include <unordered_map>


class CommandRegistry {
private:
    using CommandPtr = std::unique_ptr<Command>;
    using Registry = std::unordered_map<std::string, CommandPtr>;

public: 
    CommandRegistry();
    CommandPtr findCommand(std::string);

 private:
    Registry commands;
    void init();

};
#endif //__COMMAND_REGISTRY_HPP__
