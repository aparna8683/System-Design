#include <iostream>
using namespace std;
class Student
{
    // attributes
private:
    int id;
    int age;
    string name;
    int nos;
    // Contsturctor
public:
    Student()
    {
        cout << "Students Default conts called" << endl;
    }
    // Functions// Behaviours// Methods
    void study()
    {
        cout << "Enter The name of student"
             << endl;
        string nam;
        cin >> nam;
        name = nam;

        cout << this->name <<" " <<"is studying" << endl;
    }
    void countAge()
    {
        cout << this->age << " " << "is Of" << this->name << endl;
    }
    ~Student()
    {
        cout << "Student default dest called" << endl;
    }
};
int main()
{
    Student s1;
    s1.study();
    s1.countAge();
    return 0;
}