/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 7, 2015, 11:17 AM
 * Purpose: How easy computers can make mistakes
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv)
{
    //Declare Variables
    float a,b,c;
    //Prompt Users For Input
    cout << "Input two float values"<<endl;
    cin >> a >> b;
    //Sum the Values
    c=a+b;
    //Output results
    cout << c << " = " << a << " + " << b <<endl;
    //Exit Stage Right
    return 0;
}

