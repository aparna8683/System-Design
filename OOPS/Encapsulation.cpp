#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    string gf;

public:
    void showGfOnly()
    {
        if (this->name == "Ram")
            cout << "Can show Gf" << endl;
        else
        {
            cout << "You don't have permission to acces to look at Gf" << endl;
        }
    }
    void nameOfPerson()
    {
        cout << name << "Name is" << endl;
    }
    Student(string name, string gf)
    {
        this->name = name;
        this->gf = gf;
    }

private:
    void gfChatting()
    {
        cout << this->name << "Chats" << endl;
    }
};
int main()
{
    Student s("Ram", "Sita");
    Student s1("Raheem", "Sita");
    s.nameOfPerson();
    s.showGfOnly();
    s1.showGfOnly();
    return 0;
}