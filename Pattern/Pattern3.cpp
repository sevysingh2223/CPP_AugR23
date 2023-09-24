#include<iostream>
#include<stdio.h>
#include<conio.h>
int main(){
    using namespace std;
    int n=5;
    for(int j=0;j<=n;j++){
        for(int i=0;i<j;i++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}