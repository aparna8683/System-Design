#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Account
{
public:
    virtual void deposit(double amount) = 0;
    virtual void withDrawn(double amount) = 0;
    virtual ~Account() {}
};
class SavingAccount : public Account
{
private:
    double balance;

public:
    SavingAccount()
    {
        balance = 0;
    }
    void deposit(double amount) override
    {
        balance += amount;
        cout << " Withdrawn:" << amount << " from saving Account. New balance:" << balance << endl;
    }
    void withDrawn(double amount) override
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn amount is" << amount << "Balance saved is " << balance << endl;
        }
        else
        {
            cout << "Amount is not enough" << endl;
        }
    }
};
class CurrentAccount : public Account
{
private:
    double balance;

public:
    CurrentAccount()
    {
        balance = 0;
    }
    void deposit(double amount) override
    {
        balance += amount;
        cout << " Added amount:" << amount << "in Current Account. New balance:" << balance << endl;
    }
    void withDrawn(double amount) override
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn amount from CurrentAccount is" << amount << "Balance saved is " << balance << endl;
        }
        else
        {
            cout << "Amount is not enough in Current Account" << endl;
        }
    }
};
class FixedAccount : public Account
{
private:
    double balance;

public:
    FixedAccount()
    {
        balance = 0;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposited is " << balance << "in Fixed Account" << endl;
    }
    void withDrawn(double amount) override
    {
        balance -= amount;
        cout << "Amount debited from the fd is " << balance << "from FD Account" << endl;
    }
};
class BankClient
{
private:
    vector<Account *> accounts;

public:
    BankClient(vector<Account *> accounts)
    {
        this->accounts = accounts;
    }
    void processTransactions()
    {
        for (Account *acc : accounts)
        {
            acc->deposit(100);
        }
    }
};
int main()
{
    vector<Account *> account;
    account.push_back(new SavingAccount());
    account.push_back(new CurrentAccount());
    account.push_back(new FixedAccount());

    return 0;
}