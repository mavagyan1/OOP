#ifndef OOP_DOCUMENT_H
#define OOP_DOCUMENT_H

#include "../Slide/Slide.hpp"

//singleton class
class Document {
public:
    Document(const Document&) = delete;
    Document& operator = (const Document&) = delete;
    static Document& getDocument();
    void addItemToSlide(Item&&);
    SlideId addSlide();
private:
    using slideId = int;
    std::unordered_map<slideId , Slide> document;
    Document();


};

#endif //OOP_DOCUMENT_H
