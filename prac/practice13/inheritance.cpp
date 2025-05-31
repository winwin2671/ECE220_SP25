#include <iostream>

using namespace std;

class MenuItem
{
public:
    string name;
    double calories;

    void print()
    {
        cout << name << " (" << calories << "cal)" << endl;
    }
};

class Drink : public MenuItem
{
public:
    double ounces;

    double cal_per_ounce()
    {
        return calories / ounces;
    }
};

int main()
{
    MenuItem french_fries;

    french_fries.name = "French Fries";
    french_fries.calories = 400;

    french_fries.print();

    Drink hot_choc;

    hot_choc.name = "Hot choc";
    hot_choc.calories = 300;
    hot_choc.ounces = 8;

    hot_choc.print();

    cout << "cal/ounces: " << hot_choc.cal_per_ounce() << endl;

    // polymorphism
    MenuItem *ptr;

    ptr = &hot_choc;

    ptr->print();

    return 0;
}