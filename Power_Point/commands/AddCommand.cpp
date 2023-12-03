#include "AddCommand.hpp"

void Add::addArgument(Key key, Value val) {
    _arguments[key] = val;
}

std::string Add::execute() {
    auto item_iter = _arguments.find("-name");
    if(item_iter == std::end(_arguments)) 
        throw std::runtime_error("Missing command argument");
    
    auto item_name = item_iter -> second; 
    _arguments.erase(item_iter);
    auto item = (itemRegistry.findItem(item_name)) -> buildItem(_arguments);
  

    //TODO: Add the item in the slide
    
    return "Add execution complete";
}




