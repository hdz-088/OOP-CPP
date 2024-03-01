#include<iostream>
using namespace std;

int p;
int &display(); // Function declaration returning a reference to int

int main() {
    display() = 5; // Assigning 5 to the result of display(), which is a reference to p
    cout << p;     // Output the value of p
    return 0;
}

int &display() {
    return p; // Return a reference to the global variable p
}
