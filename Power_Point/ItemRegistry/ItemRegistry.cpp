#include "ItemRegistry.hpp"
#include "../ItemBuilder/ItemBuilder.hpp"
#include "../ItemBuilder/RectangleItemBuilder.hpp"
#include <stdexcept>
#include <iostream>

ItemRegistry::ItemRegistry() {
    init();
}

void ItemRegistry::init() {
    _items.insert({"rectangle",ItemBuilderPtr(new RectangleItemBuilder)});
}

ItemRegistry& ItemRegistry::getItemRegistery() {
    static ItemRegistry itemReg;
    return itemReg;
}

auto ItemRegistry::findItem(std::string item) -> ItemBuilderPtr {
    auto it = _items.find(item);
    if(it == _items.end()) {
        throw std::runtime_error("Item not found");
    }
    return std::move(it->second);
}