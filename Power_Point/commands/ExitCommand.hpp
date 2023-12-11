#ifndef __EXIT_COMMAND_HPP__
#define __EXIT_COMMAND_HPP__
#include "Command.hpp"

class Exit : public Command {
public:
    std::string execute() override;
};

#endif //__EXIT_COMMAND_HPP__