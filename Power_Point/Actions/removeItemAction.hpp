#ifndef __REMOVE_ITEM_ACTION_HPP__
#define __REMOVE_ITEM_ACTION_HPP__
#include "IAcion.hpp"
#include "../items/Item.hpp"
#include "../Slide/Slide.hpp"

class RemveItemAction : public IAction {
private:
    using ItemId = int;
public:
    RemveItemAction(ItemId);
    void runAction() override; 
private:
    ItemId _id;
};

#endif //__REMOVE_ITEM_ACTION_HPP__