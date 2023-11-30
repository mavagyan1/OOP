#include "ColorAttributeSetter.hpp"
#include <memory>

 Attribute* ColorAttributeSetter::setAttribute(std::string attribute) {
    return new ColorAttribute(attribute);
}

 ColorAttributeSetter::ColorAttributeSetter() {}