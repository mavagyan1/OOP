#include "AttributeRegistry.hpp"
#include "../AttributeBuilder/ColorAttributeSetter.hpp"
#include <iostream>
#include <memory>
#include <stdexcept> //std::out_of_range

AttributeRegistry::AttributeRegistry(){
    init();
}

AttributeRegistry& AttributeRegistry::getAttributeRegistery() {
    static AttributeRegistry attributeReg;
    return attributeReg;
}

void AttributeRegistry::init() {
    _attributes.insert({"-color",AttributeSetterPtr(new ColorAttributeSetter)});
}

auto AttributeRegistry::findAttributeSetter(std::string attribute ) -> AttributeSetterPtr {
    auto it = _attributes.find(attribute);
    if(it == _attributes.end()) {
        throw std::out_of_range("Attribute not found");
    }
    return std::move(it->second);
}