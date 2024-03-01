//Write a function to perform same operation as that of Exercise 04-07 but takes an int value for m. Both the functions should have same name. Write a main that calls both the function. Use the concept of function overloading.

#include<iostream>
#include<cmath>
using namespace std;

double power(double m, int n = 2)
{
    double result = pow(m,n);
    cout<<endl<<"The value of " << m <<" power "<< n <<" is: " << result;
    return result;
}

int power(int m, int n = 2)
{
    int result = pow(m,n);
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