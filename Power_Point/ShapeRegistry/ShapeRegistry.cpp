#include "ShapeRegistry.hpp"
#include "../shapes/TriangleShape.hpp"
#include <stdexcept>



ShapeRegistry::ShapeRegistry() {
    init();
}

void ShapeRegistry::init() {
    _shapes.insert({"triangle",std::make_unique<TriangleShape>()});

}
ShapeRegistry& ShapeRegistry::getShapeRegistry() {
    static ShapeRegistry shapeReg;
    return shapeReg;
}

auto ShapeRegistry::findShape(std::string shape) -> ShapePtr {
    auto it = _shapes.find(shape);
    if(it == _shapes.end()) {
        throw std::runtime_error("Shape not found\n");
    }
    return it->second;
}

bool ShapeRegistry::contains(std::string shape) {
    return _shapes.contains(shape);
}
