#ifndef __INPUT_HPP__
#define __INPUT_HPP__

#include "Iinput.hpp"


class ConsoleInput: Iinput  {
    public:
    std::stringstream read() override;
}; 
#endif //__INPUT_HPP__