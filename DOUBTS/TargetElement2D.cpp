#include<stdio.h>
#include<iostream>
using namespace std;
int arr[3][3] ={5,8,96,6,40,52,41,36,23};
int rows =3;
int cols =3;
int findTarget(int i ,int j ,  int n,int target){
    if(i==rows){
        return -1;
    }
    if(j==cols){
        return findTarget(i+1 , 0 , n ,target);
    }
    if(arr[i][j]==target){
        cout<<i<<"      "<<j;
        return 1;
    }
    return findTarget(i,j+1,n,target);
}
int main(){
    // arr[5] =
    int target = 36;
    findTarget(0 ,0 , 9,target);
    return 0;
}