#include<stdio.h>
#include<iostream>
using namespace std;
// Parent class
class Animal{
    public:
    Animal(){
        cout<<"This is Animal Constructor"<<endl;
    }
    
    void eat(){
        cout<<"This is eat method by Animal Class"<<endl;
    }
};

class Dog : public Animal{
    public:
    Dog(){
        cout<<"This is Dog Constructor"<<endl;
    }
    void eat(){
        cout<<"This is eat method by Dog Class"<<endl;
    }
};

class Bulldog : public Dog{
    public:
        Bulldog(){
            cout<<"This is BullDog Constructor"<<endl;
        }
        void eat(){
            cout<<"This is eat method by Bulldog Class"<<endl;
        }
};

int main(){

    Bulldog bd; 
    bd.eat();
    return 0;
}