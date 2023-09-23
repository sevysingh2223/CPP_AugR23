#include<iostream>
using namespace std;
int main(){
    int choice,a,b;
    float result;
    cout<<"Choices are : \n";
    cout<<"1. Sum \n 2.Subtract \n 3.Product \n 4.Remainder\n";
    cin>>choice;
    cout<<"Enter numbers \n";
    cin>>a>>b;
    switch (choice)
        {
        case 1: result= a+b;
            break;
        case 2: result= a-b;
            break;
        case 3: result= a*b;
            break;
        case 4: result= a%b;
            break;
        default:
            cout<<"Invalid Choices";
            break;
    }

    cout<<"RESULT IS : "<<result;
}