#include<stdio.h>
#include<iostream>
using namespace std;

void compareChar(char user_inp){
    if(user_inp =='a' || user_inp == 'e' || user_inp =='i' || user_inp =='o' || user_inp == 'u'){
        cout<<"VOWEL";
    }
    else{
        cout<<" CONSONANT";
    }
    return;
}

int main(){
    char user_inp;
    cin>>user_inp;
    compareChar(user_inp);
}