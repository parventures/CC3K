#ifndef ENEMY_H
#define ENEMY_H

#include <sstream>
#include "character.h"

class Enemy : public Character {
public:
    Enemy(double atk, double def, double hp);
    ~Enemy() = 0;
    void setHostile(bool n=true) override;
    void notify(Player* p) override;
    void attack(Drow *d) override;
    void attack(Goblin *g) override;
    void attack(Player *p) override;
    bool isDead() override;
};

#endif
