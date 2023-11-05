#include "RectangleItemBuilder.hpp"
#include "../items/rectangle.hpp"
#include <functional>

Item* RectangleItemBuilder::buildItem(std::unordered_map<std::string,std::string> attributes) {
    auto item = new Rectangle{};
    
    std::for_each(std::begin(attributes), std::end(attributes),[&item](const auto& attribute){
        item->setAttribute(attribute);
    });

    return item;
}