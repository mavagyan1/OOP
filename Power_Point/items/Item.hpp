#ifndef __IITEM_HPP__
#define __IITEM_HPP__

#include <memory> //std::shared_ptr
#include <string>
#include <utility> //std::pair
#include <unordered_map>
#include "../AttributeRegistry/AttributeRegistry.hpp"
#include "Item Attributes/ElineStyle.h"
#include "Item Attributes/Color.h"

class Item {
public:
    // void setLineWidth(double);
    void setFillColour(Color);
    void setLineStyle(LineStyle);
    void setLineColor(Color);
    virtual void draw();

protected:
    Item();

private:
    Color lineColor;
    Color fillColor;
    LineStyle lineStyle;
    void initArguments();
    int getId() const;


    static int _nextId;
    int _id;
};


#endif //__IITEM_HPP__