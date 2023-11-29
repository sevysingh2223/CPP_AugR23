#include <iostream>
#include <string.h>
using namespace std;
int main() {
    // Write C++ code here
    string name = "Hello world!";
    int length =0;
    int i=1;
    while(name !=""){
        length +=1;
        name = name.substr(i);
        // cout<<length << name;
    }

    cout<<length;
    return 0;
}