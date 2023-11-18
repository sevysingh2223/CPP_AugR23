#include<stdio.h>
#include<iostream>
using namespace std;
// Parent class
class Parent{
    public:
    Parent(){
        cout<<"This is Parent Constructor"<<endl;
    }
    void show(){
        cout<<"This is Parent Class"<<endl;
    }
};

class Child : public Parent{
    public:
    Child(){
        cout<<"This is Child Constructor"<<endl;
    }
    void show(){
        cout<<"This is Child Class"<<endl;
    }
};

int main(){

    Parent obj2;

    // Child obj;
    // obj.show();
    return 0;
}