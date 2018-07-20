#ifndef cell_hpp
#define cell_hpp
#include <vector>
#include <iostream>
#include "object.h"

class TextDisplay;
class Object;
class Cell
{
    int row, col;
    TextDisplay *td;
    std::vector<Cell *> observers;
protected:
    Object* player = nullptr;
    Object* ob = nullptr;
public:
    Cell(int r, int c);
    virtual char print() = 0;
    bool hasPlayer();
    bool isOccupied();
    void clear();
    void setPotion();
    void setEnemy();
    void setGold();
    virtual void move_to(Cell &to);
    virtual bool accept_move(Cell &who);

    //    virtual void attack(Cell &target);
    //    virtual void beAttacked(Cell &whoFrom);
    //
    //    virtual void notifyObservers();
    //    virtual void notify(Cell &whoFrom);
    //    virtual Object& getObject();
    //    virtual void attachObserver(Cell* ob);
    //    virtual void setDisplay(TextDisplay *td);
    //    virtual void notifyDisplay();
    //
    Object* getPlayer();


    virtual ~Cell() = 0;
};

#endif
