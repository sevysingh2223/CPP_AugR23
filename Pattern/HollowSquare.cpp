#include<iostream>
#include<stdio.h>
#include<conio.h>
int main(){
    using namespace std;
    int n=5;
    for(int j=1;j<=n;j++){
        for(int i=1;i<=n;i++){
            if(i==1 || i==n || j==1 || j==n ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}