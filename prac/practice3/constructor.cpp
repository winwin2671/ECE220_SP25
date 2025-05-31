#include <iostream>
#include <string>
using namespace std;

class cat
{
private:
    string name;
    string color;
    string fav_toy;

public:
    void print_cat()
    {
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Fav_toy: " << fav_toy << endl;
    }

    cat() // constructor (call the class)
    {
        name = "N/A";
        color = "N/A";
        fav_toy = "N/A";
    }

    cat(string n)
    {
        name = n;
        color = "N/A";
        fav_toy = "N/A";
    }

    cat(string n, string c, string ft = "Lasers");
};

cat::cat(string n, string c, string ft)
{
    name = n;
    color = c;
    fav_toy = ft;
}

int main()
{
    cat cat1;

    cout << "Cat 1..." << endl;
    cat1.print_cat();
    cout << endl;

    cat cat2("Kanye");

    cout << "Cat 2..." << endl;
    cat2.print_cat();
    cout << endl;

    cat cat3("Bob", "Green", "Ball");

    cout << "Cat 3..." << endl;
    cat3.print_cat();
    cout << endl;

    cat cat4("G", "Green");

    cout << "Cat 4..." << endl;
    cat4.print_cat();
    cout << endl;
    return 0;
}