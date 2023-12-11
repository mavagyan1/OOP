#ifndef __OOP_FILL_COLOR_ATTRIBUTE_SETTER_HPP__
#define __OOP_FILL_COLOR_ATTRIBUTE_SETTER_HPP__
#include "AttributeSetGetter.hpp"

//TODO: Determine the way of parsing the string to the appropriate type
//TODO: Determine the usage of _color field (Is it neccesary?)

class FillColorAttributeSetGetter : public IAttributeSetGetter {
public:
    void setAttribute(Item*, std::string color) override;
    int getAttribute(Item*) const;
// private:
//     Color _color;
};

#endif //__OOP_FILL_COLOR_ATTRIBUTE_SETTER_HPP__