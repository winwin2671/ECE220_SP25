#include <iostream>
#include <string>
using namespace std;

class Number
{
private:
    double *number;

public:
    Number(double num)
    {
        number = (double *)malloc(sizeof(double));
        *number = num;
        cout << "constructior executing!" << endl;
        cout << "Number: " << *number << endl
             << endl;
    }

    // destructor, will run when the program terminate or the obj is being destory
    // can use to prevent mem leaks
    ~Number()
    {
        cout << "Destructior executing!" << endl;
        cout << "Number: " << *number << endl
             << endl;
        free(number);
    }
};

void test()
{
    Number six(6);
}

int main()
{
    Number *five = new Number(5); // basically the same as using malloc
    delete five;                  // free

    test();
    Number seven(7);
    return 0;
}