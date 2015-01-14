/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 14, 2015, 11:20 AM
 * Purpose: Branching Monthly Payment Calculator
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
    //Declare the variables
    float i; //interest rate percent per year
    float t; //temp variable
    float l; //loan amount $s
    unsigned short n; //Number of months
    float mp; //monthly payment $s
    //Input the variables requires
    cout<<"What is the interest rate in percent per year?"<<endl;
    cout<<"Format in a float"<<endl;
    cin>>i;
    i/=(100*12);//Convert to decimal
    cout<<"What is the loan amount in $ in float format?"<<endl;
    cin>>l;
    cout<<"Number of monthly payments in format integer"<<endl;
    cin>>n;
    //Calculations of the monthly payment
    if(i<=0)
    {
        mp=1/n;
    }
    else
    {
        t=pow(1+i,n);
        mp=i*t*l/(t-1);
    }
    //Display the results
    cout<<fixed<<setprecision(2);
    cout<<"your monthly payment = $"<<mp<<endl;
    //Exit stage right!
    return 0;
}

