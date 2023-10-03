#include "AddCommand.hpp"

Add::Add() {
    initArguments();
}

Command* Add::getCommand() {
    return new Add();
}

void Add::initArguments() {
    _arguments["-name"] = 0;
}

std::string Add::execute(std::stringstream args) {
    
    return "";
}




