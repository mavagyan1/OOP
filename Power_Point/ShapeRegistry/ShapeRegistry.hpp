#ifndef _SHAPE_REGISTRY_HPP__
#define _SHAPE_REGISTRY_HPP__
#include <memory>
#include <string>
#include <unordered_map>
#include "../shapes/IShape.hpp"


class ShapeRegistry {
private:
    using ShapePtr = std::shared_ptr<IShape>;
    using Registry = std::unordered_map<std::string, ShapePtr>;

public:
    static ShapeRegistry& getShapeRegistry();
    ShapeRegistry(const ShapeRegistry&) = delete;
    ShapeRegistry& operator=(const ShapeRegistry&) = delete;
    ShapePtr findShape(std::string);
    bool contains(std::string);

private:
    ShapeRegistry();
    Registry _shapes;
    void init();
};

#endif //_SHAPE_REGISTRY_HPP__