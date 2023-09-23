#include<iostream.h>
int main(){
    int a,b,c;
    cout<<"Enter values for a and b";
    cin>>a>>b;
    cout<<"Before a = " <<a <<"b = "<<b;
    c=a;
    a=b;
    b=c;
    cout<<"After a = " <<a <<"b = "<<b;
}
