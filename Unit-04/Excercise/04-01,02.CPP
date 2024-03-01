//Write a function to read a matrix of size m x n from the keyboard and display the same using functions.
//Excercise 04-01 and 04-02 is combinesd

#include<iostream>
using namespace std;

int a, b;

int sizeofmatrix()
{
    cout<<endl<<"Enter the size of 2D Matrix: ";
    cin>>a;
    cout<<" x ";
    cin>>b;
    return a, b;
}

//Excercise 04-02
int printsize(int a, int b)
{
    cout<<endl<<"The size of 2D Matrix is: "<<a<<" x "<<b;
    return 0;
}

int main()
{
    sizeofmatrix();

    //Excercise 04-01
    //cout<<endl<<"The size of 2D Matrix is: "<<a<<" x "<<b;
    //return 0;

    //Excercise 04-02
    printsize(a,b);
}