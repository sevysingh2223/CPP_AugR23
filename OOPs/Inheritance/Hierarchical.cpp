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

class Cat : public Animal{
    public:
        Cat(){
            cout<<"This is Cat Constructor"<<endl;
        }
        void eat(){
            cout<<"This is eat method by Cat Class"<<endl;
        }
};

int main(){

    dog bd; 
    bd.eat();
    cat ct;
    ct.eat();
    return 0;
}