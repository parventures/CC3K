#ifndef CHARACTER_H
#define CHARACTER_H
#include "object.h"
#include <string>
#include <sstream>
#include <vector>

class Character : public Object
{
    double atk;
    double def;
    double hp;
    double maxHp;
    int missChance;
    double potRate=1;
    double atkEffect=0;
    double defEffect=0;
    static std::vector <std::string> actions;
  public:
    Character(double atk, double def, double hp);
    void changeAtk(double n);
    void changeDef(double n);
    void changeHp(double n);
    void setMaxHp(double n);
    void setMissChance(int n);
    static void clearActions();
    static void addAction(std::string s);
    static std::vector <std::string> getAction();
    static void cleanActions();
    static void storeAction(int dmg, char attacker, char defender, int hp);
    static void storePotion(std::string type);
    double getAtk();
    double getDef();
    double getHp();
    double getMaxHp();
    double getPotRate();
    bool dead();
    int getMissChance();
    void setPotRate(double n);
    void resetEffect();
    void attack(Item *whoTo) override;
    void beUsed(Player *whoFrom) override;
    void notify(Player* p) override{}
    ~Character() = 0;
};
#endif
