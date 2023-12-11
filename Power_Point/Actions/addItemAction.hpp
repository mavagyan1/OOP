#ifndef __ADD_ITEM_ACTION_HPP__
#define __ADD_ITEM_ACTION_HPP__
#include "IAcion.hpp"
#include "../items/Item.hpp"
#include "../Slide/Slide.hpp"

class AddItemAction : public IAction {
private:
    using SlidePtr = std::shared_ptr<Slide>;
    using ItemPtr = std::shared_ptr<Item>; 
public:
    AddItemAction(SlidePtr,ItemPtr);
    void runAction() override; 
private:
    SlidePtr _slide;
    ItemPtr _item;
};

#endif //__ADD_ITEM_ACTION_HPP__