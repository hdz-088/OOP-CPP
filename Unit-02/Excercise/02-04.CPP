//WAP to user input 3 vlues and return x, where x = a/b-c

#include<iostream>
using namespace std;

int main()
{
    float a,b,c,x;

    cout<<"Enter a: ";
    cin>>a;
    
    cout<<"Enter b: ";
    cin>>b;

    cout<<"Enter c: ";
    cin>>c;

    x = (a/b)-c;

    cout<<"\nValue of X = "<<x;
}