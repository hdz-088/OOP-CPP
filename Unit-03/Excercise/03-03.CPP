//WAP to print the following output using for loops
//  1
//  22
//  333
//  4444
//  55555
//  .......

#include<iostream>
using namespace std;

int main()
{
    int i, j;

    for(i=1; i<10; i++){    //placed limit of i<10 for compiler
        for(j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}