# example4/Makefile
CXX=g++
CXXFLAGS=-std=c++14 -Wextra -Wpedantic -Wall -Werror=vla -MMD -g
OBJECTS=main.o character.o enemy.o object.o orc.o player.o shade.o dwarf.o vampire.o halfling.o goblin.o nullcell.o bridge.o cell.o chamber.o grid.o item.o potion.o factory.o drow.o elf.o human.o floorcell.o doorcell.o resHP.o poiHP.o gold.o dragon.o merchant.o troll.o plusAtk.o plusDef.o minAtk.o minDef.o
DEPENDS=${OBJECTS:.o=.d}
EXEC=cc3k


${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

clean:
	rm ${OBJECTS} ${DEPENDS} ${EXEC}
.PHONY: clean

