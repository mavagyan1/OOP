#ifndef  __ITEM_BUILDER_HPP__
#define  __ITEM_BUILDER_HPP__
#include "../items/Item.hpp"
#include "../AttributeRegistry/AttributeRegistry.hpp"
#include <string>

class IItemBuilder {
protected:
    using Key = std::string;
    using Value = std::string;

public:
    virtual Item* buildItem(std::unordered_map<Key,Value>&) = 0;
    virtual ~IItemBuilder() = default;

protected:

    void configureItem(std::unordered_map<Key,Value>&, Item*);
    AttributeRegistry* attributeRegistry;
};

#endif //__ITEM_BUILDER_HPP__