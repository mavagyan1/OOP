#include "Command.hpp"
#include <iostream>

void Command::addArgument(Key key, Value val) {
    if(checkArgument(key))
        _arguments[key] = val;
    else 
        std::cout << "Incorrect argument" << std::endl;
}

bool Command::checkArgument(Key key) const {
    if(_arguments.find(key) == _arguments.end() )
        return false;
    return true;
}