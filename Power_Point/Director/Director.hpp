#ifndef __DIRECTOR_HPP_
#define __DIRECTOR_HPP_
#include "../Actions/IAcion.hpp"
#include <memory>

class Director {
public:
    static Director& getDirector();
    Director(const Director&) = delete;
    Director& operator=(const Director&) = delete;
    void doAction(std::shared_ptr<IAction>);
private:
    Director() = default;
    //Add undo/redo container
};

#endif //__DIRECTOR_HPP_