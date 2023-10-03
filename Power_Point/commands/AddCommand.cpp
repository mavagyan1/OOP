#include "AddCommand.hpp"

Add::Add() {
    initArguments();
}

Command* Add::getCommand() {
    return new Add();
}

void Add::initArguments() {
    _arguments["-name"] = "";
    _arguments["-color"] = "";
}

std::string Add::execute() {
    
    return "Add execution complete";
}




