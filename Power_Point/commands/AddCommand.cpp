#include "AddCommand.hpp"

Add::Add() {
    initArguments();
    itemRegistry = new ItemRegistry();
}

void Add::initArguments() {
    _arguments["-name"] = "";
    _arguments["-color"] = "";
}

std::string Add::execute() {
    auto item_iter = _arguments.find("-name");
    if(item_iter == std::end(_arguments)) {
        std::cout<< "Missing Item name! Try again!"<<std::endl;
    } else {
            _arguments.erase(item_iter);
            auto item = ((itemRegistry.findItem(item_iter -> second)) -> second) -> buildItem(_arguments);

    }
    return "Add execution complete";
}




