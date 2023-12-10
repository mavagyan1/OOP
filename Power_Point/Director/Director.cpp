#include "Director.hpp"

Director& Director::getDirector() {
    static Director dir;
    return dir;
}

void Director::doAction(std::shared_ptr<IAction> action) {
    action->runAction();
}