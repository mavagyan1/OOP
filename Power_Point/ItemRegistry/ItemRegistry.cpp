#include "ItemRegistry.hpp"
#include "../ItemBuilder/ItemBuilder.hpp"
#include "../ItemBuilder/RectangleItemBuilder.hpp"
#include <iostream>

ItemRegistry::ItemRegistry() {
    init();
}

void ItemRegistry::init() {
    _items.insert({"add",ItemBuilderPtr(new RectangleItemBuilder)});
}

auto ItemRegistry::findCommand(std::string command) -> ItemBuilderPtr {
    auto it = _items.find(command);
    if(it == _items.end()) {
        std::cout << "Cannot find the command"<< std::endl;
    }
    return std::move(it->second);
}