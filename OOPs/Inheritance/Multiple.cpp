#include<stdio.h>
#include<iostream>
using namespace std;
// Parent class
class Parent1{
    public:
    Parent1(){
        cout<<"This is Parent1 Constructor"<<endl;
    }
    // void show(){
    //     cout<<"This is Parent1 Class : show method"<<endl;
    // }
    void show1(){
        cout<<"This is Parent1 Class : show1 method"<<endl;
    }
};
class Parent2{
    public:
    Parent2(){
        cout<<"This is Parent2 Constructor"<<endl;
    }
    // void show(){
    //     cout<<"This is Parent2 Class : show method"<<endl;
    // }
    void show2(){
        cout<<"This is Parent2 Class : show2 method"<<endl;
    }
};

class Child : public Parent1 , public Parent2{
    public:
    Child(){
        cout<<"This is Child Constructor"<<endl;
    }
    void show(){
        cout<<"This is Child Class"<<endl;
    }
};

int main(){

    // Parent obj2;

    Child obj;
    obj.show();
    obj.show1();
    obj.show2();
    return 0;
}

// Diamond Problem