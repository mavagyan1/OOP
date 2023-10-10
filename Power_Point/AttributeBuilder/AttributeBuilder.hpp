#include "../Attribute/Attribute.hpp"
#include <string>

class IAttributeBuilder {
public:
    virtual Attribute* buildAttribute(std::string);
};