#ifndef __CONSOLE_OUTPUT_HPP__
#define __CONSOLE_OUTPUT_HPP__

#include "Ioutput.hpp"

class ConsoleOutput: Ioutput  {
    public:
    void print(std::string&) override;
}; 

#endif //__CONSOLE_OUTPUT_HPP__