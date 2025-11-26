#include <iostream>
#include <vector>
using namespace std;
class Product
{
public:
    double price;
    string name;
    Product(string name, double price)
    {
        this->name = name;
        this->price = price;
    }
};
class shopingCart
{
private:
    vector<Product *> products;

public:
    void addProduct(Product *p)
    {
        cout << "Add product to the Cart" << endl;
        products.push_back(p);
    }
    vector<Product *> getProduct()
    {
        return products;
    }
    void calTotalPrice(vector<Product *> &p)
    {
        int pr = 0;
        for (auto pro : p)
        {
            int pr = pr + pro->price;
        }
        cout << "Print Total ShoppingCart:" << pr << endl;
    }
};
int main()
{
    shopingCart *cart = new shopingCart();
    cart->addProduct(new Product("Laptop", 1500));
    cart->addProduct(new Product("Mouse", 1500));
}