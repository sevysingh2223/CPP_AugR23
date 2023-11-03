#include<stdio.h>
#include<iostream>
using namespace std;
int t_sum =0;

int sumN(int n){
    //base case (termination case)
    if(n==0){
        return t_sum ;
    }
    t_sum += n;
    return sumN(n-1);
}
int main(){
    
    cout<<sumN(10);
    return 0;
}