#include<iostream>
using namespace std;

//Since no function 'show' defined, we have to first define the function

void show(int num)
{
    cout<<endl<<"A = "<<num;
}

void show(float num)
{
    cout<<endl<<"A = "<<num;
}

int main()
{
    int a = 2;
    float b = 2.5;
    show(a); //int show(a) was given
    show(b); //float show(b) was given
    return 0;
}

