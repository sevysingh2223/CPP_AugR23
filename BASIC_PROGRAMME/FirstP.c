#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int n =29,sum=0;
    int copy = n;
    int count=0;
    while(n>0){
        count= count+1;
        n=n/10;
    }
    n=copy;
    while(copy>0){
        int last_digit = copy%10;
        sum = sum + pow(last_digit,count);
        copy =copy/10;
    }
    if(sum==n){
        printf("ARMSTRONG NUM");
    }
    else{
        printf("NOT ARMSTRONG NUM");
    }

    return 0;
}