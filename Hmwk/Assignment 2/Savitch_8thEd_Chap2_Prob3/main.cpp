/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 13, 2015, 10:16 AM
 * Purpose: Babylonian Square root calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins here!
int main(int argc, char** argv) {
    //Declare Variables and pray to the gods
    float number,guess,r;
    //Prompt user for a number
    cout<<"Please enter a number to estimate its square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //First Pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"first Pass calculation ->"<<guess<<endl;
    //Second Pass
    r=number/guess;
    guess=(guess+r)/2;
    //Output the second pass
    cout<<"Second Pass calculation ->"<<guess<<endl;
    //Exit Stage Right!
    return 0;
}

