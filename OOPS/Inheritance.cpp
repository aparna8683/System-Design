#include <iostream>
using namespace std;
class Vehicle
{
protected:
    string name;
    string model;
    int noOfTyres;

public:
    void start_Engine()
    {
        cout << "Engine has been staretd" << name << endl;
    }
    void stop_Engine()
    {
        cout << "Engine has been stopped" << name << endl;
    }

    Vehicle(string name, string model, int noOfTyres)
    {
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }
};
class Car : public Vehicle
{
public:
    int doors;
    string transmissionType;
    void startAc()
    {
        cout << "Ac has been started of Car" << name << endl;
    }

    Car(string name, string model, int noOfTyres, int doors, string Transmission) : Vehicle(name, model, noOfTyres)
    {
        // this->name = name;
        // this->model = model;
        // this->noOfTyres = noOfTyres;
        this->doors = doors;
        this->transmissionType = Transmission;
    }
};
int main()
{
    Vehicle v("Mercedies", "Thar", 3);
    Car c("Mercedies", "Thar", 3, 4, "Mannual Type");
    c.start_Engine();
    c.startAc();
     return 0;
};