#include <iostream>
#include <string>

using namespace std;

class rec
{
private:
    double len;
    double wid;

    double area()
    {
        return len * wid;
    }

public:
    void set_dim(double l, double w = 5)
    {
        len = l;
        wid = w;
    }

    double perimeter();

    void print_area()
    {
        cout << "Area: " << area() << endl;
    }
};

double rec::perimeter() // set function to be in the same class as rec
{
    return 2 * (len + wid);
}

int main()
{
    rec rec1;

    rec1.set_dim(10, 20);
    cout << "Perimeter: " << rec1.perimeter() << endl;
    rec1.print_area();

    rec rec2;

    rec2.set_dim(5);
    cout << "Perimeter: " << rec2.perimeter() << endl;
    rec2.print_area();
    return 0;
}