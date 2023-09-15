#ifndef __ICOMMAND_HPP__
#define __ICOMMAND_HPP__

#include <sstream>
#include <string>

class ICommand {
public:
    virtual std::string execute(std::stringstream args) = 0;
};

#endif //__ICOMMAND_HPP__
