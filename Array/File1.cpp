#include<iostream>
#include<stdio.h>
#include<conio.h>
int main(){ 
    using namespace std;
    int arr[] ={5,8,7,3,9,1};  
    // Address of array
    // cout<<arr<<"\n";
    // cout<<"First element is : " <<arr[0];
    // cout<<"Second element is : " <<arr[1];
    // cout<<"Third element is : " <<arr[2];
    // cout<<"Fourth element is : " <<arr[3];
    // cout<<"Fifth element is : " <<arr[4];
    // cout<<"sixth element is : " <<arr[5]<<"\n";

    int length = sizeof(arr)/sizeof(int);

    for(int i=0;i<length;i++){
        // if(i%2==1){
        //     cout<<"Array at "<<i<<" position is : "<<arr[i]<<"\n";
        // }
        // if(arr[i]%2==1){
        //     cout<<"Array at "<<i<<" position is : "<<arr[i]<<"\n";
        // }
        if(arr[i]%2==1 && i%2==1){
            cout<<"Array at "<<i<<" position is : "<<arr[i]<<"\n";
        }
    }

    cout<<"Size of my array is : "<<sizeof(arr)<<"\n";
    cout<<"Length of my array is : "<<sizeof(arr)/sizeof(int)<<"\n";
    return 0;
}