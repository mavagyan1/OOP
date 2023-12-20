#include "RemoveItemCommand.hpp"
#include <stdexcept>
#include "../Application.hpp"

void RemoveItem::addArgument(Key key, Value value) {
    _arguments[key] = value;
}

std::string RemoveItem::execute() {
    auto iter = _arguments.find("-id");
    if(iter == _arguments.end())
        throw std::runtime_error("Missing slide id\n");

    auto itemId = stoi(iter->second);
    int slideId = 0;
    auto& doc = Application::getApplication().getDocument();
    for(auto it = doc.begin(); it != doc.end(); ++it) {
        if( (*it)->isExist(itemId) ) 
            slideId = (*it)->getId();
    }

    if(slideId)
        doc.getSlide(slideId)->removeItem(itemId);
    else
        throw std::runtime_error("Item with provided ID does not eist\n");

    return "Removed item\n";
}

