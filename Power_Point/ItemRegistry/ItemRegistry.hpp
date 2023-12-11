#ifndef __ITEM_REGISTRY_HPP__
#define __ITEM_REGISTRY_HPP__

#include "../ItemBuilder/ItemBuilder.hpp"
#include <memory> //std::unique_ptr
#include <unordered_map>

/*
* This class serves as a registry which maps the name of item to its appropriate builder.
* To build the item we need, first we have to find it in this registry by "findItem"
* function. It retruns a smart pointer to the appropriate builder. Then we just have to call buildItem function on it.
*/

/*
* This is a Singleton class
*/

class ItemRegistry {
private:
    using ItemBuilderPtr = std::unique_ptr<IItemBuilder>;
    using Registry = std::unordered_map<std::string, ItemBuilderPtr>;

public:
    static ItemRegistry& getItemRegistery();
    ItemRegistry(const ItemRegistry&) = delete;
    ItemRegistry& operator=(const ItemRegistry&) = delete;
    ItemBuilderPtr findItem(std::string);

private:
    ItemRegistry();
    Registry _items;
    void init();
};


#endif //__ITEM_REGISTRY_HPP__