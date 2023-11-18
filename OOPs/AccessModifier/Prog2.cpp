#include<stdio.h>
#include<iostream>
using namespace std;
// Parent class
class Parent{
    protected:
    int p_num =10;
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
        cout<<"Value of p-num (child class)"<<p_num<<endl;
    }
};

int main(){

    // Parent obj2;
    Child objc;
    objc.show();
    return 0;
}

// private : accessible within the class only
// protected : accessible within the class as well as sub class
// public : accessible by all