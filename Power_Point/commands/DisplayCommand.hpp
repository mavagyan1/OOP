#ifndef __DISPLAY_COMMAND_HPP__
#define __DISPLAY_COMMAND_HPP__
#include "Command.hpp"
#include <memory.h>

class Display : public Command {
public:
    std::string execute() override;
private:
    void print(std::shared_ptr<Item>);
};

#endif //__DISPLAY_COMMAND_HPP__