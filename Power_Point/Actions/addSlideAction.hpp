#ifndef __ADD_SLIDE_HPP__
#define __ADD_SLIDE_HPP__
#include "IAcion.hpp"
#include "../Slide/Slide.hpp"

class AddSlideAction : public IAction {
private:
    using SlidePtr = std::shared_ptr<Slide>;  //TODO:: remove the dublications of such a declarations
public:
    AddSlideAction(SlidePtr);
    void runAction() override;
private:
    SlidePtr _slide;
};

#endif //__ADD_SLIDE_HPP__