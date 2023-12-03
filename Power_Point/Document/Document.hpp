#ifndef OOP_DOCUMENT_H
#define OOP_DOCUMENT_H

#include "../Slide/Slide.hpp"

/*
* This is a Singleton class
*/
class Document {
private:
    using slideId = int;
public:
    Document(const Document&) = delete;
    Document& operator = (const Document&) = delete;
    static Document& getDocument();
    // void addItemToSlide(Item&&);
    // slideId addSlide(); //SlideId
private:
    Document() = default;
    std::unordered_map<slideId , Slide> document;



};

#endif //OOP_DOCUMENT_H
