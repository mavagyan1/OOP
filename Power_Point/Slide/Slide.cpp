#include "Slide.hpp"

Item* ItemStorage::getItem(int itemId) {
    return _items[itemId];
}

void ItemStorage::addItem(Item* item){
    _items.push_back(item);
}

void ItemStorage::removeItem(int itemId) {
    //TODO implement
}

void ItemStorage::changeItem(int itemdId) {
    //TODO implement
}