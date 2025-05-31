#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
    string species;
    static int total;

    const string planet = "earth";

    Animal(string animal_species)
    {
        species = animal_species;
        total++;
    }

    ~Animal()
    {
        total--;
    }
};

int Animal::total = 0;

int main()
{
    Animal *lion = new Animal("lion");
    Animal *tiger = new Animal("tiger");

    cout << "Lion: " << lion->species << endl;
    cout << "Tiger: " << tiger->species << endl;
    cout << "Total: " << Animal::total << endl;

    Animal *bear = new Animal("bear");
    cout << "Total: " << Animal::total << endl;

    delete lion;
    cout << "Total: " << Animal::total << endl;

    delete tiger;
    cout << "Total: " << Animal::total << endl;
    return 0;
}