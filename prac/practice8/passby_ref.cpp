#include <iostream>

using namespace std;

class Counter
{
private:
    int count;

public:
    Counter()
    {
        count = 0;
    }

    void print()
    {
        cout << "count: " << count << endl;
    }

    void increament()
    {
        count++;
    }
};

void increament(int &x)
{
    x++;
    cout << "x after increamented: " << x << endl;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void increment3x(Counter &counter)
{
    counter.increament();
    counter.increament();
    counter.increament();
}

int main()
{
    int a = 4;

    cout << "a before: " << a << endl;
    increament(a);
    cout << "a after: " << a << endl;

    int b = 4;
    int c = 8;

    cout << "b before: " << b << ", c: " << c << endl;
    swap(b, c);
    cout << "b after: " << b << ", c: " << c << endl;

    Counter counter;

    counter.print();
    increment3x(counter);
    counter.print();

    return 0;
}
