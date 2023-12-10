#ifndef __OOP_I_SHAPE_HPP__
#define __OOP_I_SHAPE_HPP__

#include <memory>

class Item;

class IShape {
public:
    using ShapePtr = std::unique_ptr<IShape>;
    ShapePtr clone(Item*);
    virtual ~IShape() = default;

protected:
    IShape() = default;
    Item* _item;   //TODO: Remove in future
};

#endif //__OOP_I_SHAPE_HPP__

