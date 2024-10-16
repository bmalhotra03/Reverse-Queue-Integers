// Brij Malhotra
// lab9.cpp
// Purpose: Reverse a set of k integers from a queue while leaving the others in the same order 

#include "Queue.h"
#include "Stack.h"
#include <iostream>

using namespace std;

// Class definition

StaticQueue::StaticQueue(int size)
{
    queueArray = new int[size];
    queueSize = size;
    front = -1;
    rear = -1;
    numItems = 0;
}

StaticQueue::~StaticQueue()
{
    delete [] queueArray;
}

void StaticQueue::enqueue(int num)
{
    if (isFull())
    {
        cout << " The queue is full. \n";
    } else {
        rear = (rear + 1) % queueSize;
        queueArray[rear] = num;
        numItems++;
    }
}

int StaticQueue::dequeue()
{
    if (isEmpty())
    {
        cout << " The queue is empty.\n";
        return -1;
    } else {
        front = (front + 1) % queueSize;
        numItems--;
        return queueArray[front];
    }
}

bool StaticQueue::isEmpty() const
{
    return numItems == 0;
}

bool StaticQueue::isFull() const
{
    return numItems == queueSize;
}

void StaticQueue::print()
{
    int temp = front;

    cout << " [ ";

    for (int i = 0; i < queueSize; i++)
    {
        cout << dequeue() << " ";
        numItems++;
    }

    cout << "] " << endl;
    front = temp;
}

void StaticQueue::reverse(int k)
{
    StaticIntStack stack(k);
    
    // Algorithm: 1. Dequeue from the queue and push into a stack
    // 2. Pop it from the stack and enqueue it back in the queue
    // 3. The queue is first in first out so we have to keep the 
    // remaining integers in a temporary dequeue state as Queues are
    // FIFO, that means, whatever was there before, would be printed out
    // first so we dequeue it temporarily and then enqueue it back for it 
    // to be printed out :D 
    
    for (int i = 0; i < k; i++)
    {
        stack.push(dequeue());
    }

    for (int i = 0; i < k; i++)
    {
        enqueue(stack.pop());
    }

    for (int i = 0; i < queueSize - k; i++)
    {
        int temp = dequeue();
        enqueue(temp);
    }

    cout << " Reversed first " << k << ": ";
    print();
}
