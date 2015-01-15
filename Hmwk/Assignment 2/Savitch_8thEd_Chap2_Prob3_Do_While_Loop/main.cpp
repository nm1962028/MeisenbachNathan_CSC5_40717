/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 13, 2015, 10:16 AM
 * Purpose: Babylonian Square root calculator
 *             New Version to utilize loops!
 *              Do-While implementation
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins here!1
int main(int argc, char** argv) 
{
    //Declare Variables and pray to the gods
    float number,guess,r,count=0;
    //Prompt user for a number
    cout<<"Please enter a number to estimate its square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //Initialize
    guess=number/2;
    do
    {
        r=number/guess;
        guess=(guess+r)/2;
        count++;
        //Output the first pass
        cout<<"Loop #"<<count<<" ->"<<guess<<endl;
    //}while(guess!=r);My preferred technique
    }while(abs(guess-r)>.01);//The books technique
    //Exit Stage Right!
    return 0;
}

