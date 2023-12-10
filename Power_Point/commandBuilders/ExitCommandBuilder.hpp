#ifndef __EXIT_COMMAND_BUILDER_HPP__
#define __EXIT_COMMAND_BUILDER_HPP__
#include "CommandBuilder.hpp"
#include "../commands/ExitCommand.hpp"

class ExitCommandBuilder : public ICommandBuilder {
    Command* buildCommand(Arguments& args) override {
        return new Exit{};
    };
};

#endif //__EXIT_COMMAND_BUILDER_HPP__