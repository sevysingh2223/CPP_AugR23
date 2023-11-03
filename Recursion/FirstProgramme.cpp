#include<stdio.h>
#include<iostream>
using namespace std;
void print(int start, int end){
    //base case (termination case)
    if(start == end){
        return;
    }
    cout<<"Hello"<<"\n";
    print(start+1 , end);
}
int main(){
    
    print(0,5);
    return 0;
}