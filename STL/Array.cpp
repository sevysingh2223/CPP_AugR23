#include<stdio.h>
#include <iostream>
#include<array>

using namespace std;
int main(){
    const int size = 5;
    array<int,size> myArray ={1,5,9,3,8};
    cout<<"Size of array is "<<myArray.size()<<"\n";
    cout<<"Element is"<<myArray.at(3)<<"\n";
    cout<<"Element is"<<myArray.back()<<"\n";
    cout<<"Element is"<<myArray.empty()<<"\n";
    cout<<"Element is"<<myArray.at(2)<<"\n";
    return 0;
}