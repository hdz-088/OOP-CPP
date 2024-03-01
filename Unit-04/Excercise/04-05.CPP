//Write a macro that obtains the largest of three numbers

#include<iostream>
using namespace std;

int a, b, c;

//Macros are simple text substitutions
#define COMP(a, b, c) \
    ((a > b && a > c) ? "A is the largest" : \
    ((b > c) ? "B is the largest" : "C is the largest"))

int main()
{
    cout<<endl<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    cout<<"Enter value of C: ";
    cin>>c;

    cout << endl << COMP(a, b, c);
    return 0;
}