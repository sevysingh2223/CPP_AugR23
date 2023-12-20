#include<stdio.h>
#include <iostream>
using namespace std;

class Person{
    public:
    string class_name;
    int class_num;
    Person(){
        cout<<"Object Created \n";
        cout<<"Name is : "<<class_name<<"\n";
        cout<<"Num is : "<<class_num <<"\n";
    }
    Person(string call_name){
        class_name = call_name;
        cout<<"Object Created \n";
        cout<<"Name is : "<<class_name <<"\n";
        cout<<"Num is : "<<class_num<<"\n";
    }
    Person(int call_num){
        class_num = call_num;
        cout<<"Object Created \n";
        cout<<"Name is : "<<class_name<<"\n";
        cout<<"Num is : "<<class_num<<"\n";
    }
    Person(string call_name,int call_num){
        class_name = call_name;
        class_num = call_num;
        cout<<"Object Created \n";
        cout<<"Name is : "<<class_name<<"\n";
        cout<<"Num is : "<<class_num<<"\n";
    }
};
int main(){
    Person obj1;     //Default COnstructor
    cout<<"======================== \n";
    Person obj2("Ram");     //Parameterized Constructor
    cout<<"======================== \n";
    Person obj3(101);    //Parameterized Constructor
    cout<<"======================== \n";
    Person obj4("Ram",101);      //Parameterized Constructor
    return 0;
}