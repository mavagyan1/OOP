#include "Command.hpp"

Command::Command() : _document(Document::getDocument()) { }

// void Command::addArgument(Key key, Value val) {
//     if(checkArgument(key))
//         _arguments[key] = val;
//     else 
//         throw std::runtime_error("Invalid argument");
// }

// bool Command::checkArgument(Key key) const {
//     if(_arguments.find(key) == _arguments.end() )
//         return false;
//     return true;
// }