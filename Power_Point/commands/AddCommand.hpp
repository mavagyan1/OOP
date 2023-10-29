#ifndef __ADD_COMMAND_HPP__
#define __ADD_COMMAND_HPP__

#include "../ItemRegistry/ItemRegistry.hpp"
#include "Command.hpp"

class Add : public Command {
public:
    Add();
    virtual std::string execute();
private:
    void initArguments();
    ItemRegistry* itemRegistry;
};

#endif //__ADD_COMMAND_HPP__
