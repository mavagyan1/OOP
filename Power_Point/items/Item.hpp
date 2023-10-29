#ifndef __IITEM_HPP__
#define __IITEM_HPP__

#include <any>
#include <string>
#include <unordered_map>
#inlcude "../Attribute/Attribute.hpp"

class Item {
public:
    void setLineWidth(double);
    void setLineColour(std::string);
    void setFillColour(std::string);
    void setLineStyle(std::string);

protected:
    Item(std::unordered_map<std::string, Attribute*>);

private:
    void initArguments();
    int getId() const;

    std::unordered_map<std::string,Attribute*> _attributes;
    static int _nextId;
    int _id;
};


#endif //__IITEM_HPP__