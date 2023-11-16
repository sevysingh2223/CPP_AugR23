// array input through recursion
#include<stdio.h>
#include<iostream>
using namespace std;
int rec_arr[5];

    void arr_rec_func(int length,int i){
        if(i==length){
            return;
        }
        cin>>rec_arr[i];
        cout<<"Element is : "<<rec_arr[i]<<endl;
        arr_rec_func(length , i+1);
    }

int main(){
    int length;
    cout<<"Enter length"<<endl;
    cin>>length;
    arr_rec_func(length,0);
    return 0;
}