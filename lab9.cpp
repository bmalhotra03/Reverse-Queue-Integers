// Brij Malhotra
// lab9.cpp
// Purpose: Reverse a set of k integers from a queue while leaving the others in the same order 

#include <iostream>
#include <iomanip>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main(int argc, char * argv[])
{
    int mainArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = stoi(argv[1]);

    StaticQueue queue(10);

    for (int i = 0; i < 10; i++)
    {
        queue.enqueue(mainArr[i]);
    }

    cout << endl;
    cout << " Original   array: ";
    queue.print();

    cout << endl; 
    queue.reverse(k);
    cout << endl;
}