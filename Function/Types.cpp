#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
// return type with arguments
int add_1(int a, int b)
{
    cout << "Function 1";
    return a + b;
}

// return type with no arguments
int add_2()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Function 2";
    return a + b;
}

// No return type with arguments
void add_4(int a, int b)
{
    cout << "Function 4";
    cout << "SUM IS : " << a + b;
}

// No return type with no arguments
void add_3()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Function 3";
    cout << a + b;
}
int main()
{
    int a = 10, b = 20;
    cout << add_1(a, b);
    cout << add_2();
    add_3();
    add_4(a, b);
}