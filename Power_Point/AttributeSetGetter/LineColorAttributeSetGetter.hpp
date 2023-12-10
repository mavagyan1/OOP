#ifndef __OOP_LINE_COLOR_ATTRIBUTE_SETTER_HPP__
#define __OOP_LINE_COLOR_ATTRIBUTE_SETTER_HPP__
#include "AttributeSetGetter.hpp"

class LineColorAttributeSetGetter : public IAttributeSetGetter {
public:
    void setAttribute(Item*, std::string color) override;
    int getAttribute(Item*) const;
};

#endif //__OOP_LINE_COLOR_ATTRIBUTE_SETTER_HPP__