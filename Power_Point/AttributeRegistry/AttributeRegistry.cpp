#include "AttributeRegistry.hpp"
#include "../AttributeSetGetter/LineColorAttributeSetGetter.hpp"
#include "../AttributeSetGetter/FillColorAttributeSetGetter.hpp"
#include "../AttributeSetGetter/LineStyleAttributeSetGetter.hpp"

#include <iostream>
#include <memory>
#include <stdexcept> //std::runtime_error

AttributeRegistry::AttributeRegistry(){
    init();
}

AttributeRegistry& AttributeRegistry::getAttributeRegistery() {
    static AttributeRegistry attributeReg;
    return attributeReg;
}

void AttributeRegistry::init() {
    _attributes.insert({"-lineColor",AttributeSetGetterPtr(new LineColorAttributeSetGetter)});
    _attributes.insert({"-fillColor",AttributeSetGetterPtr(new FillColorAttributeSetGetter)});
    _attributes.insert({"-lineStyle",AttributeSetGetterPtr(new LineStyleAttributeSetGetter)});
}

auto AttributeRegistry::findAttributeSetGetter(std::string attribute ) -> AttributeSetGetterPtr {
    auto it = _attributes.find(attribute);
    if(it == _attributes.end()) {
        throw std::runtime_error("Attribute not found\n");
    }
    return std::move(it->second);
}