#ifndef __OOP_LINE_STYLE_ATTRIBUTE_SETTER_HPP__
#define __OOP_LINE_STYLE_ATTRIBUTE_SETTER_HPP__
#include "AttributeSetGetter.hpp"
#include "../items/Item Attributes/ElineStyle.hpp"


class LineStyleAttributeSetGetter : public IAttributeSetGetter {
public:
    void setAttribute(Item*, std::string lineStyle) override;
    LineStyle getAttribute(Item*) const;
};

#endif // __OOP_LINE_STYLE_ATTRIBUTE_SETTER_HPP__