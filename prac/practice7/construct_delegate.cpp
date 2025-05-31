#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
public:
    int length;
    int width;
    int area;
    string color;

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
        area = length * width;

        cout << "constrct 1" << endl;
    }

    Rectangle(int l, int w, string c) : Rectangle(l, w)
    {
        color = c;
        cout << "constrct 2" << endl;
    }

    void print()
    {
        cout << "length: " << length << endl;
        cout << "width: " << width << endl;
        cout << "area: " << area << endl;
        cout << "color: " << color << endl;
    }
};

int main()
{
    Rectangle rec1(5, 10, "red");

    rec1.print();

    return 0;
}