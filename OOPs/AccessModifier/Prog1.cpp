#include<stdio.h>
#include<iostream>

using namespace std;

class A{
    // double balance; bydefault set to be private
    // hnece not accessible
    // make them public
    double balance; 
    void show(){
        cout<<"Hiii U There"<<endl;
    }
    public : 
        int age =10;

        void display(){
            cout<<"Hello User"<<endl;
            show();
            cout<<"Balance is: " <<balance<<endl;
    }
};

int main(){
    A obj;
    // cout<<obj.balance<<endl;
    cout<<obj.age<<endl;
    obj.display();
    return 0;
}

// private