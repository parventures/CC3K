#ifndef SHADE_H
#define SHADE_H
#include "player.h"
#include <string>

class Shade : public Player
{
  public:
    Shade(int atk = 25, int def = 25, int hp = 125);
    //char print() override;
    void beAttacked(Object *whoFrom) override;
};
#endif
