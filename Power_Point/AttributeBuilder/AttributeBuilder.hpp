#include "../Attribute/Attribute.hpp"
#include "../AttributeRegistry/AttributeRegistry.hpp"
#include <string>
/*
* The purpose of this class is to create Attributes for Items(color, lineStyle...).
* The objects of subclasses of IAttributeBuilder are presented as values of AttributeRegistry,
* in which the name of Attribute maps to the appropriate AttributrBuilder.
*
*/

class IAttributeBuilder {
public:
    virtual  Attribute* buildAttribute(std::string);
    virtual ~IAttributeBuilder() = default;
};