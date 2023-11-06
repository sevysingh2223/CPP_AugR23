#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int prod =1;
void power(int base , int exp){
    if (exp == 0) {
        cout<<prod;
        return;
    }
    prod *= base;
    power(base , exp-1);
}

int main(){ 
    power(2,3);
    return 0;
}
