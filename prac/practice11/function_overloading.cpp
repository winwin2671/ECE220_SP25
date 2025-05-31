#include <iostream>

using namespace std;

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y, int z)
{
    return x + y + z;
}

double add(double x, double y, double z)
{
    return x + y + z;
}

class Add
{
public:
    int add(int x, int y)
    {
        return x + y;
    }

    double add(double x, double y)
    {
        return x + y;
    }
};

int main()
{
    cout << add(10, 5) << endl;

    cout << add(10, 5, 2) << endl;

    cout << add(10.4, 5.1, 2.1) << endl;

    Add add_obj;

    cout << add_obj.add(10, 5) << endl;
    cout << add_obj.add(10.1, 5.2) << endl;

    return 0;
}