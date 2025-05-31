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
};

class HotDrink : public Drink
{
public:
    double temperature;

    void serving_instrct()
    {
        cout << "Serve: " << ounces << " ounces at " << temperature << " degree F" << endl;
    }
};

int main()
{
    HotDrink hot_choc;

    hot_choc.name = "hot choc";
    hot_choc.calories = 200;
    hot_choc.ounces = 8;
    hot_choc.temperature = 77;

    hot_choc.print();
    hot_choc.serving_instrct();

    return 0;
}