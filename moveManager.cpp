//
// Created by Dylan Chariott on 2019-04-16.
//

#include "moveManager.h"

MoveManager::MoveManager(): history{Stack<BattleMove*>()}
{}

void MoveManager::ExecuteMove(MoveType type, Actor* self, Actor* other){
    BattleMove* move;
    cout << self->DisplayType() << ", (" << self->DisplayHealth() << ")"
         << " used: ";
    switch(type){
        case MoveType::attackOne:
            cout << "Attack One" << endl;
            if (history.IsFull()) throw StackFullException();
            move = new AttackOne(other);
            break;
        case MoveType::attackTwo:
            cout << "Attack Two" << endl;
            if (history.IsFull()) throw StackFullException();
            move = new AttackTwo(other);
            break;
        case MoveType::heal:
            cout << "Heal" << endl;
            if (history.IsFull()) throw StackFullException();
            move = new Heal(self);
            break;
    }
    move->Execute();
    history.Push(move);
}

void MoveManager::UndoMove(){
    if (history.IsEmpty()) throw StackEmptyException();
    history.Top()->Undo();
    delete history.Top();
    history.Pop();
}

MoveManager::~MoveManager(){
    while (!history.IsEmpty()){
        delete history.Top();
        history.Pop();
    }
}