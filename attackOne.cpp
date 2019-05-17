//
// Created by Dylan Chariott on 2019-04-10.
//

#include "attackOne.h"

AttackOne::AttackOne(Actor* other): other(other){
    generator.seed(::time(NULL));
}

void AttackOne::Execute(){
    uniform_int_distribution<int> damage_range(10, 15);
    int damage = 0;
    damage = damage_range(generator);
    other->Hit(damage);
    actualDamage = damage;
}

void AttackOne::Undo(){
    other->Heal(actualDamage);
}