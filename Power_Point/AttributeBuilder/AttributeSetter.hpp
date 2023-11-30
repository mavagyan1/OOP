#ifndef __OOP_ATTRIBUTE_SETTER_HPP__
#define __OOP_ATTRIBUTE_SETTER_HPP__

#include "../AttributeRegistry/AttributeRegistry.hpp"
#include <string>
/*
* The purpose of this class is to create Attributes for Items(color, lineStyle...).
* The objects of subclasses of IAttributeBuilder are presented as values of AttributeRegistry,
* in which the name of Attribute maps to the appropriate AttributrBuilder.
*
*/
class Item;
class IAttributeSetter {
public:
    virtual void setAttribute(Item&,std::string) = 0;
    virtual ~IAttributeSetter() = default;
};

#endif //__OOP_ATTRIBUTE_SETTER_HPP__