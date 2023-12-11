#ifndef  __ITEM_BUILDER_HPP__
#define  __ITEM_BUILDER_HPP__
#include "../items/Item.hpp"
#include "../AttributeRegistry/AttributeRegistry.hpp"
#include <string>

class ItemBuilder {
private:
    using Key = std::string;
    using Value = std::string;

public:
    ItemBuilder();
    Item* buildItem(std::unordered_map<Key,Value>& arguments);
    ~ItemBuilder() = default;

private:
    void setGeom(std::unordered_map<Key,Value>&, Item*);
    void setAttributes(std::unordered_map<Key,Value>&, Item*);
    //void setAttributes(std::unordered_map<Key,Value>&, Item*);
    AttributeRegistry& _attributeRegistry;
};

#endif //__ITEM_BUILDER_HPP__