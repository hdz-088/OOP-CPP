//Use of bad_alloc Exception

#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
    private:
        int data1;
        char data2;
    public:
        void set (int i, char c)
        {
            data1 = i;
            data2 = c;
        }

        void display(void)
        {
            cout << "\nData1 = " << data1;
            cout << "\nData2 = " << data2;
        }
};

int main()
{
    sample *s_ptr;
    try
    {
        s_ptr = new sample;
    }
    catch(bad_alloc ba)
    {
        cout << "Bad Allocation Occured...The Program will terminate now...";
        return 1;
    }

    s_ptr->set(25,'A');
    s_ptr->display();

    delete s_ptr;
    getch();
}

//Sometimes you have to remove conio.h and getch() lines if you occure any error