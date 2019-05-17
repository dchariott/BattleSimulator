//
// Created by Dylan Chariott on 2019-04-10.
//

#include "attackTwo.h"

AttackTwo::AttackTwo(Actor* other): other(other){
    generator.seed(::time(NULL));
}

void AttackTwo::Execute(){
    uniform_int_distribution<int> damage_range(0, 25);
    int damage = 0;
    damage = damage_range(generator);
    other->Hit(damage);
    actualDamage = damage;
}

void AttackTwo::Undo(){
    other->Heal(actualDamage);
}