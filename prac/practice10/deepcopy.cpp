#include <iostream>

using namespace std;

class BasicNum
{
public:
    int n;

    BasicNum(int set_n)
    {
        n = set_n;
    }

    BasicNum(const BasicNum &basic_num) // copy constructor, it will be called when
                                        // obj is initialize to another obj
    {
        n = 2 * basic_num.n;
        cout << "copy constructor called: " << n << endl;
    }
};

class Number
{
public:
    int *n;

    Number(int set_n)
    {
        n = (int *)malloc(sizeof(int));
        *n = set_n;
    }

    Number(const Number &otherNumber)
    {
        n = (int *)malloc(sizeof(int));
        *n = *(otherNumber.n);
    }

    ~Number()
    {
        free(n);
    }

    int get()
    {
        return *n;
    }
};

int main()
{

    // BasicNum num1(7);

    // cout << "num1: " << num1.n << endl;

    // BasicNum num2 = num1; // obj is initialize to another obj

    // cout << "num2: " << num2.n << endl;

    // BasicNum num3(5);
    // BasicNum num4(10);

    // num3 = num4; // obj is assigned

    Number numA(8);

    cout << "numA: " << numA.get() << endl;

    Number numB = numA;

    cout << "numB: " << numB.get() << endl;

    *(numA.n) = 20;

    cout << "numA: " << numA.get() << endl;
    cout << "numB: " << numB.get() << endl;

    // exit(0);
    return 0;
}