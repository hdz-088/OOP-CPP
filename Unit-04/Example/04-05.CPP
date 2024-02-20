//Example of Function Overloading

#include<iostream>
using namespace std;

int area(int);
int area(int, int);
float area(double);

int main()
{
    cout << "Calling the area() function for computing the area of a square (side = 5): " << area(5) << "\n";

    cout << "Calling the area() function for computing the area of a rectangle (length = 5, bredth = 10): " << area(5,10) << "\n";

    cout << "Calling the area() function for computing the area of a circle (radius = 5.5): " << area(5.50) << "\n";

    return 0;
}

int area(int side)
{
    return side*side;
}

int area(int length, int bredth)
{
    return (length*bredth);
}

float area(double radius)
{
    return (3.14*radius*radius);
}