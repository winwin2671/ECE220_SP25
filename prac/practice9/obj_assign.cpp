#include <iostream>

using namespace std;

class Simple
{
public:
    int x;
};

class Stack
{
public:
    Simple simple;
};

class Heap
{
public:
    Simple *simple;

    Heap(int set_x)
    {
        simple = new Simple;
        simple->x = set_x;
    }
};

int main()
{
    // Simple simA;
    // simA.x = 4;

    // Simple simB;
    // simB.x = 0;

    // simB = simA;

    // cout << "simA.x: " << simA.x << endl;
    // cout << "simB.x: " << simB.x << endl;

    // simB.x = 20;
    // cout << "simA.x: " << simA.x << endl;
    // cout << "simB.x: " << simB.x << endl;

    /*                                        */

    // Stack stackA;
    // stackA.simple.x = 4;

    // Stack stackB;
    // stackB.simple.x = 0;

    // stackB = stackA;

    // cout << "stackA.simple.x: " << stackA.simple.x << endl;
    // cout << "stackB.simple.x: " << stackB.simple.x << endl;

    // stackB.simple.x = 20;
    // cout << "stackA.simple.x: " << stackA.simple.x << endl;
    // cout << "stackB.simple.x: " << stackB.simple.x << endl;

    /*                                        */

    Heap heapA(4);
    Heap heapB(0);

    heapB = heapA;

    cout << "stackA.simple.x: " << heapA.simple->x << endl;
    cout << "stackB.simple.x: " << heapB.simple->x << endl;

    heapB.simple->x = 20;
    cout << "stackA.simple.x: " << heapA.simple->x << endl;
    cout << "stackB.simple.x: " << heapB.simple->x << endl;

    return 0;
}