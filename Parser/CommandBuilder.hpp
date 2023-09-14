#ifndef __COMMAND_BUILDER_HPP__
#define __COMMAND_BUILDER_HPP__
#include "ICommand.hpp"
#include <string>
#include <memory>
#include <map>


class CommandBuilder {
private:
    using CommandPtr = std::unique_ptr<ICommand>;

public: 
    CommandBuilder();
    CommandPtr& buildCommand(std::string);
 
 private:
    std::map<std::string, CommandPtr> commands;
    void init();

};
#endif //__COMMAND_BUILDER_HPP__
