#ifndef PARSER_COMMANDBUILDER_H
#define PARSER_COMMANDBUILDER_H

#include <vector>
#include <utility>
#include <memory>
#include "../commands/Command.hpp"


class ICommandBuilder {
protected:
    using Argument = std::pair<std::string,std::string>;
    using Arguments = std::vector<Argument>;
    using CommandPtr = std::unique_ptr<Command>;
public:
    virtual Command* buildCommand(Arguments&) = 0;
    virtual ~ICommandBuilder() = default;
};
#endif //PARSER_COMMANDBUILDER_H
