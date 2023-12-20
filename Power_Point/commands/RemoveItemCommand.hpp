#ifndef __REMOVE_ITEM_COMMAND_HPP__
#define __REMOVE_ITEM_COMMAND_HPP__
#include "Command.hpp"


class RemoveItem : public Command {
public:
    RemoveItem() = default;
    std::string execute() override;
    void addArgument(Key, Value); 
};
#endif //__REMOVE_ITEM_COMMAND_HPP__