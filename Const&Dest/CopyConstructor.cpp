#include<stdio.h>
#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int num;
    // Person(){
    //     cout<<"Object Created :: Default Constructor \n";
    // }
    Person(string name){
        name = name;
        cout<<"Object Created :: Default Constructor \n";
        cout<<"Object Name :: "<<name<<"\n";
    }
    Person(const Person& copiedPerson) : name(copiedPerson.name){
        cout<<"Object Created :: Copy Constructor \n";
        cout<<"Object Name :: "<<name<<"\n";
    }
};
int main(){
    Person P1("Ram");
    Person P2 = P1;
    return 0;
}