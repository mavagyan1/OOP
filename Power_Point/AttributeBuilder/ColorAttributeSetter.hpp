#ifndef __COLOR_ATTRIBUTE_SETTER_HPP__
#define  __COLOR_ATTRIBUTE_SETTER_HPP__
#include "AttributeSetter.hpp"
#include "../Attribute/ColorAttribute.hpp"
#include "../items/Item Attributes/Color.h"

class ColorAttributeSetter : public IAttributeSetter {
public:
    Color setAttribute(Item&, std::string color) override;
    ColorAttributeSetter();

private:
    Color _color;
};

#endif //__COLOR_ATTRIBUTE_SETTER_HPP__