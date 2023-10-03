#ifndef __ITEM_STORAGE_HPP__
#define __ITEM_STORAGE_HPP__

#include "items/Item.hpp"
#include <vector>

class ItemStorage {
public:

    void addItem(Item* command);

    Item* getItem(int commandId);

    void removeItem(int commandId);

    void changeItem(int commandId);
private:
    std::vector<Item*> _items; // Maybe change to map
};
#endif //__ITEM_STORAGE_HPP__
