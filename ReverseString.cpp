#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    string name;
    cout<<"Enter name \n";
    cin>>name;

    for(int i=name.length();i>=0;i--){
        cout<<name[i];
    }
    return 0;
}