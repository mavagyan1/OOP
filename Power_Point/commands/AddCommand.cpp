#include "AddCommand.hpp"

Add::Add() {
    //initArguments();
}
void Add::addArgument(Key key, Value val) {
    _arguments[key] = val;
}


/*
*No need more
*/
// void Add::initArguments() {
//     _arguments["-name"] = "";
//     _arguments["-color"] = "";
//}

std::string Add::execute() {
    auto item_iter = _arguments.find("-name");
    if(item_iter == std::end(_arguments)) 
        throw std::runtime_error("Missing command argument");

    auto item = (itemRegistry.findItem(item_iter -> second)) -> buildItem();
    _arguments.erase(item_iter);
    item->setAttributes(_arguments);
    
    //TODO: Add the item in the slide
    
    return "Add execution complete";
}




