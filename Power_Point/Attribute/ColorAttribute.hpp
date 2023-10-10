#ifndef __COLOR_ATTRIBUTE_HPP__
#define __COLOR_ATTRIBUTE_HPP__
#include "Attribute.hpp"
#include <string>

class ColorAttribute : public Attribute {
public:
    ColorAttribute(std::string);
    std::string getValue() const override;
private:
    std::string _color;
};

#endif //__COLOR_ATTRIBUTE_HPP__
