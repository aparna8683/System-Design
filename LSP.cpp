#include <iostream>
using namespace std;
// Signature Rule
class Parent
{
public:
    virtual void print(string msg)
    {
        cout << "Parent:" << endl;
    }
};
class Child : public Parent
{
public:
    void print(string msg) override
    {
        cout << "Child:" << endl;
    }
};
class Client
{
private:
    Parent *p;

public:
    Client(Parent *p)
    {
        this->p = p;
    }
    void printMsg()
    {
        p->print("Hello");
    }
};
// Return Type Rule
class Animal
{
public:
    Animal *animal;
    Animal(Animal *animal)
    {
        this->animal = animal;
    }

public:
    Animal *animal;
    Animal *returnAnimal()
    {
        return animal;
    }
};
class Dog : public Animal
{
public:
    Dog *dog;
    Dog *returnDog()
    {
        return dog;
    }
};
// Property Rules
// Class Invariant
class BankAccount
{
protected:
    double balance;

public:
    BankAccount(double b)
    {
        if (b < 0)
        {
            throw invalid_argument("Balance can't be negative");
        }
    }
    virtual void withdraw(double amount)
    {
        if (balance - amount < 0)

            throw runtime_error("Insufficient funds");
        balance -= amount;
        cout << "Amount withdrawn. Remaining balance is" << balance << endl;
    }
};
// Breaks Invariant: Should not be allowed
class cheatAccount : public BankAccount
{
public:
    cheatAccount(double b) : BankAccount(b)
    {
    }
    void withdraw(double amount) override
    {
        balance -= amount;
        cout << "Amount Withdrawn .Remaining balance is " << endl;
    }
};
int main()
{
    Parent *parent = new Parent();
    Parent *child = new Child();
    Client *client = new Client(child);
    client->printMsg();
}