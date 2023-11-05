#ifndef __RECTANGLE_ITEM_BUILDER_HPP__
#define __RECTANGLE_ITEM_BUILDER_HPP__
#include "ItemBuilder.hpp"

class RectangleItemBuilder : public IItemBuilder {
public:
    Item* buildItem() override;
};

#endif//__RECTANGLE_ITEM_BUILDER_HPP__