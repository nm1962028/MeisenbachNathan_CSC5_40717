/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 15, 2015, 11:03 AM
 * Purpose: To calculate sums without loops
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int sum=0,sumNeg=0,sumPos=0,sumEven=0,sumOdd=0;
    int input;
    //Prompt for a value and sum it
    cout<<endl<<"Input an integer value!\n";
    cin>>input;
    sum+=input;
    if(input>0)sumPos+=input;
    else sumNeg+=input;
    if(input%2)sumOdd+=input;
    else sumEven+=input;
    //Output the result
    //Prompt for a value and sum it
    cout<<endl<<"Input an integer value!\n";
    cin>>input;
    sum+=input;
    if(input>0)sumPos+=input;
    else sumNeg+=input;
    if(input%2)sumOdd+=input;
    else sumEven+=input;
    cout<<"Sum =          "<<sum<<endl;
    cout<<"Positive sum = "<<sumPos<<endl;
    cout<<"Negative sum = "<<sumNeg<<endl;
    cout<<"Even sum =     "<<sumEven<<endl;
    cout<<"Odd sum =      "<<sumOdd<<endl;
    
    return 0;
}

