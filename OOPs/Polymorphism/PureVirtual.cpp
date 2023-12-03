#include<iostream>
#include<stdio.h>
using namespace std;

class Shape {
    public:
    Shape(){
        cout<<"THIS IS SHAPE CONS.. \n";
    }
    // PURE VIRTUAL FUNCTION
    virtual void draw()=0;

    virtual void add() = 0;
};

class Rectangle :  public Shape{
    public:
    void printArea(){
        cout<<"THIS IS RECT AREA IS : ***** \n";
    }

    void draw() override{
        cout<<"Draw a shape : Rectangle"<<endl;
    }

    void add(){
        cout<<"ADD FUNC";
    }
};

int main(){
    Rectangle r1;
    r1.printArea();
    r1.draw();

    // Shape* shape = new Rectangle();
    // shape->draw();
    return 0;
}
