#include <stdio.h>
#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person()
    {
        cout << "Object Created \n";
        cout << "========================== \n";
    }

    ~Person()
    {
        cout << "Object Deleted \n";
        cout << "========================== \n";
    }

    void getDetail()
    {
        cout << "GET DETAILS \n";
        cout << "Enter your name : \n";
        cin >> name;
        cout << "Enter your age : \n";
        cin >> age;
        cout << "========================== \n";
    }

    void displayDetail()
    {   cout << "DISPLAY DETAILS \n";
        cout << "Name : " << name << "\n";
        cout << "Age : " << age << "\n";
        cout << "========================== \n";
    }
};
int main()
{
    Person *obj1 = new Person();
    obj1->getDetail();
    obj1->displayDetail();
    delete obj1;

    // obj1->displayDetail();
    // This will give an error because
    // the object has been deleted using 'delete' keyword

    Person *obj1 = new Person();
    obj1->getDetail();
    return 0;
}