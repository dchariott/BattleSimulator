//
// Created by Dylan Chariott on 2019-04-11.
//

#ifndef BATTLESIMULATOR_STACK_H
#define BATTLESIMULATOR_STACK_H

class StackEmptyException{};
class StackFullException{};

template <typename T>
class Stack{
private:
    T* data;
    int top;
    const int maxLength = 100;
public:
    Stack(){
        data = new T[maxLength];
        top = -1;
    }

    bool IsEmpty(){
        return top == -1;
    }

    bool IsFull(){
        return top == maxLength;
    }

    T Top(){
        if (IsEmpty()) throw StackEmptyException();
        return data[top];
    }

    void Pop(){
        if (IsEmpty()) throw StackEmptyException();
        top--;
    }

    void Push(T item){
        if (IsFull()) throw StackFullException();
        data[++top] = item;
    }

    void MakeEmpty(){
        top = -1;
    };

    ~Stack(){
        delete [] data;
    }
};
#endif //BATTLESIMULATOR_STACK_H
