//
// Created by Dylan Chariott on 2019-04-10.
//

#ifndef BATTLESIMULATOR_ACTOR_H
#define BATTLESIMULATOR_ACTOR_H
#include <string>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include "enums.h"
class MoveManager;
using namespace std;

class Actor{
public:
    Actor(int health, string type);
    void DoMove(MoveManager& mgr, Actor* other);
    void Hit(int damage);
    void Heal(int amount);
    const int DisplayHealth();
    const string DisplayType();
    bool IsDead();
protected:
    string type;
    int health;
    vector<MoveType> moves;
    default_random_engine generator;
};
#endif //BATTLESIMULATOR_ACTOR_H
