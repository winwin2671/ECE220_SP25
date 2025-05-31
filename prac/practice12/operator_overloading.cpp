#include <iostream>

using namespace std;

class Number
{
public:
    int n;

    Number(int set_n)
    {
        n = set_n;
    }

    Number operator+(const Number &numA)
    {
        // cout << "this->n: " << this->n << endl;
        // cout << "numA.n: " << numA.n << endl;
        return Number(this->n + numA.n);
    }

    bool operator==(const Number &numA)
    {
        if (this->n == numA.n)
            return true;
        else
            return false;
    }
};

int main()
{
    Number a(5);
    Number b(10);

    Number c = a + b;

    cout << "c.n: " << c.n << endl;

    if (a == c)
        cout << "a == c" << endl;
    else
        cout << "a != c" << endl;

    Number d(15);

    if (c == d)
        cout << "c == d" << endl;
    else
        cout << "c != d" << endl;

    return 0;
}