#include "Command.hpp"
#include <iostream>
#include <stdexcept> //std:out_of_range

void Command::addArgument(Key key, Value val) {
    if(_arguments.contains(key))   //C++20
        _arguments[key] = val;
    else
        throw std::out_of_range("Argument not found");

    // if(checkArgument(key))
    //     _arguments[key] = val;
    // else 
    //     std::cout << "Incorrect argument" << std::endl;
}

// bool Command::checkArgument(Key key) const {
//     if(_arguments.find(key) == _arguments.end() )
//         return false;
//     return true;
// }