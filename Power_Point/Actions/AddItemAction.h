#ifndef OOP_ADDITEMACTION_H
#define OOP_ADDITEMACTION_H
#include "Action.h"

class AddItemAction : public Action {
public:
    void execute();
private:
    Item* item;
    std::string slideId;

};

#endif //OOP_ADDITEMACTION_H
