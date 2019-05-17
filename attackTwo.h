//
// Created by Dylan Chariott on 2019-04-10.
//

#ifndef BATTLESIMULATOR_ATTACKTWO_H
#define BATTLESIMULATOR_ATTACKTWO_H
#include "battleMove.h"

class AttackTwo : public BattleMove{
private:
    int actualDamage;
    Actor* other;
    default_random_engine generator;
public:
    AttackTwo(Actor* other);
    void Execute();
    void Undo();
};
#endif //BATTLESIMULATOR_ATTACKTWO_H
