#include<stdio.h>
#include<iostream>
#include <stack>
using namespace std;
int main(){

    stack<int> myStack;
    // Push elements to the Stack
    myStack.push(20);
    cout<<myStack.empty()<<"\n";
    myStack.push(40);
    myStack.pop();
    if(!myStack.empty()) {
        cout << myStack.top() << endl;
    }

    myStack.push(200);
    myStack.push(300);
    myStack.push(400);
    myStack.push(500);
    myStack.push(600);
    myStack.push(700);
    return 0;
}