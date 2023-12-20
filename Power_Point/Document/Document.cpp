#include "Document.hpp"
#include <stdexcept>

Document& Document::getDocument() {
    static Document doc;
    return doc;
}

void Document::addSlide(SlidePtr slide) {
    _slides.push_back(slide);
}

void Document::removeSlide(int Id) {
    auto it = _slides.begin();
    while(it != _slides.end() && (*it)->getId()!= Id) {
        ++it;
    }
    if(it == _slides.end())
        throw std::runtime_error("Slide with provided ID does not exist\n");;

    _slides.erase(it);

}
auto Document::getSlide(slideId Id) -> SlidePtr {
    auto it = _slides.begin();
    while(it != _slides.end() && (*it)->getId() != Id) {
        ++it;
    }
    if(it == _slides.end())
        throw std::runtime_error("Slide with provided ID does not exist\n");
        
    return *it;
}

Document::Iterator Document::begin() {
    return _slides.begin();
}

Document::Iterator Document::end() {
    return _slides.end();
}