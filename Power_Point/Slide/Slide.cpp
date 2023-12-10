#include "Slide.hpp"
#include <stdexcept>

int Slide::_nextId = 1;

Slide::Slide() {
    _id = _nextId++;
}

auto Slide::getItem(ID itemId) -> ItemPtr {
    auto it = _items.find(itemId);
    if(it != _items.end())
        throw std::runtime_error("Item with provided ID is not found\n");
    return it->second;
}


Slide::Iterator Slide::begin() {
    return _items.begin();
}

Slide::Iterator Slide::end() {
    return _items.end();
}


void Slide::addItem(ItemPtr item){
    _items.insert({item->getId(),item});
}

void Slide::removeItem(ID Id) {
    _items.erase(Id);
}

bool Slide::isExist(ID Id) {
    return _items.contains(Id);
}

auto Slide::getId() const -> ID {
    return _id;
}