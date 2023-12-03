#include "Item.hpp"
#include <iterator>

int Item::_nextId = 1;

Item::Item() {
    _id = _nextId++;

}

int Item::getId() const {
    return _id;
}

void Item::setFillColour(Color color) {
    fillColor = color;
}

void Item::setLineColor(Color color) {
    lineColor = color;
}

void Item::setLineStyle(LineStyle style) {
    lineStyle = style;
}