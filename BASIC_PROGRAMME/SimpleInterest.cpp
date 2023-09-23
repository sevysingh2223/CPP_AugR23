#include <iostream>

int main() {
    using namespace std;
    float p,r,t ,si, amount;
    cout<<"Enter the values of \n";
    cout<<"Principal :  \n";
    cin>>p;
    cout<<"Rate : \n";
    cin>>r;
    cout<<"Time : \n";
    cin >>t;
    //si = p*r*t/100;
    si =p*r*t/100;
    cout<<"The Simple Interest is Rs "<<si<<"\n";
    //amount =si+p;
    amount = si +p;
    cout<<"Amount is  Rs "<<amount;
    return 0;
}