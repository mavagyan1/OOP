#ifndef __OOP_ATTRIBUTE_SETTER_HPP__
#define __OOP_ATTRIBUTE_SETTER_HPP__

#include "../AttributeRegistry/AttributeRegistry.hpp"
#include <string>

class Item;

class IAttributeSetGetter {
public:
    virtual void setAttribute(Item*,std::string) = 0;
    virtual ~IAttributeSetGetter() = default;
};

#endif //__OOP_ATTRIBUTE_SETTER_HPP__