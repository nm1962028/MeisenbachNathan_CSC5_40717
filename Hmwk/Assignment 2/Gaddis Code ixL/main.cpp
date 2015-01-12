/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 12, 2015, 11:26 AM
 * Purpose: Monthly payment on car loan
 */

//System Libraries
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) 
{
    //Declare our variables
    float intRate=0.0319f/12;//Capital one
    float msrplus=4e4f;   //loan amount for buick avinir
    char nPaymt=60;       //#of Monthly payment
    //Calculate the monthly payment
    float temp=pow((1+intRate),nPaymt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //ouput the inputs
    cout<<"Interest per Year = "<<intRate*100<<endl;
    cout<<"Number of Payments = "<<static_cast<int>(nPaymt)<<endl;;
    cout<<"Loan amount $ "<<msrplus<<endl;
    //output our car payment
    cout<<"My Avinir will cost $ "<<mPay<<" per month."<<endl;

    
    return 0;
}

