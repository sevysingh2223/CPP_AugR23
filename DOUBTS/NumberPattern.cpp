#include<stdio.h>
#include<iostream>
using namespace std;
// 1
// 12
// 123
// 1234
// 12345
int main(){
    int n=5;
    for(int i=0;i<=n;i++){
        int k =1;
        for(int j=0;j<i;j++){
            cout<<k;
            k++;
        }
        cout<<"\n";
    }
    return 0;

}