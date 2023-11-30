#include "Item.hpp"
#include <iterator>

int Item::_nextId = 1;

Item::Item(): color{0} {
    initArguments();
    _id = _nextId++;

}

int Item::getId() const {
    return _id;
}

void Item::initArguments() {

    _attributes.insert({"-lWidth",_attributeRegistry.findAttribute("-lWidtg")->buildAttribute("1.0")});
    _attributes.insert({"lColour", _attributeRegistry.findAttribute("-lColour")->buildAttribute("white")});
    _attributes.insert({"fColour", _attributeRegistry.findAttribute("-fColour")->buildAttribute("black")});
    _attributes.insert({"lStyle", _attributeRegistry.findAttribute("-lStyle")->buildAttribute("straight")});
}



void Item::setColor(std::string color) {
    try {
        int _color  = stoi(color)
    }
    catch(const std::invalid_argument& ia) {
        std::cerr << "Invalid argument: " << ia.what() << std::endl;
    }

}

void Item::setAttribute(const std::pair<std::string,std::string>& attribute) {
     auto attribute_builder = _attributeRegistry.findAttribute(attribute.first);
     _attributes[attribute.first] = attribute_builder->buildAttribute(attribute.second);
}

void Item::setAttributes(const std::unordered_map<std::string,std::string>& attributes) {
    for(const auto& attribute : attributes)
        setAttribute(attribute);
}


// void Item::setLineWidth(double width) {
//     _attributes.find("lWidth")->second = width;
// }

// void Item::setLineColour(std::string colour) {
//     _attributes.find("lColour")->second = colour;
// }

// void Item::setFillColour(std::string colour) {
//     _attributes.find("fColour")->second = colour;
// }

// void Item::setLineStyle(std::string style) {
//     _attributes.find("lStyle")->second = style;
// }