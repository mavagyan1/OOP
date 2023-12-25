#include "DisplayCommand.hpp"
#include "../Application.hpp"
#include "../Slide/Slide.hpp"
#include <iostream>

std::string Display::execute() {
    auto& doc = Application::getApplication().getDocument();
    for( auto it = doc.begin(); it != doc.end(); ++it) {
       for(auto slideIt = (*it)->begin(); slideIt != (*it)->end(); ++slideIt )
            print(slideIt->second);
    }
    
    return {};
}

void Display::print(std::shared_ptr<Item> item) {
    std::cout << "**************************************" << std::endl;
    std::cout << "Type: " << item->getType() << std::endl;
    std::cout << "ID: " << item->getId() << std::endl;
    std::cout <<"Attributes:"<< std::endl;
    std::cout <<"   LineStyle: " << ((item->getLineStyle() == LineStyle::BOLD) ? "BOLD" : "DOTTED" ) << std::endl;
    std::cout <<"   LineColor: " << item->getLineColor() << std::endl;
    std::cout <<"   FillColor: " << item->getFillColor() << std::endl;
    std::cout<<"Geom:" <<std::endl;
    std::cout <<"   TopLeftX: " <<item->getTopLeftX() <<std::endl;
    std::cout <<"   TopLeftY: " <<item->getTopLeftY() <<std::endl;
    std::cout <<"   ButtomRightX " <<item->getButtomRightX() <<std::endl;
    std::cout <<"   ButtomRightY " <<item->getButtomRightY() <<std::endl;
    std::cout << "**************************************" << std::endl;
    std::cout << std::endl;
}