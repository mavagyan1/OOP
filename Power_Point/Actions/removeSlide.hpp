#ifndef __REMOVE_SLIDE_HPP__
#define __REMOVE_SLIDE_HPP__
#include "IAcion.hpp"
#include "../Slide/Slide.hpp"

class RemoveSlideAction : public IAction {
private:
    using SlideId = int;
public:
    RemoveSlideAction(SlideId);
    void runAction() override;
private:
    SlideId _id;
};

#endif //__REMOVE_SLIDE_HPP__