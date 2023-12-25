#include "../Application.hpp"
#include "removeSlide.hpp"

RemoveSlideAction::RemoveSlideAction(SlideId id) {
    _id = id;
}

void RemoveSlideAction::runAction() {
    Application::getApplication().getDocument().removeSlide(_id);
    
    //add the action in undo/redo container
}