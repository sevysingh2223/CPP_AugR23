#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Choices are : \n";
    cout<<"1.Withrawal \n 2.Balance Enquiry \n 3.Pin Generation \n 4.Exit \n";
    cin>>choice;
    switch (choice)
        {
        case 1: cout<<"Withraw Amount";
            break;
        case 2:cout<<"Balance Amount is Rs 1000.....";
            break;
        case 3: cout<<"Generated Pin is 8520";
            break;
        case 4: cout<<"Exit";
            break;
        default:
            cout<<"Invalid Choices";
            break;
    }


}