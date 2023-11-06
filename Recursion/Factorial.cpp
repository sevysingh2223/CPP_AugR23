//print the odd number //

#include<iostream>
#include<stdio.h>
using namespace std;

int prod=1;
void fact(int num){
    if(num<=0){
        cout<<prod ;
        return;
    }
    prod *= num;
    fact(num-1);
}

int main(){
    int num;
    cout<<"Enter num";
    cin>>num;
    fact(num);
    return 0;
}
