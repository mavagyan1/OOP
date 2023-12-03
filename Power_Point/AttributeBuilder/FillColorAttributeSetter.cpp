#include "FillColorAttributeSetter.hpp"
#include "../items/Item.hpp"
#include "../items/Item Attributes/Color.hpp"
#include <stdexcept> //std::runtime_error
#include <sstream> //std::istringstream

 void FillColorAttributeSetter::setAttribute(Item* item, std::string color) {
    std::istringstream color_stream(color);
    Color color_atr;

    char comma;
    if (!(color_stream >> color_atr.red >> comma >> color_atr.green >> comma >> color_atr.blue)){
        throw std::runtime_error("Inccorect color argument format");
    }

    item->setFillColour(color_atr);
 }

