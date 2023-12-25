#ifndef __REMOVE_SLIDE_COMMAND_BUILDER_HPP__
#define __REMOVE_SLIDE_COMMAND_BUILDER_HPP__
#include "CommandBuilder.hpp"
#include "../commands/RemoveSlideCommand.hpp"

class RemoveSlideCommandBuilder : public ICommandBuilder {
    CommandPtr buildCommand(Arguments& args) override;
};

#endif //__REMOVE_SLIDE_COMMAND_BUILDER_HPP__