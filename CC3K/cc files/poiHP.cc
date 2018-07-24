#include "poiHP.h"
#include "player.h"

void poiHP::beUsed(Player *whoFrom) {
    if ((whoFrom->getHp() - 10 * whoFrom->getPotRate()) > 0) {
        whoFrom->changeHp(-10*whoFrom->getPotRate());
    } else {
        whoFrom->changeHp(0);
    }
}
poiHP::~poiHP(){}