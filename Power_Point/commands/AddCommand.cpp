#include "AddCommand.hpp"

Add::Add() {
    initArguments();
}

void Add::initArguments() {
    _arguments["-name"] = "";
}

std::string Add::execute() {
    
    return "Add execution complete";
}




