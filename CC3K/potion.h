#ifndef potion_hpp
#define potion_hpp
#include "item.h"

class Potion : public Item{
public:
    ~Potion();
    char print() override;
};

#endif
