#ifndef __TEXTUAL_DISPLAYABLE_HPP__
#define __TEXTUAL_DISPLAYABLE_HPP__
class Item;

class TextualDisplayable {
public:
 void print(Item* item) const;
protected:
    TextualDisplayable() = default;
};

#endif //__TEXTUAL_DISPLAYABLE_HPP__