#include "../Application.hpp"
#include "addSlideAction.hpp"

AddSlideAction::AddSlideAction(SlidePtr slide) {
    _slide = slide;
}

void AddSlideAction::runAction() {
    Application::getApplication().getDocument().addSlide(_slide); 
    
    //add the action in undo/redo container
}