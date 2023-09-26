#include "Command.hpp"

void Command::addArgument(Key key, Value val) {
    _arguments[key] = val;
}

bool Command::checkArgument(Key key) const {
    if(_arguments.find(key) == _arguments.end() )
        return false;
    return true;
}