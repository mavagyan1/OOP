#ifndef __OOP_LINE_STYLE_ATTRIBUTE_SETTER_HPP__
#define __OOP_LINE_STYLE_ATTRIBUTE_SETTER_HPP__
#include "AttributeSetter.hpp"

class LineStyleAttributeSetter : public IAttributeSetter {
public:
    void setAttribute(Item*, std::string lineStyle) override;
};

#endif // __OOP_LINE_STYLE_ATTRIBUTE_SETTER_HPP__