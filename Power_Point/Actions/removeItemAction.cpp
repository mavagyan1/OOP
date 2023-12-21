#include "removeItemAction.hpp"
#include "../Application.hpp"

RemveItemAction::RemveItemAction(ItemId id) {
    _id = id;
}

void RemveItemAction::runAction() {
    auto& doc = Application::getApplication().getDocument();
    int slideId = 0;
    for(auto it = doc.begin(); it != doc.end(); ++it) {
        if( (*it)->isExist(_id) ) 
            slideId = (*it)->getId();
    }
    if(slideId)
        doc.getSlide(slideId)->removeItem(_id);
    else
        throw std::runtime_error("Item with provided ID does not eist\n");
}