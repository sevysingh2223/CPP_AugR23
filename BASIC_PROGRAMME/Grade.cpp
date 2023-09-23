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
    cout<<"The Percentage Generated is : "<<result<<"% \n";
    
    if(result> 80 && result <100){
        cout<<"GRADE A";
    }
    else if(result> 65 && result <79){
        cout<<"GRADE B";
    }
    else if(result> 55 && result <64){
        cout<<"GRADE C";
    }
    else if(result> 50 && result <54){
        cout<<"GRADE D";
    }
    else{
        cout<<"GRADE F";
    }
    
    return 0;
}