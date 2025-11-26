#include <iostream>
using namespace std;

class Burger
{
public:
    virtual void prepare() = 0;
    virtual ~Burger() {}
};

// ===== Burgers (Normal Buns) =====
class BasicBurger : public Burger
{
public:
    void prepare() { cout << "Building Basic Burger (Normal Bun)" << endl; }
};

class PremiumBurger : public Burger
{
public:
    void prepare() { cout << "Building PREMIUM Burger (Normal Bun)" << endl; }
};

class StandardBurger : public Burger
{
public:
    void prepare() { cout << "Building Standard Burger (Normal Bun)" << endl; }
};

// ===== Burgers (Wheat Buns) =====
class BasicWheatBurger : public Burger
{
public:
    void prepare() { cout << "Building Basic Burger (Wheat Bun)" << endl; }
};

class PremiumWheatBurger : public Burger
{
public:
    void prepare() { cout << "Building PREMIUM Burger (Wheat Bun)" << endl; }
};

class StandardWheatBurger : public Burger
{
public:
    void prepare() { cout << "Building Standard Burger (Wheat Bun)" << endl; }
};

// ===== Factory =====
class BurgerFactory
{
public:
    virtual Burger *createBurger(const string &type) = 0;
    virtual ~BurgerFactory() {}
};

// ===== Factory #1 =====
class SinghBurger : public BurgerFactory
{
public:
    Burger *createBurger(const string &type)
    {
        if (type == "basic")
            return new BasicBurger;
        if (type == "premium")
            return new PremiumBurger;
        if (type == "standard")
            return new StandardBurger;
        return nullptr; // safety
    }
};

// ===== Factory #2 =====
class KingBurger : public BurgerFactory
{
public:
    Burger *createBurger(const string &type)
    {
        if (type == "basic")
            return new BasicWheatBurger;
        if (type == "premium")
            return new PremiumWheatBurger;
        if (type == "standard")
            return new StandardWheatBurger;
        return nullptr; // safety
    }
};

// ===== Main =====
int main()
{
    string type = "premium";

    BurgerFactory *myFactory = new SinghBurger();
    Burger *burger = myFactory->createBurger(type);

    if (burger)
        burger->prepare();
    else
        cout << "Invalid Burger Type!" << endl;

    delete burger;
    delete myFactory;

    return 0;
}
