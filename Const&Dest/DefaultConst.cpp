#include<stdio.h>
#include <iostream>
using namespace std;

class Person{
    public:
    Person(){
        cout<<"Object Created \n";
    }
};
int main(){
    Person ram;
    return 0;
}