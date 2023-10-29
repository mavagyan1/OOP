#include "RectangleItemBuilder.hpp"
#include "../items/rectangle.hpp"

Item* RectangleItemBuilder::buildItem(std::unordered_map<std::string, std::string> arguments) {
    auto item = new Rectangle{};

    return item;
}