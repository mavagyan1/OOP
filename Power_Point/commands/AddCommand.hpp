#ifndef __ADD_COMMAND_HPP__
#define __ADD_COMMAND_HPP__
#include "Command.hpp"
#include "../ShapeRegistry/ShapeRegistry.hpp"

class Add : public Command {
public:
    /*
    * addArgument(Key,Value) function is used in buildCommand fonction of 
    * AddCommandBuilder class. When it creates the Add command, then adds arguments in it
    * from the map which is got from parser.
    */
    Add();
    void addArgument(Key,Value);
    virtual std::string execute() override;

private:
    std::string addSlide();
    std::string addItem();
    ShapeRegistry& _shapeReg;
};

#endif //__ADD_COMMAND_HPP__
