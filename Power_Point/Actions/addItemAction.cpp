#include "addItemAction.hpp"
#include "../Application.hpp"
AddItemAction::AddItemAction(SlidePtr slide,ItemPtr item) {
    _slide = slide;
    _item = item;
}

void AddItemAction::runAction() {
    auto slideId = _slide->getId();
    Application::getApplication().getDocument().getSlide(slideId)->addItem(_item);
}