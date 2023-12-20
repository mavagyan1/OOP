#ifndef __DISPLAY_COMMAND_BUILDER_HPP__
#define __DISPLAY_COMMAND_BUILDER_HPP__
#include "CommandBuilder.hpp"
#include "../commands/DisplayCommand.hpp"

class DisplayCommandBuilder : public ICommandBuilder {
    CommandPtr buildCommand(Arguments& args) override {
        return std::make_shared<Display>();
    };
};

#endif //__DISPLAY_COMMAND_BUILDER_HPP__