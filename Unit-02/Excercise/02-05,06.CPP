//WAP to convert temperature for fahrenheit to celcius using "temp" class

#include<iostream>
using namespace std;

class temp
{
    private:
        double fahrenheit, celcius;
    public:
        void ftoc(){
            cout<<"Enter Temperature in Fahrenheit: ";
            cin>>fahrenheit;
            celcius = (fahrenheit-32)*5/9;
            cout<<"Temperatuer in Celcius: "<<celcius<<" °C"<<endl;
        }
        void ctof(){
            cout<<"Enter Temperature in Celcius: ";
            cin>>celcius;
            fahrenheit = (celcius*9/5)+32;
            cout<<"Temperature in Fahrenheit: "<<fahrenheit<<" °F"<<endl;
        }
};

int main()
{
    // temp t1;
    // t1.conversion();
    int a;
    temp t1;

    cout<<"Welcomr to Temperature Conversion\n";
    cout<<"Press 1 to Convert from: F -> C\n";
    cout<<"Press 2 to Convert from: C -> F\n";
    cin>>a;

    if(a==1){
        t1.ftoc();
    }else if(a==2){
        t1.ctof();
    }else{
        cout<<"Wrong Input";
    }

    cout<<"\nThank You!";
}