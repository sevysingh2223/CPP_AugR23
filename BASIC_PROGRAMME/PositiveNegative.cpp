#include<iostream>
int main(){
    using namespace std;
    int a;
    cout<<"Enter values for a";
    cin>>a;
    if(a>0){
        cout<<a<<"is positive" ;
    }
    else if(a<0){
        cout<<a<<"is negative" ;
    }
    else{
        cout<<a<<"is zero" ;
    }
}
