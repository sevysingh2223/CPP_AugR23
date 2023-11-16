// array input using function

#include<stdio.h>
#include<iostream>
using namespace std;
int arr23[4];

void addOne(){
    for(int i=0;i<4;i++){
    cout<<"Enter e"<<endl;

        cin>>arr23[i];
    }
    int size = sizeof(arr23)/ sizeof(int);
    for(int i=0;i<size;i++){
        arr23[i] = arr23[i]+1;
    }
    for(int i=0;i<size;i++){
        cout<<arr23[i]<<"     ";
    }
}

void arr_inp(int length){
    int arr[length];
    for(int i=0;i<length;i++){
    cout<<"Enter e"<<endl;

        cin>>arr[i];
    }

    int n = length-1;
    for(int i=0;i<length/2;i++,n--){
        int t = arr[i];
        arr[i] = arr[n];
        arr[n]=t;
    }

    for(int i=0;i<length;i++){
        cout<<arr[i]<<"     ";
    }
}
int main(){
    int length;
    cout<<"Enter length"<<endl;
    cin>>length;
    // int length=10;
    // arr_inp(length);
    addOne();
    return 0;
}