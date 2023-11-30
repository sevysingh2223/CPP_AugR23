#include<stdio.h>
#include<iostream>
using namespace std;

int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};\
int rows = 3;
int cols =3;
int sum =0;
void addAbove(int i, int j,int rows ,int cols){
    if(i==rows){
        cout<<sum;
        return;
    }
    
    if(i<=j){
        if(j == cols){
        addAbove(i+1, 0 ,rows,cols);
        }
        else{
            sum += arr[i][j];
            // cout<<sum;
            addAbove(i , j+1 , rows, cols);
        }
    }
    else{
        addAbove(i , j+1,rows,cols);
    }
}
int main(){
    addAbove(0,0,3,3);
    return 0;
}