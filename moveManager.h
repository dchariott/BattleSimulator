//
// Created by Dylan Chariott on 2019-04-11.
//

#ifndef BATTLESIMULATOR_MOVEMANAGER_H
#define BATTLESIMULATOR_MOVEMANAGER_H
#include "stack.h"
#include "attackOne.h"
#include "attackTwo.h"
#include "heal.h"
#include "enums.h"

class MoveManager{
private:
    Stack<BattleMove*> history;
public:
    MoveManager();
    void ExecuteMove(MoveType type, Actor* self, Actor* other);
    void UndoMove();
    ~MoveManager();
};

#endif //BATTLESIMULATOR_MOVEMANAGER_H
