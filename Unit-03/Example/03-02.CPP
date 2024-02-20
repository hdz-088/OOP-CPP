//Use of new and delete operator

#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
    int *arr;
    int size;

    cout << "\nEnter the size of the integer array: ";
    cin >> size;

    cout << "\nCreating an Array of size " << size << "..";
    arr = new int[size];

    cout << "\nDynamic allocation for memory for array arr is successful";

    delete arr;
    getch();
}