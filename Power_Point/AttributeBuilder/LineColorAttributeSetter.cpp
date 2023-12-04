#include "LineColorAttributeSetter.hpp"
#include "../items/Item.hpp"
#include <stdexcept> //std::runtime_error
#include <sstream> //std::istringstream


void LineColorAttributeSetter::setAttribute(Item* item, std::string rgbStream) {
    std::istringstream color_stream(rgbStream);
    int r,g,b;
    char comma;
    color_stream >> r >> comma >> g >> comma >> b;

    if (color_stream.fail() || comma != ',' || color_stream.rdbuf()->in_avail() != 0) {
        throw std::runtime_error("Faild to read the line color attribute");
    
    int rgb = (r << 16) | (g << 8) | b;

    item->setLineColor(rgb);
}

