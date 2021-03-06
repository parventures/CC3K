#include "player.h"
#include "halfling.h"
#include "dwarf.h"

using namespace std;

Player::Player( double atk, double def, double hp): Character{atk, def, hp}, gold{0}, merchant_hostile{false} {}
char Player::print() {
    return '@';
}
void Player::changeGold(int n) {
    gold += n;
}

int Player::getGold() {
    return gold;
}

void Player::notify(Player* p) {}

void Player::attack(Halfling *h) {
    int chance = rand() % 10 + 1;
    double dmg = (-getAtk() * 100 / (100 + h->getDef()));
    if (chance > 5) {   // Halfling has 50% chance to cause PC to miss.
    } else {
        dmg = 0;
    }
    Character::storeAction(-dmg, print(), h->print(), h->getHp());

}


void Player::attack(Dwarf *d) {
    double dmg = (-getAtk() * 100 / (100 + d->getDef()));
    int chance = rand() % 10 + 1;
    if (chance > getMissChance()) {
        d->changeHp(dmg);
    } else {
        dmg = 0;
    }
    Character::storeAction(-dmg, print(), d->print(), d->getHp());
}

void Player::attack(Enemy *e) {
    int chance = rand() % 10 + 1;
    double dmg = (-getAtk() * 100 / (100 + e->getDef()));
    if (chance > e->getMissChance()) { 
        e->changeHp(dmg);
        e->setHostile(true); //only need to set hostile for merchant and dragon 
    } else {
        dmg = 0;
    }
    Character::storeAction(-dmg, print(), e->print(), e->getHp());

}
