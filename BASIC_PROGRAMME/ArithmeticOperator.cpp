#include<iostream>
using namespace std;
int main(){
    //Arithmetic Operator
    //Take input value for x and y
    int x,y;
    cout<<"Enter the values for x and y \n";
    cin>>x>>y;
    // Sum of x and y
    cout<<"Sum is : "<<x+y<<"\n";
    // Difference of x and y
    cout<<"Difference is : "<<x-y<<"\n";
    // Product of x and y
    cout<<"Product is : "<<x*y<<"\n";
    // Remainder of x and y
    cout<<"Remainder is : "<<x%y<<"\n";
    // Increment of x
    cout<<"Value of x is : "<<x++<<"\n";
    // x++ is post increment that's why after execution of line it will increment the value of x
    cout<<"New Value of x"<<x<<"\n";
    // Similarly of post decrement
    y--;
    cout<<"Decremented Value of y is : "<<y<<"\n";
    
}