#ifndef __OOP_SLIDE_HPP__
#define __OOP_SLIDE_HPP__

#include "../items/Item.hpp"
#include <vector>
#include <memory>

class Slide {
private:
    using ID = int;
    using ItemPtr = std::shared_ptr<Item>;
    using ItemGroup = std::unordered_map<ID,ItemPtr>;
    using Iterator = ItemGroup::iterator;
public:
    Slide();
    Iterator begin();  
    Iterator end();
    ItemPtr getItem(ID id);
    bool isExist(ID id);
    void addItem(ItemPtr);
    void removeItem(ID id);
    ID getId() const;
    //void changeItem(int Id);
private:
    static ID _nextId;
    ID _id;
    ItemGroup _items; 
};
#endif //__OOP_SLIDE_HPP__
