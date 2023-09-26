#ifndef __IOUTPUT_HPP__
#define __IOUTPUT_HPP__

#include <sstream>
#include <string_view>

class Ioutput {
    public:
    virtual void  print(std::string_view) = 0;
    virtual ~Ioutput() = default;
}; 

#endif //__IOUTPUT_HPP__