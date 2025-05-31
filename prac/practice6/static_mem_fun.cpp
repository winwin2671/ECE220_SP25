#include <iostream>
#include <string>

using namespace std;

class Square
{
private:
    int side_length;
    static int total_squares;

    static void incrementTotal()
    {
        total_squares++;
    }

public:
    Square(int length)
    {
        side_length = length;
        incrementTotal();
    }
    int area()
    {
        return side_length * side_length;
    }
    static int getTotal()
    {
        return total_squares;
    }
};

int Square::total_squares = 0;

int main()
{
    Square square1(5);

    cout << "square1 area: " << square1.area() << endl;
    cout << "Total squares: " << Square::getTotal() << endl;

    Square square2(10);
    cout << "square1 area: " << square2.area() << endl;
    cout << "Total squares: " << Square::getTotal() << endl;
    return 0;
}