#include<iostream>
using namespace std;

#define pi 3.14

int squareArea(int a);
int circleArea(int a);

int main()
{
    int a = 10;
    cout << squareArea(a) << " \n";
    cout << circleArea(a) << " \n";
    cout << a << endl;
}

int squareArea(int a)
{
    return a *= a;
}

int circleArea(int a)
{
    return pi * a * a;
}