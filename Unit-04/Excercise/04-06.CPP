//Redo Excercise 04-05 using inline function

#include<iostream>
using namespace std;

int a, b, c;

inline void comp(int a, int b, int c){
    if(a>b && a>c){
        cout<<endl<<"A is the largest";
    }else if(b>c){
        cout<<endl<<"B is the largest";
    }else{
        cout<<endl<<"C is the largest";
    }
}

int main()
{
    cout<<endl<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    cout<<"Enter value of C: ";
    cin>>c;

    comp(a, b, c);
}