#include<stdio.h>
#include<iostream>
int main(){
    using namespace std;
    int n;
    bool flag =true;
    cout<<"Enter number"<<"\n";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Prime Num";
    }else{
        cout<<"Not prime";
    }
    return 0;
}