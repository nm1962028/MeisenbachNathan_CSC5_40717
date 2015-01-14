/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 14, 2015, 10:35 AM
 * Purpose: To derive the amount of a food additive required to kill 
 * a person derived from the amount used to kill a mouse
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
const float CNVLBGM=453.6;//Grams per pound
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) 
{
    //Declare Variables
    const float CONC=1e-3f;//sweetener concentration
    float wtCoke=3.5e2f;//weight of coke in grams
    float kMouse=5.0f;//Quantity of sweetener thats kills mouse in grams
    float wtMouse=3.5e1f;//Wt of mouse in grams
    float kPer, wtDsPer;
    int   nCans;
    //Input the Desired weight of a person
    cout<<"Input your desired weight in lbs"<<endl;
    cout<<"Format the input as a float"<<endl;
    cin>>wtDsPer;
    wtDsPer*=CNVLBGM;//Convert to grams
    //Calculations
    kPer=kMouse/wtMouse*wtDsPer;
    nCans=kPer/wtCoke/CONC;
    //Output the limit of what you can drink
    cout<<"Number of cans of diet coke ";
    cout<<"That will kill you = "<<nCans<<endl;
    //Exit Stage right!
    return 0;
}

