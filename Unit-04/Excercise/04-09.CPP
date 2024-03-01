//Write a program to compute the area of a triangle and a cirlce by overloading the area() function.

#include<iostream>
#include<cmath>
using namespace std;

#define pi 3.141

void area(double a, double b)
{
    double result = 0.5 * a * b;
    cout<<endl<<"Area of Triangle: "<<result;
}

void area(double a)
{
    double result = pi * a * a;
    cout<<endl<<"Area of Circle: "<<result;
}

int main()
{
    double a, b;
    cout<<endl<<"Area of Triangle:";
    cout<<endl<<"-----------------------";
    cout<<endl<<"Enter base: ";
    cin>>a;
    cout<<"Enter height: ";
    cin>>b;
    cout<<"-----------------------";
    area(a,b);
    cout<<endl<<"-----------------------";
    cout<<endl;
    cout<<endl;
    cout<<endl<<"-----------------------";
    cout<<endl<<"Area of Circle:";
    cout<<endl<<"-----------------------";
    cout<<endl<<"Enter radius: ";
    cin>>a;
    cout<<"-----------------------";
    area(a);
    cout<<endl<<"-----------------------";
}