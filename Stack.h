// Brij Malhotra
// lab9.cpp
// Purpose: Reverse a set of k integers from a queue while leaving the others in the same order 

#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

// Class declaration

class StaticIntStack
{
    private:
        int * stackArray;
        int stackSize;
        int top;

    public:
        StaticIntStack(int);
        ~StaticIntStack();

        void push(int);
        int pop();
        bool isFull() const;
        bool isEmpty() const;
};

#endif