#include<stdio.h>
#include<iostream>
using namespace std;
void print(int start, int end){
    //base case (termination case)
    if(start > end){
        return;
    }
    if(start%2!=0){
        cout<<start<<"\n";
    }
    print(start+1 , end);
}
int main(){
    int start,end;
    cout<<"Enter Range";
    cin>>start>>end;
    print(start,end);
    return 0;
}