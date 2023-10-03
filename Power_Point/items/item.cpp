#include "Item.hpp"

int Item::_nextId = 1;

Item::Item() {
    initArguments();
    _id = _nextId++;
}

void Item::initArguments() {

    _attributes.insert({"lWidth",1.0});
    _attributes.insert({"lColour", "white"});
    _attributes.insert({"fColour", "black"});
    _attributes.insert({"lStyle", "straight"});
}

int Item::getId() const {
    return _id;
}

void Item::setLineWidth(double width) {
    _attributes.find("lWidth")->second = width;
}

void Item::setLineColour(std::string colour) {
    _attributes.find("lColour")->second = colour;
}

void Item::setFillColour(std::string colour) {
    _attributes.find("fColour")->second = colour;
}

void Item::setLineStyle(std::string style) {
    _attributes.find("lStyle")->second = style;
}