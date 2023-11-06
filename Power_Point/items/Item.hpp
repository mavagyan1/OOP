#ifndef __IITEM_HPP__
#define __IITEM_HPP__

#include <memory> //std::shared_ptr
#include <string>
#include <utility> //std::pair
#include <unordered_map>
#include "../Attribute/Attribute.hpp"
#include "../AttributeRegistry/AttributeRegistry.hpp"

class Item {
public:
    // void setLineWidth(double);
    // void setLineColour(std::string);
    // void setFillColour(std::string);
    // void setLineStyle(std::string);
    void setLineColor(std::string);
    void setAttribute(const std::pair<std::string,std::string>&);
    void setAttributes(const std::unordered_map<std::string,std::string>&);

protected:
    Item();

private:
    void initArguments();
    int getId() const;


    std::unordered_map<std::string,Attribute*> _attributes;
    AttributeRegistry& _attributeRegistry{AttributeRegistry::getAttributeRegistery()};
    static int _nextId;
    int _id;
};


#endif //__IITEM_HPP__