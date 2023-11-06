//print the odd number //

#include<iostream>
#include<stdio.h>
using namespace std;

int sum =0;
void sod(int num){
    if(num<=0){
        cout<<sum;
        return;
    }
    int rem = num%10;
    sum += rem;
    sod(num/10);
}

int main(){
    int num;
    cout<<"Enter num";
    cin>>num;
    sod(num);
    return 0;
}
