#include "ColorAttribute.hpp"

ColorAttribute::ColorAttribute(std::string color) : _color(color) {}

std::string ColorAttribute::getValue() const {
    return _color;
}