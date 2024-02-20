//A cricket team has the following table of batting figures for a series of test matches:
//
//|------------------------------------------------------------------|
//| Player's name | Runs | Innings | Times not out | Batting Average |
//| Sachin        | 8430 | 230     | 18            |
//| Saurav        | 4200 | 130     | 09            |
//| Rahul         | 3350 | 105     | 11            |
//|------------------------------------------------------------------|
//
//WAP to read the figures set out in the above form, to calculate the batting averages and to print out the complete table including the averages. 

//Formula for batting average = runs / (innings - not out)

#include<iostream>
#include<iomanip>
using namespace std;

class scores
{
private:
    string name;  
    int runs, innings, not_out;
    float average;

public: 

    void getdata() 
    {
        cout << "\nEnter Cricketer's Name : ";
        cin >> name;
        cout << "Enter Total Runs: ";
        cin >> runs;
        cout << "Enter Number of Innings: ";
        cin >> innings;
        cout << "Enter Number of Not-Out: ";
        cin >> not_out;

        average = static_cast<float>(runs) / (innings - not_out);

// In C++, if you divide two integers, the result will be an integer, even if you store it in a double variable. To ensure that the division produces a floating-point result, you need to ensure at least one of the operands is a floating-point number.

    }

    void printdata()
    {
        cout << "\n| " << setw(13) << name << " | " << setw(4) << runs << " | " << setw(7) << innings << " | " << setw(13) << not_out << " | " << setw(15) << average << " | ";
        cout << "\n|------------------------------------------------------------------|";
    }
};

int main()
{
    scores s1, s2, s3;

    s1.getdata();
    s2.getdata();
    s3.getdata();
    
    cout << "\n|------------------------------------------------------------------|";
    cout << "\n| Player's name | Runs | Innings | Times not out | Batting Average |";
    cout << "\n|------------------------------------------------------------------|";
    
    s1.printdata();
    s2.printdata();
    s3.printdata();
}