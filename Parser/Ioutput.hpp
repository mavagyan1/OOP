#ifndef __IOUTPUT_HPP__
#define __IOUTPUT_HPP__

#include <sstream>
#include <string>

class Ioutput {
    public:
    virtual void  print(std::string&) = 0;
}; 

#endif //__IOUTPUT_HPP__