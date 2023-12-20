#include "RemoveSlideCommandBuilder.hpp"

auto RemoveSlideCommandBuilder::buildCommand(Arguments& args) -> CommandPtr {
    auto cmd =  std::make_shared<RemoveSlide>();

    for(auto it = args.begin(); it != args.end(); ++it) {
        auto key = it->first;
        auto value = it->second;
        cmd->addArgument(key,value);
    }

    return cmd;
}