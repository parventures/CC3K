#include "vampire.h"
#include <climits>

Vampire::Vampire(int atk=25, int def=25, int hp=50): Player{atk, def, hp} {
    setMaxHp(INT32_MAX);
}

char Vampire::print() {
     return 'V';
}

void Vampire::beAttacked(Object *whoFrom) {
  whoFrom->attack(this);
}