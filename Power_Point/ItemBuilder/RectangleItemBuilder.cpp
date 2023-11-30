#include "RectangleItemBuilder.hpp"
#include "../items/rectangle.hpp"
#include <functional>

Item* RectangleItemBuilder::buildItem(std::unordered_map<string,string> attributes) {
    auto item = new Rectangle{};
    configureItem(attributes, item);
    
    return item;
}