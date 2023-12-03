#include "LineStyleAttributeSetter.hpp"
#include "../items/Item.hpp"
#include "../items/Item Attributes/ElineStyle.hpp"
#include <unordered_map>
#include <stdexcept> //std::runtime_error

void LineStyleAttributeSetter::setAttribute(Item* item, std::string lineStyle) {
    LineStyle lineStyle_atr;
    static const std::unordered_map<std::string, LineStyle> styleMap = {
        {"BOLD", LineStyle::BOLD},
        {"DOTTED", LineStyle::DOTTED}
    };
    
    auto it = styleMap.find(lineStyle);
    if (it != styleMap.end()) {
        lineStyle_atr = it->second;
    } else {
        throw std::runtime_error("Inccorect lineStyle argument format");
    }
    
    item->setLineStyle(lineStyle_atr);
    
}