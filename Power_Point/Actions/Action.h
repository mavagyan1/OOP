#ifndef OOP_ACTION_H
#define OOP_ACTION_H
#include "../Document/Document.hpp"

class Action {
public:
    void execute() = 0;

protected:
Document* document;
};

#endif //OOP_ACTION_H
