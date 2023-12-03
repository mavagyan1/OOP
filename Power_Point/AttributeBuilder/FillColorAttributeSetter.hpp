#ifndef __OOP_FILL_COLOR_ATTRIBUTE_SETTER_HPP__
#define __OOP_FILL_COLOR_ATTRIBUTE_SETTER_HPP__
#include "AttributeSetter.hpp"

//TODO: Determine the way of parsing the string to the appropriate type
//TODO: Determine the usage of _color field (Is it neccesary?)

class FillColorAttributeSetter : public IAttributeSetter {
public:
    void setAttribute(Item*, std::string color) override;
// private:
//     Color _color;
};

#endif //__OOP_FILL_COLOR_ATTRIBUTE_SETTER_HPP__