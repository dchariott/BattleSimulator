//
// Created by Dylan Chariott on 2019-04-12.
//

#include "runner.h"

Runner::Runner(): mgr{MoveManager()}
{
    int choice = 0;
    string choiceS  = "";
    cout << "Select a player:" << endl
         << "1: ghost" << endl
         << "2: knight" << endl
         << "3: warrior" << endl;
    try{
        getline(cin, choiceS);
    }catch(invalid_argument a){
        choice = 1;
    }
    choice = stoi(choiceS);
    ActorType type = (ActorType) choice;
    switch(type){
        case ActorType::ghost:
            P1 = new Ghost();
            break;
        case ActorType::knight:
            P1 = new Knight();
            break;
        case ActorType::warrior:
            P1 = new Warrior();
            break;
    }
    cout << "Select an opponent:" << endl
         << "1: ghost" << endl
         << "2: knight" << endl
         << "3: warrior" << endl;
    try{
        getline(cin, choiceS);
    }catch(invalid_argument a){
        choice = 1;
    }
    choice = stoi(choiceS);
    type = (ActorType) choice;
    switch(type){
        case ActorType::ghost:
            P2 = new Ghost();
            break;
        case ActorType::knight:
            P2 = new Knight();
            break;
        case ActorType::warrior:
            P2 = new Warrior();
            break;
    }
}

void Runner::Simulate() {
    while (!P1->IsDead() && !P2->IsDead()){
        string choiceS = "";
        int choice = 0;
        cout << "Choose Move:" << endl
             << "1: P1 -> P2" << endl
             << "2: P2 -> P1" << endl
             << "3: Undo" << endl;
        try{
            getline(cin, choiceS);
        }catch(invalid_argument a){
            choice = 1;
        }
        choice = stoi(choiceS);
        switch(choice){
            case 2:
                try{
                    P2->DoMove(mgr, P1);
                }catch (StackFullException f){
                    cout << "Can't store any more moves" << endl;
                }
                break;
            case 3:
                try{
                   mgr.UndoMove();
                } catch (StackEmptyException e){
                    cout << "No moves to undo" << endl;
                }
                break;
            default:
                try{
                    P1->DoMove(mgr, P2);
                } catch (StackFullException f){
                    cout << "Can't do any more moves" << endl;
                }
                break;
        }
        cout << "[Player: " << P1->DisplayType() << ", (" << P1->DisplayHealth()
             << ")][Opponent: " << P2->DisplayType() << ", (" << P2->DisplayHealth()
             << ")]";
    }
}
