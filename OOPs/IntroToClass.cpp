#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Student
{
    // private:  // Private member variables
    // are only accessible within the same class and
    // its subclasses (if any)
public:
    int roll;
    string name;
    float gpa;

    void print(){
        cout << "Roll num is : "<<roll << "\n";
        cout << "Name is : "<<name << "\n";
        cout << "GPA is : "<<gpa << "\n";
        cout<<"======================"<<endl;
    }
};
int main()
{
    // Class_name object_name;
    Student ram;
    ram.roll=45;
    ram.name="ram";
    ram.gpa=45.85;
    Student shyam;
    shyam.roll=98;
    shyam.name="shyam";
    shyam.gpa=98.36;
    ram.print();
    shyam.print();

    // access class behaviour through pointer (*)
    // class_name *object = new class_name
    Student *krishna = new Student();
    krishna->roll = 69;
    krishna->name = "Krishna";
    krishna->gpa = 70.21;

    krishna->print();

    // cout<<"Krishna : "<<endl;

    // cout<<krishna->name<<"\n";
    // cout<<krishna->roll<<"\n";
    // cout<<krishna->gpa<<"\n";


    // DRY : DONOT REPEAT YOURSELF
    // cout << "Roll num is : "<<ram.roll << "\n";
    // cout << "Name is : "<<ram.name << "\n";
    // cout << "GPA is : "<<ram.gpa << "\n";
    // cout << "Roll num is : "<<shyam.roll << "\n";
    // cout << "Name is : "<<shyam.name << "\n";
    // cout << "GPA is : "<<shyam.gpa << "\n";
    return 0;
}

// Rectangle{
//     l , b
//     area()
//     perimeter()
// }

// main(){
//     rect1, rect2
// }