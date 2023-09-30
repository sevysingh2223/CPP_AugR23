#include<iostream>
#include<stdio.h>
#include<conio.h>
int main(){
    using namespace std;
    int n =4;

    for(int row=1;row<=n;row++){
        // space
        for(int j=1;j<=row-1;j++){
            cout<<"  ";
        }
        // star
        for(int i=1;i<=n;i++){
        cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}