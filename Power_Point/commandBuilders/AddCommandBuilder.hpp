#ifndef __OOP__ADD_COMMAND_BUILDER__
#define __OOP__ADD_COMMAND_BUILDER__

#include "CommandBuilder.hpp"
#include "../commands/AddCommand.hpp"

class AddCommandBuilder : public ICommandBuilder {
public:
   Command* buildCommand(Arguments& args) override;
   
};

#endif  //__OOP__ADD_COMMAND_BUILDER__