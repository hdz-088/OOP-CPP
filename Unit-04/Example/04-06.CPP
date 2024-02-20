//Usage of Math Functions

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    cout<< "sin(100) = " << sin(100) << "\n";
    cout<< "cos(100) = " << cos(100) << "\n";
    cout<< "tan(100) = " << tan(100) << "\n";

    cout << "7 to the power of 6 = " << pow(7,6) << "\n";

    cout << "log10(10) = " << log10(10) << "\n";

    cout << "Square root of 4 = " << sqrt(4) << "\n";

    return 0;
}