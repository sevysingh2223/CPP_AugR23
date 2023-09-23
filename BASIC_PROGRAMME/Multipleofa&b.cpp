#include<iostream>
int main(){
    using namespace std;
    int a;
    cout<<"Enter num";
    cin>>a;
    if((a%5==0) && (a%7==0)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
