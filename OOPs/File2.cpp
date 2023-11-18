#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

class Employee{
    string name;
    int id;
    double wagePerHour;
    int days;
    
    void print(){
        cout << "Name is : "<<name << "\n";
        cout << "Id is : "<<id<< "\n";
        cout << "Salary is : "<<wagePerHour * days << "\n";
        cout<<"======================"<<endl;
    }
};

int main(){
    Employee ram;
    ram.print();
    return 0;
}