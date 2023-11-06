#include "AddCommandBuilder.hpp"
#include "../commands/Command.hpp"
#include "../commands/AddCommand.hpp"
#include <utility> //std::pair
#include <memory> 


Command* AddCommandBuilder::buildCommand(Arguments& args) {
    auto cmd = new Add{};

    for(auto it = args.begin(); it != args.end(); ++it) {
        auto key = it->first;
        auto value = it->second;
        cmd->addArgument(key,value);
    }

    return cmd;
}