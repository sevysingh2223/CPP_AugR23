#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

static int y =100;
void add(int a, int b)
{
    cout << "Func_1 SUM IS : " << a + b << "\n";
    y++;
}

void add(int a, float b)
{
    cout << "Func_2 SUM IS : " << a + b << "\n";
    y+=10;
}
void add(float a, float b)
{
    cout << "Func_3 SUM IS : " << a + b << "\n";
    y+=458632145;
}

int main()
{
    int a = 10, b = 20;
    float c = 4.5, d = 90.5;
    add(a, b);
    add(a, c);
    add(c, d);
    add(b, d);
    cout<<y;
}