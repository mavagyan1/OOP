#include "AddCommand.hpp"
#include "../Application.hpp"
#include "../Actions/addSlideAction.hpp"
#include "../Actions/addItemAction.hpp"
#include "../ItemBuilder/ItemBuilder.hpp"
#include <stdexcept>
#include <iostream>
#include <memory>

Add::Add() : _shapeReg{ShapeRegistry::getShapeRegistry()} { }

void Add::addArgument(Key key, Value val) {
    _arguments[key] = val;
}

std::string Add::execute() {

    auto iter = _arguments.find("-name");
    if(iter == std::end(_arguments)) 
        throw std::runtime_error("Missing command argument\n");

    auto name = iter -> second; 
    _arguments.erase(iter);

    if(name == "slide") {
        addSlide();
    }
    else if(name == "item") {
        addItem();
    }
    else    
        throw std::runtime_error("Incorrect command argument\n");
    
    return {};
}


std::string Add::addSlide() {
    auto slide = std::make_shared<Slide>();
    auto action = std::make_shared<AddSlideAction>(slide);
    Application::getApplication().getDirector().doAction(action);

    return "Slide is added\n";
}

std::string Add::addItem() {
    auto iter = _arguments.find("-slideId");
    if(iter == _arguments.end())
        throw std::runtime_error("Missing slide id\n");

    int slideId = stoi(iter->second);
    _arguments.erase(iter);

    auto slide = Application::getApplication().getDocument().getSlide(slideId);
    auto item = std::shared_ptr<Item>(ItemBuilder().buildItem(_arguments));
    auto action = std::make_shared<AddItemAction>(slide,item);
    Application::getApplication().getDirector().doAction(action);

    return "Item is added\n";
}




