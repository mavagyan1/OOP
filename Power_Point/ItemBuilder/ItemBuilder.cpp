#include "ItemBuilder.hpp"
#include <stdexcept>
#include <string> //std::stoi

ItemBuilder::ItemBuilder() : _attributeRegistry(AttributeRegistry::getAttributeRegistery()) { }

Item* ItemBuilder::buildItem(std::unordered_map<Key,Value>& arguments) {
    auto iter = arguments.find("-type");
    if(iter == arguments.end())
        throw std::runtime_error("Missing item type\n");
    auto item_name = iter->second;
    arguments.erase(iter);
    auto item = new Item(item_name);

    setGeom(arguments,item); 
    setAttributes(arguments,item);

    return item;
}

void ItemBuilder::setAttributes(std::unordered_map<Key,Value>& arguments, Item* item) {
    for(auto iter = std::begin(arguments); iter != std::end(arguments); ++iter) {
        auto AttributeSetGetter = _attributeRegistry.findAttributeSetGetter(iter->first);
        AttributeSetGetter -> setAttribute(item, iter -> second);
    }
}

void ItemBuilder::setGeom(std::unordered_map<Key,Value>& arguments, Item* item) {
std::unordered_map<std::string, int> coordinates;
    coordinates["-x1"] = 0;
    coordinates["-y1"] = 0;
    coordinates["-x2"] = 0;
    coordinates["-y2"] = 0;

    for (const auto& entry : arguments) {
        const std::string& key = entry.first;
        const std::string& value = entry.second;

        auto coordIter = coordinates.find(key);
        if (coordIter != coordinates.end()) {
            coordIter->second = std::stoi(value);
            arguments.erase(key);
        }
    }
    item->setGeom(coordinates["-x1"], coordinates["-y1"], coordinates["-x2"], coordinates["-y2"]);
}


