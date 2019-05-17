//
// Created by Dylan Chariott on 2019-04-10.
//

#include "actor.h"
#include "moveManager.h"

Actor::Actor(int health, string type): health(health), type(type){
    generator.seed(::time(NULL));
}

void Actor::DoMove(MoveManager& mgr, Actor* other){
    uniform_int_distribution<int> move_choice(0, 1);
    int choice = 0;
    choice = move_choice(generator);
    mgr.ExecuteMove(moves[choice], this, other);
}

void Actor::Hit(int damage){
    cout << type << ", (" << health << ") " << "is hit with " << damage << " damage." << endl;
    health -= damage;
    health = max(health, 0);
}

void Actor::Heal(int amount){
    cout << type << ", (" << health << ") " << "is healed by " << amount << "hp." << endl;
    health += amount;
}

const int Actor::DisplayHealth(){
    return health;
}

const string Actor::DisplayType(){
    return type;
}

bool Actor::IsDead(){
    return health <= 0;
}