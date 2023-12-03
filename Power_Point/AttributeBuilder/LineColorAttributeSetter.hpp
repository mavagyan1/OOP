#ifndef __OOP_LINE_COLOR_ATTRIBUTE_SETTER_HPP__
#define __OOP_LINE_COLOR_ATTRIBUTE_SETTER_HPP__
#include "AttributeSetter.hpp"

class LineColorAttributeSetter : public IAttributeSetter {
public:
    void setAttribute(Item*, std::string color) override;
};

#endif //__OOP_LINE_COLOR_ATTRIBUTE_SETTER_HPP__