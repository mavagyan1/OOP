#ifndef __OOP_ATTRIBUTE_REGISTRY_HPP__
#define __OOP_ATTRIBUTE_REGISTRY_HPP__

#include "../AttributeSetGetter/AttributeSetGetter.hpp"
#include <memory>
#include <string>
#include <unordered_map>

/*
* This class serves as a registry which maps the name of attribute to its appropriate setter.
*
* This is a Singleton class
*/
class IAttributeSetGetter; //Error in   using AttributeSetGetterPtr = std::unique_ptr<IAttributeSetGetter>; without this declaration
class AttributeRegistry {
private:
    using AttributeSetGetterPtr = std::unique_ptr<IAttributeSetGetter>;
    using Registry = std::unordered_map<std::string,AttributeSetGetterPtr>;

public:
    static AttributeRegistry& getAttributeRegistery();
    AttributeRegistry(const AttributeRegistry&) = delete;
    AttributeRegistry& operator=(const AttributeRegistry&) = delete;
    AttributeSetGetterPtr findAttributeSetGetter(std::string);

private:
    AttributeRegistry();
    void init();
    Registry _attributes;
};

#endif //__OOP_ATTRIBUTE_REGISTRY_HPP__