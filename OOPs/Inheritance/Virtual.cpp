#include<stdio.h>
#include<iostream>
using namespace std;

// Virtual Class
class Head{
    public : 
    void show(){
        cout<<"COMMON PARENT SHOW METHOD"<<endl;
    }
};

// Parent class
class Parent1 : virtual public Head{
    public:
    Parent1(){
        cout<<"This is Parent1 Constructor"<<endl;
    }
    void show1(){
        cout<<"This is Parent1 Class : show1 method"<<endl;
    }
};
class Parent2 : virtual public Head{
    public:
    Parent2(){
        cout<<"This is Parent2 Constructor"<<endl;
    }

    void show2(){
        cout<<"This is Parent2 Class : show2 method"<<endl;
    }
};

class Child : public Parent1 , public Parent2{
    public:
    Child(){
        cout<<"This is Child Constructor"<<endl;
    }
};

int main(){

    // Parent obj2;

    Child obj;
    obj.show();
    obj.show1();
    obj.show2();
    Head h1;
    h1.show();
    return 0;
}

// Diamond Problem