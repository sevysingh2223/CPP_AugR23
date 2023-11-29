#include<stdio.h>
#include<iostream>
using namespace std;
int arr[5] ={5,8,96,6,40};
int findTarget(int i , int n,int target){
    if(i==n){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return findTarget(i+1,n,target);
}
int main(){
    // arr[5] =
    int target = 96;
    cout<<findTarget(0 , 5,target);
    return 0;
}