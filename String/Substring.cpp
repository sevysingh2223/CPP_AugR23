#include <iostream>
#include <string.h>
using namespace std;
int main() {
    // Write C++ code here
    string name = "Hello world!";
    std::cout << name<<endl;
    std::cout << name.substr(1)<<endl;
    std::cout << name.substr(4)<<endl;
    std::cout << name.substr(7)<<endl;

    return 0;
}