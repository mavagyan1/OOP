#include "ItemRegistry.hpp"
#include "../ItemBuilder/ItemBuilder.hpp"
#include "../ItemBuilder/RectangleItemBuilder.hpp"
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
        std::cout << "Cannot find the command"<< std::endl;
    }
    return std::move(it->second);
}