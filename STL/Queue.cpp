#include<stdio.h>
#include<iostream>
#include <queue>
using namespace std;
int main(){

    queue<int> myqueue;
    // Push elements to the queue
    myqueue.push(20);
    cout<<myqueue.empty()<<"\n";
    myqueue.push(40);
    myqueue.pop();
    cout<<myqueue.front();
    myqueue.push(200);
    myqueue.push(300);
    myqueue.push(400);
    myqueue.push(500);
    myqueue.push(600);
    myqueue.push(700);
    cout<<myqueue.front();
    cout<<myqueue.back();
    return 0;
}