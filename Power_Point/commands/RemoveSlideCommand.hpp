#ifndef __REMOVE_SLIDE_COMMAND_HPP__
#define __REMOVE_SLIDE_COMMAND_HPP__
#include "Command.hpp"


class RemoveSlide : public Command {
public:
    RemoveSlide() = default;
    std::string execute() override;
    void addArgument(Key, Value); 
};
#endif //__REMOVE_SLIDE_COMMAND_HPP__