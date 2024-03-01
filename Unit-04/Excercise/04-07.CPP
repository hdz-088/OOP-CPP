//Write a function power() to raise a number m to a power n. The function takes a double value for m and int value for n, and returns the result correctly. Use a default value of 2 for n to make the function to calculate square when this argument is omitted. Write a main that gets the value of m and n from the user to test the function.

#include<iostream>
#include<cmath>
using namespace std;

double power(double m, int n = 2)
{
    double result = pow(m,n);
    cout<<endl<<"The value of " << m <<" power "<< n <<" is: " << result;
    return result;
}

int main()
{
    double m;
    int n;
    
    cout <<endl<<"Enter the value of base: ";
    cin>>m;
    cout<<endl<<"Enter the value of power: ";
    cin>>n;

    power(m,n);
    return 0;
}