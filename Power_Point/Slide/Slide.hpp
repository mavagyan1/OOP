#ifndef __OOP_SLIDE_HPP__
#define __OOP_SLIDE_HPP__

#include "../items/Item.hpp"
#include <vector>

class Slide {
public:

    void addItem(Item* command);

    Item* getItem(int commandId);

    void removeItem(int commandId);

    void changeItem(int commandId);
private:
    std::vector<Item*> _items; // Maybe change to map
};
#endif //__OOP_SLIDE_HPP__
