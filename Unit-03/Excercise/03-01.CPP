//Write a function using reference variable as arguments to swap the values of a pair of integers

#include<iostream>
using namespace std;

int num1, num2;

void swapfunc(int a, int b)
{
    cout << "\nValues Before Swapping:";
    cout << "\n num1 = " << a;
    cout << "\n num2 = " << b;

    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "\n\nValues After Swapping:";
    cout << "\n num1 = " << a;
    cout << "\n num2 = " << b;
}

int main()
{
    cout << "\nEnter two numbers: ";
    cin >> num1;
    cin >> num2;

    swapfunc(num1, num2);

    return 0;
}