#ifndef __COLOR_ATTRIBUTE_BUILDER_HPP__
#define  __COLOR_ATTRIBUTE_BUILDER_HPP__
#include "AttributeBuilder.hpp"
#include "../Attribute/ColorAttribute.hpp"

class ColorAttrubuteBuilder : public IAttributeBuilder {
public:
    Attribute* buildAttribute(std::string color) override;
};

#endif //__COLOR_ATTRIBUTE_BUILDER_HPP__