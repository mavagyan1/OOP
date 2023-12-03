#ifndef __Command_HPP__
#define __Command_HPP__

#include <any>
#include <sstream>
#include <string>
#include <unordered_map>
#include "../Document/Document.hpp"

class Command {
protected:
    using Key = std::string;
    using Value = std::string;
    using Arguments = std::unordered_map<Key,Value>;

public:
  
    Command();
    /*
    * This function is pure virtual, because every command may need to add its arguments in a
    * special way, e.g the add command does not neet to check the passed attribues, because 
    * setting attributes is the responsibility of AttributeSetter class.
    */
    virtual void addArgument(Key,Value) = 0;
    virtual std::string execute() = 0;
    virtual ~Command() = default;

protected:
    Arguments _arguments;
    Document& _document;

};

#endif //__Command_HPP__
