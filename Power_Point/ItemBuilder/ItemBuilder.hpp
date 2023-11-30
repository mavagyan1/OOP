#ifndef  __ITEM_BUILDER_HPP__
#define  __ITEM_BUILDER_HPP__
#include "../items/Item.hpp"
#include "../AttributeRegistry/AttributeRegistry.hpp"
#include <string>
//class Item;
class IItemBuilder {
public:
    virtual Item* buildItem(std::unordered_map<std::string,std::string>&) = 0;
    virtual ~IItemBuilder() = default;

protected:

    void configureItem(std::unordered_map<std::string,std::string>&, Item*);
    AttributeRegistry* attributeRegistry;
};

#endif //__ITEM_BUILDER_HPP__