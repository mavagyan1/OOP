#ifndef PARSER_COMMANDBUILDER_H
#define PARSER_COMMANDBUILDER_H

#include <vector>
#include <utility>
#include <memory>
#include "../commands/Command.hpp"
/*
* The purpose of ICommandBuilder class is to create Commands (add, remove,change...).
* The objects of subclasses of ICommandBuilder are presented as values of CommandRegistry,
* in which the name of command(we get it from the Parser) maps to the appropriate CommandBuilder.
*/

/*
* In programm control flow we reach to this point when we already have found the command in CommandRegistry.
* Using the "buildCommand" function, we create the command found in the registry.
*/
class ICommandBuilder {
protected:
    using Argument = std::pair<std::string,std::string>;
    using Arguments = std::vector<Argument>;
    using CommandPtr = std::shared_ptr<Command>;
public:
    virtual CommandPtr buildCommand(Arguments&) = 0;
    virtual ~ICommandBuilder() = default;
};
#endif //PARSER_COMMANDBUILDER_H
