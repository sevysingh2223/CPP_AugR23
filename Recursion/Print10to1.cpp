#include<stdio.h>
#include<iostream>
using namespace std;
void print(int start, int end){
    //base case (termination case)
    if(start > end){
        return;
    }
    
    print(start+1 , end);
    cout<<start<<"\n";
}
int main(){
    
    print(1,10);
    return 0;
}