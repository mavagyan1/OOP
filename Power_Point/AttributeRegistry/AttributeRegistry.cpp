#include "AttributeRegistry.hpp"
#include "../AttributeBuilder/LineColorAttributeSetter.hpp"
#include "../AttributeBuilder/FillColorAttributeSetter.hpp"
#include "../AttributeBuilder/LineStyleAttributeSetter.hpp"

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
    _attributes.insert({"-lineColor",AttributeSetterPtr(new LineColorAttributeSetter)});
    _attributes.insert({"-fillColor",AttributeSetterPtr(new FillColorAttributeSetter)});
    _attributes.insert({"-lineStyle",AttributeSetterPtr(new LineStyleAttributeSetter)});
}

auto AttributeRegistry::findAttributeSetter(std::string attribute ) -> AttributeSetterPtr {
    auto it = _attributes.find(attribute);
    if(it == _attributes.end()) {
        throw std::runtime_error("Attribute not found");
    }
    return std::move(it->second);
}