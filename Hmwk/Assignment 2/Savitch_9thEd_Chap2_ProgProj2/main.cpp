/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 14, 2015, 12:25 PM
 * Purpose: to write a program that calculates retroactive salary changes and
 * increases the employee's new salary in a monthly and yearly format
 */
//System libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function prototypes
//Execution begins here!
int main(int argc, char** argv) 
{
    //Declare Variables
    float pvYrSl;//Previous Yearly Salary
    float amtRet;//Amount retroactively due
    float nwAnSl;//New annual salary
    float nwMnSl;//New Monthly salary
    
    //Prompt the user for their previous annual salary
    cout<<"Hello fellow InGen employee!."<<endl;
    cout<<"I am a friendly program that will calculate the amount\n";
    cout<<"of retroactive pay due to you from your recent pay increase.\n";
    cout<<"I assure you that you will be happy with the results\n";
    cout<<endl<<endl;
    cout<<"Please input your previous yearly salary.\n";
    cin>>pvYrSl;
    cout<<endl;
    //Calculate the retroactive pay due
    amtRet=((pvYrSl/12)/2)*1.076;
    nwAnSl=pvYrSl*1.076;
    nwMnSl=nwAnSl/12;
    //Set output to 2 place holding digits
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"The retroactive amount owed to you from the\n";
    cout<<"last 6 months is: $"<<amtRet<<endl;
    cout<<"Your new annual salary is: $"<<nwAnSl<<endl;
    cout<<"your new monthly salary is: $"<<nwMnSl<<endl;
    cout<<"Thank you, and remember, InGen is always watching!"<<endl;
    
    return 0;
}

