#include "RemoveItemCommand.hpp"
#include <stdexcept>
#include "../Application.hpp"
#include "../Actions/removeItemAction.hpp"

void RemoveItem::addArgument(Key key, Value value) {
    _arguments[key] = value;
}

std::string RemoveItem::execute() {
    auto iter = _arguments.find("-id");
    if(iter == _arguments.end())
        throw std::runtime_error("Missing slide id\n");

    auto itemId = stoi(iter->second);
    auto action = std::make_shared<RemveItemAction>(itemId);
    Application::getApplication().getDirector().doAction(action);

    return "Removed item\n";
}

