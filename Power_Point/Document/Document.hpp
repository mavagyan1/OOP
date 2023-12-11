#ifndef OOP_DOCUMENT_H
#define OOP_DOCUMENT_H

#include "../Slide/Slide.hpp"
#include <vector>
#include <memory>

/*
* This is a Singleton class
*/
class Document {

private:
    using slideId = int;
    using  SlidePtr = std::shared_ptr<Slide>;
    using Slides = std::vector<SlidePtr>;
public:
    using Iterator = Slides::iterator;
public:
    Document(const Document&) = delete;
    Document& operator=(const Document&) = delete;

    Iterator begin();  
    Iterator end();
    static Document& getDocument();
    void addSlide(SlidePtr);
    void removeSlide(int Id);
    SlidePtr getSlide(int Id);
private:
    Document() = default;
    Slides _slides;

};

#endif //OOP_DOCUMENT_H
