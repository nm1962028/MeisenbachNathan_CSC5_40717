/* 
 * File:   main.cpp
 * Author: Nathan Allen
 * Purpose: Savitch 9thEd Chapter 1 Programming Projects #3
 * Created on January 6, 2015, 5:49 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants
const int NICKEL=5;//(cents)
const int DIME=10;//(cents)
const int QUARTER=25;//(cents)

//Function Prototypes

//Execution begins here!
int main( ) 
{
    //Declare Variables
    short int nbr_of_nickels, nbr_of_dimes, nbr_of_quarters, crncy_ttl;
    //Number of nickels, number of Dimes, Number of Quarters and Currency total
    
    //Prompt user for input
    cout << "Welcome to the CSC-5 currency eating machine"<<endl;
    cout << "This machine eats any number of Quarters, Dimes and Nickels"<<endl;
    cout << "and then extrudes a product equal to their total worth"<<endl;
    cout << "Press enter after each coin amount entered"<<endl;
    cout << "Please input the amount of nickels"<<endl;
    cin >> nbr_of_nickels;
    cout << "Those were some delicious nickels"<<endl;
    cout << "Please Enter the number of dimes "<<endl;
    cin >> nbr_of_dimes;
    cout << "Dimes are a bit hard to swallow for their size..."<<endl;
    cout << "Please enter the number of quarters "<<endl;
    cin >> nbr_of_quarters;
    cout << "Well that certainly stifled my hunger"<<endl;
    cout << "Allow me to crunch the numbers for you... "<<endl;
    
    //Calculations
    crncy_ttl=nbr_of_nickels*NICKEL+nbr_of_dimes*DIME+nbr_of_quarters*QUARTER;
    
    //Output Results
    cout << "I have consumed "<<crncy_ttl<<" cents worth of coins!"<<endl;
    cout << "Well I sure am satiated, have a wonderful day!"<<endl;
    
    //Exit Stage Right
    return 0;
}

