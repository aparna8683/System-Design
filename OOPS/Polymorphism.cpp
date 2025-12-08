#include <iostream>
using namespace std;
// function overloading
class Add
{
public:
    int sum(int x, int y)
    {
        cout << "Summ of two int" << endl;
        return x + y;
    }
    int sum(int x, int y, int z)
    {
        cout << "Sum of three int" << endl;
        return x + y + z;
    }
    double sum(double x, double y)
    {
        cout << "Sum of two double " << endl;
        return x + y;
    }
};
// Operator overloading
class Complex
{
public:
    int real;
    int imag;
    Complex()
    {
        real = imag = -1;
    }
    Complex(int r, int i) : real(r), imag(i) {

                            };
    void print()
    {
        printf("[%d +i%d]", this->real, this->imag);
    }
    // syntax
    //  ret_type operator<operator name>(args){
    //      work
    //  }
    Complex operator+(const Complex &B)
    {
        Complex C;
        C.real = this->real + B.real;
        C.imag = this->imag + B.imag;
        cout << C.real <<" + i" <<C.imag<<endl;
        return C;
    }
};
int main()
{
    // int x = 9, y = 10;
    // Add a;
    // a.sum(x, y);
    // a.sum(5.6, 2.4);
    Complex A(2, 5);
    A.print();
    Complex B(4, 5);
    Complex C=A+B;
    C.print();
    cout<<endl;
    A.operator+(B);
    return 0;
}