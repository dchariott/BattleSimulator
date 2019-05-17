//
// Created by Dylan Chariott on 2019-04-16.
//

#ifndef BATTLESIMULATOR_ENUMS_H
#define BATTLESIMULATOR_ENUMS_H

enum MoveType : unsigned int{
    attackOne = 0,
    attackTwo,
    heal
};

enum ActorType: unsigned int{
    ghost = 1,
    knight,
    warrior
};
#endif //BATTLESIMULATOR_ENUMS_H
