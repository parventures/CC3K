#ifndef floorcell_hpp
#define floorcell_hpp
#include "cell.h"

class Object;
class FloorCell: public Cell{
public:
    FloorCell(int r, int c);

    char print() override;

/*
    void move_to(Cell& to) override;
    bool accept_move(Cell &who) override;
    void interact(Cell &target) override;
    void accept_interact(Cell &whoFrom) override;
    
    void notifyObservers() override;
    void notify(Cell &whoFrom) override;
    Object& getObject() override;
    void attachObserver(Cell* ob) override;
    */
};

#endif