#ifndef __ATTRIBUTE_REGISTRY_HPP__
#define __ATTRIBUTE_REGISTRY_HPP__

#include "../AttributeBuilder/AttributeBuilder.hpp"
#include <memory>
#include <string>
#include <unordered_map>

class AttributeRegistry {
private:
    using AttributeBuilderPtr = std::unique_ptr<IAttributeBuilder>;
    using Registry = std::unordered_map<std::string,AttributeBuilderPtr>;

public:
    AttributeRegistry();
    AttributeBuilderPtr findAttribute(std::string);

private:
    AttributeRegistry();
    static AttributeRegistry* attributeRegistry;
    Registry _attributes;
    void init();
};

#endif //__ATTRIBUTE_REGISTRY_HPP__