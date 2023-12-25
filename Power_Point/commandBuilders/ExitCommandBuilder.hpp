#ifndef __EXIT_COMMAND_BUILDER_HPP__
#define __EXIT_COMMAND_BUILDER_HPP__
#include "CommandBuilder.hpp"
#include "../commands/ExitCommand.hpp"

class ExitCommandBuilder : public ICommandBuilder {
    CommandPtr buildCommand(Arguments& args) override {
        return std::make_shared<Exit>();
    };
};

#endif //__EXIT_COMMAND_BUILDER_HPP__