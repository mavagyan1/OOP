#ifndef  __ITEM_BUILDER_HPP__
#define  __ITEM_BUILDER_HPP__
#include "../items/Item.hpp"
#include "../AttributeRegistry/AttributeRegistry.hpp"

//class Item;
class IItemBuilder {
public:
    virtual Item* buildItem() = 0;
    virtual ~IItemBuilder() = default;

private:

    AttributeRegistry* attributeRegistry;
};

#endif //__ITEM_BUILDER_HPP__