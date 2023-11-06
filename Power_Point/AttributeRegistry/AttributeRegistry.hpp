#ifndef __ATTRIBUTE_REGISTRY_HPP__
#define __ATTRIBUTE_REGISTRY_HPP__

#include "../AttributeBuilder/AttributeBuilder.hpp"
#include <memory>
#include <string>
#include <unordered_map>

/*
* This class serves as a registry which maps the name of attribute to its appropriate builder.
* To build the attribute we need, first we have to find it in this registry by "findAttribute"
* function. It retruns a smart pointer to the appropriate builder. Then we just have to call buildAttribute function on it.
*/

/*
* This is a Singleton class
*/

class AttributeRegistry {
private:
    using AttributeBuilderPtr = std::unique_ptr<IAttributeBuilder>;
    using Registry = std::unordered_map<std::string,AttributeBuilderPtr>;

public:
    static AttributeRegistry& getAttributeRegistery();
    AttributeRegistry(const AttributeRegistry&) = delete;
    AttributeRegistry& operator=(const AttributeRegistry&) = delete;
    AttributeBuilderPtr findAttribute(std::string);

private:
    AttributeRegistry();
    Registry _attributes;
    void init();
};

#endif //__ATTRIBUTE_REGISTRY_HPP__