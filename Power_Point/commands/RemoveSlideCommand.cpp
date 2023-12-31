#include "RemoveSlideCommand.hpp"
#include <stdexcept>
#include "../Application.hpp"
#include "../Actions/removeSlide.hpp"

void RemoveSlide::addArgument(Key key, Value value) {
    _arguments[key] = value;
}

std::string RemoveSlide::execute() {
    auto iter = _arguments.find("-id");
    if(iter == _arguments.end())
        throw std::runtime_error("Missing slide id\n");
    auto slideId = stoi(iter->second);
    
    auto action = std::make_shared<RemoveSlideAction>(slideId);
    Application::getApplication().getDirector().doAction(action);

    return "Removed slide\n";
}