//Write a Function that creates a vector of user-given size M using new operator

#include <iostream>
#include <vector>
using namespace std;

vector<int> createVector(int M) {
    // Dynamically allocate memory for an array of size M
    int* arr = new int[M];

    // Convert the dynamically allocated array into a vector
    vector<int> vec(arr, arr + M);

    // Return the vector
    return vec;
}

int main() {
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    // Create a vector of user-given size using the createVector function
    vector<int> userVector = createVector(size);

    // Print the elements of the vector
    cout << "Vector created with size " << userVector.size() << ":" << endl;
    for (int i = 0; i < userVector.size(); ++i) {
        cout << userVector[i] << " ";
    }
    cout << endl;

    return 0;
}
