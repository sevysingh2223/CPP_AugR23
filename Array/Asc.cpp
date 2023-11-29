#include <iostream>
using namespace std;
// int n;
int arr[5] ={5,3,9,6,2};
int n = sizeof(arr) / sizeof(int);

int swapN(int i, int j,int n){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        return 0 ;
}

void ascOrd(int i, int j, int n){
    if(i==n){
        return;
    }

    while(j!=n){
        if(arr[i]  > arr[j]){
        int ans =swapN(i,j,n);
        j++;
        }
        else{
            j++;
        }
    }
    return ascOrd(i+1 , i+2 ,n);
}

int main() {
    ascOrd(0,1,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}