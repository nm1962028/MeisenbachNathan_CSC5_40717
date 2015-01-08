/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 6, 2015, 10:30 AM
 * Purpose: Hmwk, Solution to free fall program
 */

// System Libraries
#include <iostream>
using namespace std;

// User Libraries

// Global Constant
const float GRAVITY=32.174;//(ft/sec^2)

// Function Prototypes

// Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int time;//(secs)
    float dist;//distance(ft)
    //Prompt User for Input
    cout<<"This program calculates freefall"<<endl;
    cout<<"distance dropped in feet with an"<<endl;
    cout<<"object starting at rest."<<endl;
    cout<<"input the freefall time to drop in seconds."<<endl;
    cout<<"The time input is a positive integer"<<endl;
    cin>>time;
    //Calculate the distance dropped
    //dist=1.0f/2GRAVITY*time*time;
    //dist=1/2.0fGRAVITY*time*time;
    //dist=GRAVITY*time*time/2;
    //dist=0.5fGRAVITY*time*time/2;
    dist=5e-1*GRAVITY*time*time;
    //Output the results
    cout<<"Distance dropped = "<<dist<<" (ft)"<<endl;
    //Exit stage right
    return 0;
}

