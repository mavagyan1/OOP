#include "ItemRegistry.hpp"
#include "../ItemBuilder/ItemBuilder.hpp"
#include "../ItemBuilder/RectangleItemBuilder.hpp"
#inlcude <stdexcept>
#include <iostream>

ItemRegistry::ItemRegistry() {
    init();
}

void ItemRegistry::init() {
    _items.insert({"rectangle",ItemBuilderPtr(new RectangleItemBuilder)});
}

auto ItemRegistry::findItem(std::string item) -> ItemBuilderPtr {
    auto it = _items.find(item);
    if(it == _items.end()) {
        throw std::runtime_error("Invalid item name");
    }
    return std::move(it->second);
}