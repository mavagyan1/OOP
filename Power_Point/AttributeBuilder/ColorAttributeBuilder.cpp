#include "ColorAttributeBuilder.hpp"

Attribute* ColorAttributeBuilder::buildAttribute(std::string attribute) {
    return new ColorAttribute(attribute);
}

 ColorAttributeBuilder::ColorAttributeBuilder() {
    registry = new AttributeRegistry();
}