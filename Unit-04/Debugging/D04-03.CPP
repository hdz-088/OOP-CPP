#include<iostream>
using namespace std;

void fun(int count)
{
    if(count == 0)
        cout<<count;
    else{
        cout<<count<<endl;
        fun(--count);
//        return 0; (Function type is void hence return 0 is not needed)
    }
}

int main()
{
    fun(2);
}