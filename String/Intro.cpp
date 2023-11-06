#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    string fname = "Rajnandini";
    string lname = "Kumari";
    cout<<"FName: "<<fname<<"\n";
    cout<<"LName: "<<lname<<"\n";
    //concatenate
    string fullname = fname +" " + lname;
    cout<<fullname<<endl;

    string name = fname.append(lname);
    cout<<"THE NAME IS : "<<name<<endl;

    cout<<"SIZE OF  : "<<fname <<" : "<<fname.length()<<endl;
    cout<<"SIZE OF  : "<<lname <<" : "<<lname.size()<<endl;

    string sen = "hello";
    // cout<<sen[1]<<endl;
    // cout<<sen[sen.size()-1]<<endl;
    
    for(int i=0;i<sen.size();i++){
        cout<<sen[i]<<"\t";
    }

    cout<<" \"Hello\" "<<endl;
    cout<<" \\Hello\' "<<endl;
    string user;
    cout<<"ENTER NAME"<<endl;
    // cin>>user;
    getline(cin,user,'\n');
    cout<<user;
    return 0;
}


// "\\Hello\\"