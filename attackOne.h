//
// Created by Dylan Chariott on 2019-04-10.
//

#ifndef BATTLESIMULATOR_ATTACKONE_H
#define BATTLESIMULATOR_ATTACKONE_H
#include "battleMove.h"

class AttackOne : public BattleMove{
private:
    int actualDamage;
    Actor* other;
    default_random_engine generator;
public:
    AttackOne(Actor* other);
    void Execute();
    void Undo();
};
#endif //BATTLESIMULATOR_ATTACKONE_H
