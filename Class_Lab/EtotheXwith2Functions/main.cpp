/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 21, 2015, 09:05 AM
 * Purpose: Factorial E to the X
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
int nFactrl(int);
float approxEx(float x);
//Execution begins here!
int main(int argc, char** argv) 
{
    //Declare variables
    float x;
    //Prompt the user for the power of e^x
    cout<<"What x in e^x would you like to use?\n";
    cin>>x;
    //compare the results
    cout<<"approximate e^x = "<<approxEx<<endl;
    cout<<"Exact e^x = "<<exp(x)<<endl;
    //exit stage right
    return 0;
}
float approxEx(float x){
    //Declare Variable
    float etox=1;
    //Calculate e^x
    for(int n=1;n<=13;n++)
        {
        etox+=(pow(x,n)/nFactrl(n));
        }
    return etox;
}

int nFactrl(int n)
{
    //Declare the variable
    //Note function only works for values 0-13
    int factorial=1;
    if(n==0||n==1)return factorial;
    else if(n<=13)
    {
        for(int i=1;i<=n;i++)
        {
            factorial*=i;
        }
        return factorial;
    }else
    {
        return -1;
    }
}    