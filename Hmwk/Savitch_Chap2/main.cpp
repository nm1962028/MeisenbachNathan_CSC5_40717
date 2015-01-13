/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 13, 2015, 2:44 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//GLobal Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare Variables
    int hours;
    double gross_pay, rate;
    cout<<"Enter the hourly rate of pay $";
    cin>>rate;
    cout<<"Enter the number of hours worked, \n"
        <<"rounded to a whole number of hours: ";
    cin>>hours;
    if (hours>40)
        gross_pay=rate*40+1.5*rate*(hours-40);
    else
        gross_pay=rate*hours;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Hours = "<<hours<<endl;
    cout<<"Hourly pay rate = $"<<rate<<endl;
    cout<<"Gross Pay = "<<gross_pay<<endl;
    return 0;
}

