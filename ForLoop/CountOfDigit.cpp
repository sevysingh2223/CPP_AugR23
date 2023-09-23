#include<stdio.h>
#include<iostream>
int main(){
    using namespace std;
    int n;
    int c;
    cout<<"Enter number"<<"\n";
    cin>>n;
    for(int count =1;n>0;count++){
        n = n/10;
        c= count;
    }
    cout<<"Count of Digit is : "<<c;
    return 0;
}