#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Product
{
public:
    string name;
    float price;

public:
    Product(string name, float price)
    {
        this->name = name;
        this->price = price;
    }
};
class ShoppingCart
{
private:
    vector<Product *> products;

public:
    void addTocart(Product *product)
    {
        products.push_back(product);
    }
    vector<Product *> getProduct()
    {
        return products;
    }
    double calTotalPrice()
    {
        double total = 0;
        for (auto p : products)
        {
            total += p->price;
        }
        cout << total << endl;
    }
};
class PrintInvoice
{
private:
    ShoppingCart *cart;

public:
    PrintInvoice(ShoppingCart *cart)
    {
        this->cart = cart;
    }
    void print()
    {
        for (auto p : cart->getProduct())
        {
            cout << p->name << "" << p->price << endl;
        }
    }
};
class SaveToDB
{
private:
    ShoppingCart *cart;

public:
    SaveToDB(ShoppingCart *cart)
    {
        this->cart = cart;
    }
    void saveToDb()
    {
        cout << "Products saved to db" << endl;
    }
};
int main()
{
    ShoppingCart *cart = new ShoppingCart();
    cart->addTocart(new Product("laptop", 1500));
    cart->addTocart(new Product("Mouse", 300));
    cart->calTotalPrice();
    PrintInvoice *printer = new PrintInvoice(cart);
    printer->print();
    SaveToDB *storage = new SaveToDB(cart);
    storage->saveToDb();
}