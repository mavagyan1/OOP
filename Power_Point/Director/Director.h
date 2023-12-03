#ifndef OOP_DIRECTOR_H
#define OOP_DIRECTOR_H
#include "../items/Item.hpp"
#include "../Slide/Slide.hpp"
#include "vector"
#include "../Actions/AddItemAction.h"

class Director {
public:
    void addItem(Item*, std::string);
    void addSlide(Slide*);
    void changeItem(Item*);
    void removeItem(Item*)
    void removeSlide(Slide* slide);
    void display();
    void save();
    void load();
private:
    std::vector<Action*> actions;
};

#endif //OOP_DIRECTOR_H
