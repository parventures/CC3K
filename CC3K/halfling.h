#ifndef halfling_hpp
#define halfling_hpp
#include <iostream>
#include "enemy.h"
class Object;

class Halfling : public Enemy
{
  public:
    Halfling();
    char print() override;
    void beAttacked(Object* whoFrom) override;
};

#endif
