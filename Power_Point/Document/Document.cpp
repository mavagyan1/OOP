#include "Document.hpp"

Document& Document::getDocument() {
    static Document doc;
    return doc;
}