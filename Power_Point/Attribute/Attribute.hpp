#ifndef __ATTRIBUTE_HPP__
#define __ATTRIBUTE_HPP__

#include <string>

class Attribute {
public:
    virtual std::string getValue() const = 0;
};

#endif //__ATTRIBUTE_HPP__