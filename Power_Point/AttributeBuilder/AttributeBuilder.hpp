#include "../Attribute/Attribute.hpp"
#include "../AttributeRegistry/AttributeRegistry.hpp"
#include <string>

class IAttributeBuilder {
public:
    virtual Attribute* buildAttribute(std::string);

protected:
   static AttributeRegistry* registry;

};