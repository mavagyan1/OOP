#ifndef _ITEM_HPP__
#define _ITEM_HPP__

#include <memory> //std::shared_ptr
#include <string>
#include <utility> //std::pair
#include <unordered_map>
#include "../AttributeRegistry/AttributeRegistry.hpp"
#include "Item Attributes/ElineStyle.hpp"
#include "../ShapeRegistry/ShapeRegistry.hpp"
#include "../shapes/IShape.hpp"
class Item {
private:
    using Color = int;
    using ID = int;
public:
    Item(std::string);
    void setFillColor(Color);
    void setLineStyle(LineStyle);
    void setLineColor(Color);
    void setGeom(int, int, int, int);
    Color getFillColor() const;
    Color getLineColor() const;
    LineStyle getLineStyle() const;
    std::string getType();
    int getId() const;
    int getTopLeftX() const;
    int getTopLeftY() const;
    int getButtomRightX() const;
    int getButtomRightY() const;
    std::shared_ptr<IShape> getShape();

private:

    ShapeRegistry& _shapeReg;
    struct Geom {   
        int topLeftX;
        int topLeftY;
        int buttomRightX;
        int buttomRightY;
    } _geom;

    Color _lineColor;
    Color _fillColor;
    LineStyle _lineStyle;
    std::string _type;
    static int _nextId;
    ID _id;
};


#endif //_ITEM_HPP__