#ifndef __Command_HPP__
#define __Command_HPP__

#include <any>
#include <sstream>
#include <string>
#include <unordered_map>

class Command {
protected:
    using Key = std::string;
    using Value = std::string;  //TODO: use std::any or another structure;
    using Arguments = std::unordered_map<Key,Value>;

public:
    /*
    * This function is pure virtual, because every command may need to add its arguments in a
    * special way, e.g the add command does not neet to check the passed attribues, because 
    * the attributs are represented as a separated class, and checking is beeing done in that class. 
    */
    virtual void addArgument(Key,Value) = 0;
    virtual std::string execute() = 0;
    virtual ~Command() = default;

protected:
    Arguments _arguments;
};

#endif //__Command_HPP__
