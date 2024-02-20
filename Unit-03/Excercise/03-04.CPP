//WAP to evaluate the following investment equation: V = P(1+r)^n

#include<iostream>
#include<math.h>
using namespace std;

int P, n;
double V, r;

void equation(int P, float r, int n)
{
    V = P * pow((1 + r), n);
    
    cout << "\nThe future value of the investment";
    cout << " V = " << V;
}

int main()
{
    cout << "Enter the principal amount (P): ";
    cin >> P;
    cout << "Enter the annual interest rate (r): ";
    cin >> r;
    cout << "Enter the number of years (n): ";
    cin >> n;

    equation(P, r, n);

    return 0;
}
