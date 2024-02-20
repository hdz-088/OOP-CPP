//WAP to Find Average of Two numbers

#include<iostream>
using namespace std;

int main()
{
    float number1, number2, sum, average;

    cout << "Enter 1st Number: ";
    cin >> number1;
    cout << "Enter 2nd Number: ";
    cin >> number2;

    sum = number1 + number2;
    average = sum/2;

    cout << "\nSum of Two numbers : " << sum;
    cout << "\nAverage of Two numbers: " << average;

    return 0;
}