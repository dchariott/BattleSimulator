//
// Created by Dylan Chariott on 2019-04-12.
//

#include "warrior.h"

Warrior::Warrior(): Actor(100, "Warrior"){
    moves.push_back(MoveType::attackOne);
    moves.push_back(MoveType::attackTwo);
}