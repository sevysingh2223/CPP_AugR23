#include<iostream>
#include<stdio.h>
using namespace std;

class Shape {
    public:
    Shape(){
        cout<<"THIS IS SHAPE CONS.. \n";
    }
    // void draw(){
    virtual void draw(){
        cout<<"Draw a shape : Shape"<<endl;
    }
};

class Rectangle :  public Shape{
    public:
    void printArea(){
        cout<<"THIS IS RECT AREA IS : ***** \n";
    }

    void draw() override{
        cout<<"Draw a shape : Rectangle"<<endl;
    }
};

int main(){
    // Rectangle r1;
    // r1.printArea();
    // r1.draw();

    Shape* shape = new Rectangle();
    shape->draw();
    return 0;
}