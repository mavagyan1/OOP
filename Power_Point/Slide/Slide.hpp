#ifndef __OOP_SLIDE_HPP__
#define __OOP_SLIDE_HPP__

#include "../items/Item.hpp"
#include <vector>

class Slide {
private:
    using ID = int;
    using ItemGroup = std::unordered_map<ID,Item*>;
    using Iterator = ItemGroup::iterator;
public:
    Iterator begin();  
    Iterator end();

    Item* getItem(int commandId);
    void changeItem(int commandId);
    //void removeItem(int commandId);
    //void addItem(Item* command); 

private:
    ItemGroup _items; 
};
#endif //__OOP_SLIDE_HPP__
