#include <iostream>
int main() {
    using namespace std;
    float f ,c;
    cout<<"Enter the value of fahrenheit \n";
    cin>>f;
    c = (f-32) *5 /9;
    cout<<"The Celsius value is :" <<c;
    return 0;
}