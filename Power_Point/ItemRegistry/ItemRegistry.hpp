#ifndef __ITEM_REGISTRY_HPP__
#define __ITEM_REGISTRY_HPP__
#include "../ItemBuilder/ItemBuilder.hpp"
#include <memory> //std::unique_ptr
#include <unordered_map>

class ItemRegistry {
private:
    using ItemBuilderPtr = std::unique_ptr<IItemBuilder>;
    using Registry = std::unordered_map<std::string, ItemBuilderPtr>;

public: 
    ItemRegistry();
    ItemBuilderPtr findCommand(std::string);

private:
    Registry _items;
    void init();
};


#endif //__ITEM_TEGISTRY_HPP__