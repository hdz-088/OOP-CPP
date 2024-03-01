#include<iostream>
using namespace std;

//In C++, when providing default arguments for function parameters, they must appear from right to left.
//int sub(int a = 20, int b) (given)
int sub(int b, int a=20)
{
    int result;
    result = a-b;
    return result;
}

int main()
{
    int a = 100;
    int b = 200;
    int result; 
    result = sub(b);
    cout << "Value 1: " << result;
    result = sub(a);
    cout << endl << "value 2: " << result; //added endl to properly show output
    return 0;
}