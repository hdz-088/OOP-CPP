//WAP to input an integer value from user and write "Well Done" that many times

#include<iostream>
using namespace std;

int main()
{
    int a,i;
    cout<<"Enter number: ";
    cin>>a;

    for(i=5;i<=a;i++){
        cout<<"Well Done"<<endl;
    }
}