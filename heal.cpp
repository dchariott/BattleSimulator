//
// Created by Dylan Chariott on 2019-04-10.
//

#include "heal.h"

Heal::Heal(Actor* self): self(self){
    generator.seed(::time(NULL));
}

void Heal::Execute(){
    uniform_int_distribution<int> heal_range(10, 15);
    int amount = 0;
    amount = heal_range(generator);
    self->Heal(amount);
    healAmount = amount;
}

void Heal::Undo(){
    self->Hit(healAmount);
}