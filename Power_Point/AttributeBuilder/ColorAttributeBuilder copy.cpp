#include "ColorAttributeBuilder.hpp"
#include <memory>

 Attribute* ColorAttributeBuilder::buildAttribute(std::string attribute) {
    return new ColorAttribute(attribute);
}

 ColorAttributeBuilder::ColorAttributeBuilder() {}