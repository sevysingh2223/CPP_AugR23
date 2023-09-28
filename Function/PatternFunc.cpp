#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void print(int n){
    for(int j=0;j<=n;j++){
        for(int i=0;i<j;i++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main(){
    using namespace std;
    int n=5;
    print(n);
    return 0;
}