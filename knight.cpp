//
// Created by Dylan Chariott on 2019-04-12.
//

#include "knight.h"

Knight::Knight(): Actor(100, "Knight"){
    moves.push_back(MoveType::attackTwo);
    moves.push_back(MoveType::heal);
}