#include "AddItemAction.h"

void AddItemAction::execute() {
    document -> addItemToSlide(item, slideId);
}
