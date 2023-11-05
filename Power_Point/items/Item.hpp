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
    void setAttribute(std::pair<std::string,std::string>);
    bool containsAttribute(std::string) const;

protected:
    Item();

private:
    void initArguments();
    int getId() const;

    std::unordered_map<std::string,std::string> _attributes;
    static int _nextId;
    int _id;
};


#endif //__IITEM_HPP__