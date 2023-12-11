#ifndef __Command_HPP__
#define __Command_HPP__

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
    virtual std::string execute() = 0;
    virtual ~Command() = default;

protected:
    Arguments _arguments;
};

#endif //__Command_HPP__
