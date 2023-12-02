#include<iostream>
#include<stdio.h>
using namespace std;
class Head{
    public:
    int count = 1;
    void printArea(){
        cout<<"THIS IS SHAPE AREA IS : ***** "<<count<<"\n";
        count++;
    }
};
class Shape : virtual public Head{
    public:
    Shape(){
        cout<<"THIS IS SHAPE CONS.. \n";
    }
};

class Rectangle : virtual public Head{
    public:
    // void printArea(){
    //     cout<<"THIS IS RECT AREA IS : ***** \n";
    // }
};
class Rect_Obj : public Rectangle , public Shape{
    public:
    // void printArea(){
    //     cout<<"THIS IS OBJECT AREA IS : ***** \n";
    // }
};

int main(){
    Rect_Obj r1;
    r1.printArea();
    return 0;
}