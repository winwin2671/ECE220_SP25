#include <iostream>

using namespace std;

class Student
{
public:
    string name;

    Student(string name) : name(name) {}

    virtual void print()
    {
        cout << name << endl;
    }
};

class Med_students : public Student
{
public:
    string speciality;

    Med_students(string name, string speciality) : speciality(speciality), Student(name) {}

    void print()
    {
        cout << name << ": " << speciality << endl;
    }
};

int main()
{
    Student *students[] =
        {
            new Student("Kev"),
            new Student("Marry"),
            new Student("Kim"),
            new Med_students("J", "Fam"),
            new Med_students("L", "Brain"),
            new Med_students("W", "Phisical")

        };

    for (int i = 0; i < 6; i++)
        students[i]->print();

    for (int i = 0; i < 6; i++)
        delete students[i];

    return 0;
}