#ifndef __IITEM_HPP__
#define __IITEM_HPP__

#include <any>
#include <string>
#include <unordered_map>

class Item {
public:
    void setLineWidth(double);
    void setLineColour(std::string);
    void setFillColour(std::string);
    void setLineStyle(std::string);

protected:
    Item();

private:
    void initArguments();
    int getId() const;

    std::unordered_map<std::string,std::any> _attributes;
    static int _nextId;
    int _id;
};


#endif //__IITEM_HPP__