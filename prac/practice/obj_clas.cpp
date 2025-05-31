#include <iostream>
#include <string>

using namespace std; // so dont need to type it when use

class BankAcc
{
public: // access specifier
    string name;
    int balance;

    void withdraw(int amount)
    {
        balance = balance - amount;
    }

    void print()
    {
        cout << name << " balance: " << balance << " dollars\n";
    }
};

int main()
{
    BankAcc account1; // create obj

    account1.name = "Win";
    account1.balance = 100000;

    account1.print();

    BankAcc account2; // create obj

    account2.name = "John";
    account2.balance = 200000;

    account2.print();

    account2.withdraw(100000);

    account2.print();
    return 0;
}