#include <iostream>
int main() {
    using namespace std;
    float l,b;
    cout<<"Enter the value of length \n";
    cin>>l;
    cout<<"Enter the value of breadth \n";
    cin>>b;
    // Area =l*b;
    // cout<<"Area is : "<<Area;
    cout<<"The Area is :" << l*b <<"\n";
    cout<<"The perimeter is :" <<2*(l+b);
    
    return 0;
}