#ifndef __Command_HPP__
#define __Command_HPP__

#include <any>
#include <sstream>
#include <string>
#include <unordered_map>

class Command {
private:
    using Key = std::string;
    using Value = std::any;
    using Arguments = std::unordered_map<Key,Value>;

public:
    void addArgument(Key,Value);
    bool checkArgument(Key) const;
    virtual std::string execute() = 0;
    virtual Command* getCommand() = 0;
    virtual ~Command() = default;

protected:
    Arguments _arguments;
};

#endif //__Command_HPP__
