#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter the sides of triangle";
    cin>>a>>b>>c;
    if(a+b>c &&  a+c>b  &&b+c>a){
        cout<<"VALID SIDES OF TRIANGLE";
    }
    else{
        cout<<"NOT THE VALID SIDES OF TRIANGLE";
    }
    return 0;
}