//Rewrite the Excercise 4.2 to make the row parameter of the matrix as a default argument

#include<iostream>
using namespace std;

int a, b; //a = column, b = row

int sizeofmatrix()
{
    cout<<endl<<"Enter the size of Column of a 2D Matrix: ";
    cin>>a;
    return a;
}

//Excercise 04-02
int printsize(int a, int b=3)
{
    cout<<endl<<"The size of 2D Matrix is: "<<b<<" x "<<a;
    return 0;
}

int main()
{
    sizeofmatrix();

    //Excercise 04-01
    //cout<<endl<<"The size of 2D Matrix is: "<<a<<" x "<<b;
    //return 0;

    //Excercise 04-02
    printsize(a);
}