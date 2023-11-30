#include "ItemBuilder.hpp"

void IItemBuilder::configureItem(std::unordered_map <std::string, std::string>& attributes, Item* item) {
    for(auto iter = std::begin(attributes);iter != std::end(attributes); iter++) {
        auto attributeSetter = attributeRegistry->findAttribute(iter->first);
        attributeSetter -> setAttribute(item, iter -> second);
    }
}
