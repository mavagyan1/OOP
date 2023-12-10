#include "IShape.hpp"

auto IShape::clone(Item* item) -> ShapePtr {
    auto shape = std::make_unique<IShape>(*this);
    shape->_item = item;
    return shape;
}