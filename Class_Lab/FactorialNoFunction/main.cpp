/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 21, 2015, 08:20 AM
 * Purpose: Factorial
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) 
{
    //Declare variables
    int nFactrl=1,n;
    //prompt user to input the factorial
    cout<<"What N would you like to use to\n";
    cout<<"calculate N!\n";
    cin>>n;
    //Do the calculation
    for(int i=1;i<=n;i++)
    {
        nFactrl*=i;
    }
    //output the result
    cout<<n<<"!= "<<nFactrl<<endl;
    //exit stage right
    return 0;
}

