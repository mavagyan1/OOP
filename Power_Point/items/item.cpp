#include "Item.hpp"
#include <iterator>
#include <stdexcept>

int Item::_nextId = 1;

Item::Item(std::string type) : _shapeReg(ShapeRegistry::getShapeRegistry()) {
    if( !(_shapeReg.contains(type)) )
        throw std::runtime_error("Incorrect shape type\n");
    _type = type;
    _id = _nextId++;
}

std::shared_ptr<IShape> Item::getShape() {
    return _shapeReg.findShape(_type)->clone(this);
}

void Item::setGeom(int x1, int y1, int x2, int y2 ) {
    _geom.topLeftX = x1;
    _geom.topLeftY = y1;
    _geom.buttomRightX = x2;
    _geom.buttomRightY = y2; 
}


std::string Item::getType() {
    return _type;
}

int Item::getId() const {
    return _id;
}

void Item::setFillColor(Color color) {
    _fillColor = color;
}

void Item::setLineColor(Color color) {
    _lineColor = color;
}

void Item::setLineStyle(LineStyle style) {
    _lineStyle = style;
}

auto Item::getFillColor() const -> Color{
    return _fillColor;
}

auto Item::getLineColor() const -> Color{
    return _lineColor;
}

auto Item::getLineStyle() const -> LineStyle {
    return _lineStyle;
}

int Item::getButtomRightX() const {
    return _geom.buttomRightX;
}

int Item::getButtomRightY() const {
    return _geom.buttomRightY;
}

int Item::getTopLeftX() const {
    return _geom.topLeftX;
}

int Item::getTopLeftY() const {
    return _geom.topLeftY;
}