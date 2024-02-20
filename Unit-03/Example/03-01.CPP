//Scope Resolution Operator Example

#include<iostream>
using namespace std;

int m = 10; //global m 
int main()
{
    int m = 20; //local m
    {
        int k = m;
        int m = 30; //local m to inner block

        cout << "\nWe are in inner block.";
        cout << "\nk = " << k;
        cout << "\nm = " << m;
        cout << "\n::m = " << ::m; //Scope Resolution Operator ::
    }

    cout << "\nWe are in outer Block";
    cout << "\nm = " << m;
    cout << "\n::m = " << ::m;

    return 0;
}