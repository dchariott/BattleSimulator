//
// Created by Dylan Chariott on 2019-04-10.
//

#ifndef BATTLESIMULATOR_BATTLEMOVE_H
#define BATTLESIMULATOR_BATTLEMOVE_H
#include <random>
#include "actor.h"
using namespace std;

class BattleMove{
public:
    virtual void Execute()=0;
    virtual void Undo()=0;
    virtual ~BattleMove(){}
};
#endif //BATTLESIMULATOR_BATTLEMOVE_H
