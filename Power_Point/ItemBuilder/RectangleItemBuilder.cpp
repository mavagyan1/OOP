#include "RectangleItemBuilder.hpp"
#include "../items/rectangle.hpp"
#include <functional>

Item* RectangleItemBuilder::buildItem() {
    auto item = new Rectangle{};
    
    return item;
}