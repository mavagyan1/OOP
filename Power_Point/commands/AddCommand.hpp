#ifndef __ADD_COMMAND_HPP__
#define __ADD_COMMAND_HPP__

#include "../ItemRegistry/ItemRegistry.hpp"
#include "Command.hpp"

class Add : public Command {
public:
    /*
    * addArgument(Key,Value) function is used in buildCommand fonction of 
    * AddCommandBuilder class. When it creates the Add command, then adds arguments in it
    * from the map which is got from parser.
    */
    virtual void addArgument(Key,Value) override;
    virtual std::string execute() override;

private:
    ItemRegistry& itemRegistry{ItemRegistry::getItemRegistery()};
};

#endif //__ADD_COMMAND_HPP__
