#ifndef __OOP_ATTRIBUTE_REGISTRY_HPP__
#define __OOP_ATTRIBUTE_REGISTRY_HPP__

#include "../AttributeBuilder/AttributeSetter.hpp"
#include <memory>
#include <string>
#include <unordered_map>

/*
* This class serves as a registry which maps the name of attribute to its appropriate setter.
*
* This is a Singleton class
*/
class IAttributeSetter; //Error in   using AttributeSetterPtr = std::unique_ptr<IAttributeSetter>; without this declaration
class AttributeRegistry {
private:
    using AttributeSetterPtr = std::unique_ptr<IAttributeSetter>;
    using Registry = std::unordered_map<std::string,AttributeSetterPtr>;

public:
    static AttributeRegistry& getAttributeRegistery();
    AttributeRegistry(const AttributeRegistry&) = delete;
    AttributeRegistry& operator=(const AttributeRegistry&) = delete;
    AttributeSetterPtr findAttributeSetter(std::string);

private:
    AttributeRegistry();
    void init();
    Registry _attributes;
};

#endif //__OOP_ATTRIBUTE_REGISTRY_HPP__