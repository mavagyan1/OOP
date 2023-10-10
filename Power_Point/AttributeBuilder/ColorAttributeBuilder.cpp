#include "ColorAttributeBuilder.hpp"

Attribute* ColorAttrubuteBuilder::buildAttribute(std::string attribute) {
    return new ColorAttribute(attribute);
}