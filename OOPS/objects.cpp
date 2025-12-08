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
    // Parameterized Constructor
    Student(string name, int id, int age, int nos)
    {
        this->name = name;
        this->id = id;
        this->age = age;
        this->nos = nos;
    }
    // copy constructor
    Student(const Student &srcObj)
    {
        this->name = srcObj.name;
        this->id = srcObj.id;
        this->age = srcObj.age;
        this->nos = srcObj.nos;
    }
    // Functions// Behaviours// Methods
    void study()
    {
        cout << this->name << " " << "is studying" << endl;
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
    // Student s1("aparna", 2, 21, 4);
    // s1.study();
    // s1.countAge();
    // Student s2=s1;
    // s2.countAge();
    Student *A = new Student("Anshu", 2, 3, 4);
    A->countAge();
    delete A;
    return 0;
}
