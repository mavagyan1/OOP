#ifndef __Command_HPP__
#define __Command_HPP__

#include <any>
#include <sstream>
#include <string>
#include <unordered_map>

class Command {
private:
    using Key = std::string;
    using Value = std::string; //std::any; 
    using Arguments = std::unordered_map<Key,Value>;

public:
    void addArgument(Key,Value);   
    virtual std::string execute() = 0; 
    virtual ~Command() = default;

    //bool checkArgument(Key) const;  //After changes in addArgument no need of this function
    //virtual Command* getCommand() = 0;

protected:
    Arguments _arguments;
};

#endif //__Command_HPP__
