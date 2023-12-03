#include "Slide.hpp"

Item* Slide::getItem(int itemId) {
    return _items[itemId];
}

void Slide::changeItem(int itemdId) {
    //TODO implement
}

Slide::Iterator Slide::begin() {
    return _items.begin();
}

Slide::Iterator Slide::end() {
    return _items.end();
}


// void ItemStorage::addItem(Item* item){
//     _items.push_back(item);
// }

// void ItemStorage::removeItem(int itemId) {
//     //TODO implement
// }