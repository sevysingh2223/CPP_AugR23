#include<stdio.h>
#include<iostream>
using namespace std;
int jos(int n,int k){
    if(n==0){
        return 0;
    }
    return (jos(n-1,k)+k) %n;
}
int main(){
    int n,k;
    cout<<jos(7,3);
    return 0;
}