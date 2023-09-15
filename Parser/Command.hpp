#ifndef __COMMAND_HPP__
#define __COMMAND_HPP__

#include "ICommand.hpp"

class Add : public ICommand {
public:
    virtual std::string execute(std::stringstream args);
};

class Sub : public ICommand {
public:
    virtual std::string execute(std::stringstream args);
};

class Mul : public ICommand {
public:
    virtual std::string execute(std::stringstream args);
};

class Div : public ICommand {
public:
    virtual std::string execute(std::stringstream args);
};

class And : public ICommand {
public:
    virtual std::string execute(std::stringstream args);
};

class Or : public ICommand {
public:
    virtual std::string execute(std::stringstream args);
};

class Xor : public ICommand {
public:
    virtual std::string execute(std::stringstream args);
};

class Not : public ICommand {
public:
    virtual std::string execute(std::stringstream args);
};

#endif //__COMMAND_HPP__
