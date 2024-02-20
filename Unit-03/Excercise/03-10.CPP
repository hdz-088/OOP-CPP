//An electricity board charges the following amount:
// 0-100 units : 60 paisa per unit
// 100-200 units: 80 paisa per unit
// 300- : 90 paisa per unit

//All users are charged a minimum of 50 Rs. 
//If the total amount is more than 300Rs then an additional surcharge of 15% is added
//WAP to read the names of users and number of units consumed and print out the charges with name.

#include<iostream>
using namespace std;

string name, notice;
double units, charge, final_amount;
int service_charge = 50;

int main(){

    //Input
    cout<<"Enter your Name: ";
    cin>>name;
    cout<<"\nEnter your Consumption (in unit): ";
    cin>>units;

    //Output
    cout<<"\n-----------------------------------";
    cout<<"\nName: "<<name;
    cout<<"\nYour consumption: "<<units;

    //Checking Conditions
    if(units > 0 && units < 100){
        charge = 0.60 * units;
        cout << "\nRate applied = 60p/Unit";
    }else if(units >= 100 && units < 300){
        charge = 0.80 * units;
        cout << "\nRate applied = 80p/Unit";
    }else{
        charge = (0.90 * units) * 1.15; // Applying 15% surcharge
        cout << "\nRate applied = 90p/Unit + 15% Surcharge";
        notice = "Due to High Electricity Consumption 15% of Surcharge is added";
    }

    //Final Output
    final_amount = service_charge+charge;

    cout<<"\nCharges: "<<charge;
    cout<<"\n-----------------------------------";
    cout<<"\nYour bill amount is: "<<final_amount;
    cout<<"\n-----------------------------------";
}