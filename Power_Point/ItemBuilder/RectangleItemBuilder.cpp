#include "RectangleItemBuilder.hpp"
#include "../items/rectangle.hpp"
#include <functional>

Item* RectangleItemBuilder::buildItem(std::unordered_map<std::string, std::string> arguments) {
    auto item = new Rectangle{};

    std::for_each(std::begin(arguments), std::end(arguments),)
    auto attribute = arguments.find()

    return item;
}