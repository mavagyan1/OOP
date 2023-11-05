#include "CommandBuilder.hpp"
#include "../commands/AddCommand.hpp"

class AddCommandBuilder : public ICommandBuilder {
public:
   Command* buildCommand(Arguments& args) override;
   
};
