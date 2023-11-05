#include "Item.hpp"
#include <stdexcept>

int Item::_nextId = 1;

Item::Item() {
    initArguments();
    _id = _nextId++;
}

void Item::initArguments() {

    //TODO: change the value type to std::any or impl. Value class
    _attributes.insert({"lWidth","1.0"});
    _attributes.insert({"lColour", "white"});
    _attributes.insert({"fColour", "black"});
    _attributes.insert({"lStyle", "straight"});
}

int Item::getId() const {
    return _id;
}

void Item::setLineWidth(double width) {
    _attributes.find("lWidth")->second = width;
   // _attributes.at("lWidth")= width;

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

bool Item::containsAttribute(std::string attribute) const {
    return _attributes.contains(attribute);    //C++20
}

void Item::setAttribute(std::pair<std::string,std::string> attribute) {
    if(containsAttribute(attribute.first))
        _attributes[attribute.first] = attribute.second;
    else
        throw std::out_of_range("Attribute not found");
}
