#include "AttributeRegistry.hpp"
#include "../AttributeBuilder/ColorAttributeBuilder.hpp"
#include <iostream>
#include <memory>

AttributeRegistry::AttributeRegistry(){
    init();
}

void AttributeRegistry::init() {
    _attributes.insert({"-color",AttributeBuilderPtr(new ColorAttrubuteBuilder)});
}
auto AttributeRegistry::findAttribute(std::string attribute ) -> AttributeBuilderPtr {
    auto it = _attributes.find(attribute);
    if(it == _attributes.end()) {
         std::cout << "Cannot find the attribute"<< std::endl; //TODO:Add strickt checks
    }
    return std::move(it->second);
}