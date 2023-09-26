#ifndef __IINPUT_HPP__
#define __IINPUT_HPP__

#include <sstream>

class Iinput {
    public:
    virtual  std::stringstream  read() = 0;
    virtual ~Iinput() = default;
}; 

#endif //__IINPUT_HPP__