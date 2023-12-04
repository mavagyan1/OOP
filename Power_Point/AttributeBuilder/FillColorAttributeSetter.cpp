#include "FillColorAttributeSetter.hpp"
#include "../items/Item.hpp"
#include <stdexcept> //std::runtime_error
#include <sstream> //std::istringstream

 void FillColorAttributeSetter::setAttribute(Item* item, std::string rgbStream) {
    std::istringstream color_stream(rgbStream);
    int r,g,b,a;
    char comma;
    color_stream >> r >> comma >> g >> comma >> b >> comma >> a;

    if (color_stream.fail() || comma != ',' || color_stream.rdbuf()->in_avail() != 0)
        throw std::runtime_error("Faild to read the fill color attribute");
    
    int rgba = (r << 24) | (g << 16) | (b << 8) | a;

    
    item->setFillColour(rgba);
}

