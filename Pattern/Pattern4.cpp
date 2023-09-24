#include<iostream>
#include<stdio.h>
#include<conio.h>
int main(){
    using namespace std;
    int n=5;
    for(int j=5;j>=1;j--){
        for(int i=j;i>=1;i--){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}