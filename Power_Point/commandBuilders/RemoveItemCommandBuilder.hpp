#ifndef __REMOVE_ITEM_COMMAND_BUILDER_HPP__
#define __REMOVE_ITEM_COMMAND_BUILDER_HPP__

#include "CommandBuilder.hpp"
#include "../commands/RemoveItemCommand.hpp"

class RemoveItemCommandBuilder : public ICommandBuilder {
    CommandPtr buildCommand(Arguments& args) override;
};

#endif //__REMOVE_ITEM_COMMAND_BUILDER_HPP__