/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 14, 2015, 12:25 PM
 * Purpose: to write a program that plays the game mad lib
 */
//System libraries
#include <iostream>
using namespace std;
//User Libraries
//GLobal Constants
//Function prototypes
//Execution begins here!
int main(int argc, char** argv) 
{
    //Declare Variables
    double radius, vm;
    //Prompt the user for input
    cout<<"Enter the radius of a sphere."<<endl;
    cin>>radius;
    //Caluulate the volume of a sphere
    vm=(4.0/3.0)*3.1515*radius*radius*radius;
    cout<<"The volume is "<<vm<<endl;
    return 0;
}

