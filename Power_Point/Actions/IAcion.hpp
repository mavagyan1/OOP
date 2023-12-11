#ifndef __I_ACCTION_HPP__
#define __I_ACCTION_HPP__

class IAction {
public:
    virtual void runAction() = 0;
    virtual ~IAction() = default;
};

#endif //__I_ACCTION_HPP__