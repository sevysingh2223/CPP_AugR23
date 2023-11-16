// array input using function

#include<stdio.h>
#include<iostream>
using namespace std;
int arr23[3][3];

void addOne(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter e"<<"      ";
            cin>>arr23[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr23[i][j]<<"    ";
        }
        cout<<endl;
    }
    
}

int main(){
    addOne();
    return 0;
}