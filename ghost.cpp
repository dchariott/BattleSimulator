//
// Created by Dylan Chariott on 2019-04-12.
//

#include "ghost.h"

Ghost::Ghost() : Actor(100, "Ghost"){
    moves.push_back(MoveType::attackOne);
    moves.push_back(MoveType::heal);
}

