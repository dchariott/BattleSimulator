//
// Created by Dylan Chariott on 2019-04-10.
//

#ifndef BATTLESIMULATOR_HEAL_H
#define BATTLESIMULATOR_HEAL_H
#include "battleMove.h"

class Heal : public BattleMove{
private:
    int healAmount;
    Actor* self;
    default_random_engine generator;
public:
    Heal(Actor* self);
    void Execute();
    void Undo();
};
#endif //BATTLESIMULATOR_HEAL_H
