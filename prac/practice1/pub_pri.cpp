#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    string name;

    void set_salary(double pot_salary)
    {
        if (pot_salary < 0)
            salary = 0;
        else
            salary = pot_salary;
    }

    double get_salary()
    {
        return salary;
    }

    void print_bonus()
    {
        cout << name << " bonus: " << cal_bonus() << endl;
    }

private: // cant access outside class Employee
    double salary;

    double cal_bonus()
    {
        return salary * 0.20;
    }
};

int main()
{

    Employee emp1;
    emp1.name = "kev";

    cout << emp1.name << "\n";

    emp1.set_salary(10000000);

    cout << emp1.name << " have a salary of: " << emp1.get_salary() << " dollars\n";

    emp1.print_bonus();
    return 0;
}