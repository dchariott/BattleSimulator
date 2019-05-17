//
// Created by Dylan Chariott on 2019-04-12.
//

#ifndef BATTLESIMULATOR_RUNNER_H
#define BATTLESIMULATOR_RUNNER_H
#include "warrior.h"
#include "knight.h"
#include "ghost.h"
#include "moveManager.h"
#include "enums.h"

class Runner{
private:
    MoveManager mgr;
    Actor* P1;
    Actor* P2;
public:
    Runner();
    void Simulate();
};
#endif //BATTLESIMULATOR_RUNNER_H
