/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 15, 2015, 2:06 PM
 * Purpose: To run a program that calculates the number of chocolate bars to 
 * maintain ones weight using the Harris-Benedict equation.
 */
//System Libraries
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins here!
int main(int argc, char** argv) 
{
    //Declare Variables and initialize
    float BMR;//Basal Metabolic Rate
    float wmCaNd;//Female Caloric needs
    float mnCaNd;//Male Caloric Needs
    float cdyBarC=230;//Caloric content of a chocolate bar
    float wgtLbs;//Weight in pounds
    float hgtInc;//Height in inches
    float ageYrs;//Age in years
    float cdyBar;//# of candy bars should be consumed
    char gender; char M; char F;//Gender inputs  user
    //Prompt user for inputs
    cout<<"Please enter your weight in pounds\n";
    cin>>wgtLbs;
    cout<<"Wow! You look great! Please enter your height in inches\n";
    cin>>hgtInc;
    cout<<"Thats a perfectly acceptable height... no im serious!\n";
    cout<<"Please enter your age in years.\n";
    cin>>ageYrs;
    cout<<"Please enter your gender."<<endl;
    cout<<"Input M for Male or F for female."<<endl;
    cin>>gender;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
        if(gender=='M')
        {
            BMR=66+(6.3*wgtLbs)+(12.9*hgtInc)-(6.8*ageYrs);
            cdyBar=BMR/cdyBarC;
        }
        else if (gender=='F')
        {
            BMR=655+(4.3*wgtLbs)+(4.7*hgtInc)-(4.7*ageYrs);
            cdyBar=BMR/cdyBarC;
        }
        else if(gender!='M'||gender!='F')
        {
            cout<<"Invalid input"<<endl;
        }
    cout<<"If you are "<<wgtLbs<<"lbs and of "<<hgtInc<<" inches tall,\n";
    cout<<"of the age of "<<ageYrs<<" years old should consume\n";
    cout<<cdyBar<<" Candy bars to maintain ones weight."<<endl;
    return 0;
}

