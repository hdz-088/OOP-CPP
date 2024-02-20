//An election is contested by five candidates. The candidates are numbered 1 to 5 and the voting is done by marking the candidate on the ballot paper. Write a program to read the ballots and count the votes cast for each candidate using an array variable count. In case, a number read is outside the range 1 to 5, the ballot should be considered as a allot', and the program should also count the number of spoilt ballots.

#include<iostream>
using namespace std;

int main()
{
    int i, candidate1=0, candidate2=0, candidate3=0, candidate4=0, candidate5=0, spoiled=0;

    int arr[60] = {1, 4, 7, 3, 5, 2, 8, 4, 1, 3, 9, 2, 3, 1, 5, 11, 2, 4, 5, 1, 2, 4, 7, 3, 5, 2, 8, 4, 4, 1, 9, 2, 3, 1, 5, 11, 4, 4, 5, 1, 2, 4, 7, 3, 5, 2, 8, 4, 1, 5, 9, 2, 3, 1, 5, 11, 4, 4, 5, 1,};


    for(i=0; i<60; i++){
        if(arr[i]==1){
            candidate1++;
        }else if(arr[i]==2){
            candidate2++;
        }else if(arr[i]==3){
            candidate3++;
        }else if(arr[i]==4){
            candidate4++;
        }else if(arr[i]==5){
            candidate5++;
        }else{
            spoiled++;
        }
    }
    cout << "\nResult of Election:";
    cout << "\n------------------------------";
    cout << "\nVotes of 1st Candidate: " << candidate1;
    cout << "\nVotes of 2nd Candidate: " << candidate2;
    cout << "\nVotes of 3rd Candidate: " << candidate3;
    cout << "\nVotes of 4th Candidate: " << candidate4;
    cout << "\nVotes of 5th Candidate: " << candidate5;
    cout << "\n\nSpoiled Ballots: " << spoiled;
}