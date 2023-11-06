//print the odd number //

#include<iostream>
#include<stdio.h>
using namespace std;
void table(int num ,int index){
    if(index>10){
        return;
    }
    cout<<num<<"*"<<index<<"="<<(num*index)<<"\n";
    table(num,index+1);
}

int main(){
    int num;
    cout<<"Enter num";
    cin>>num;
    table(num,1);
    return 0;
}
