#include <iostream>

int main() {
    using namespace std;
    float maths, eng,hindi,science,comp;
    float sum ,result;
    cout<<"Enter the marks for: \n";
    cout<<"Maths \n";
    cin>>maths;
    cout<<"English \n";
    cin>>eng;
    cout<<"Hindi \n";
    cin>>hindi;
    cout<<"Science \n";
    cin>>science;
    cout<<"Computer \n";
    cin>>comp;
    //sum *100/500;
    sum = maths + eng + hindi +science+comp;
    result =sum*100/500;
    cout<<"The Percentage Generated is : "<<result<<"%";
    
    
    return 0;
}