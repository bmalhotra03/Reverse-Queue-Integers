// Brij Malhotra
// lab9.cpp
// Purpose: Reverse a set of k integers from a queue while leaving the others in the same order 

#include "Stack.h"
#include "Queue.h"
#include <iostream>

using namespace std;

// Class definition

StaticIntStack::StaticIntStack(int size)
{
    stackArray = new int[size];
    stackSize = size;
    top = -1;
}

StaticIntStack::~StaticIntStack()
{
    delete [] stackArray;
}

void StaticIntStack::push(int num)
{
    if (isFull())
    {
        cout << " The stack is full. Nothing pushed. \n";
    } else {
        top++;
        stackArray[top] = num;
    }
}

int StaticIntStack::pop()
{
    if (isEmpty())
    {
        cout << " The stack is empty. \n";
        return -1;
    } else {
        int returnValue = stackArray[top];
        top--;
        return returnValue;
    }
}

 bool StaticIntStack::isFull() const 
 {
     return top == stackSize -1;
 }

 bool StaticIntStack::isEmpty() const
 {
     return top == -1;
 }