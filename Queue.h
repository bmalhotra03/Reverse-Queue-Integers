// Brij Malhotra
// lab9.cpp
// Purpose: Reverse a set of k integers from a queue while leaving the others in the same order 

#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

using namespace std;

// Class declaration 

class StaticQueue
{
    private:
        int * queueArray;
        int queueSize;
        int front;
        int rear;
        int numItems;

    public: 
        StaticQueue(int);
        ~StaticQueue();
        void enqueue(int);
        int dequeue();
        bool isEmpty() const;
        bool isFull() const;
        void print();
        void reverse(int);
};

#endif