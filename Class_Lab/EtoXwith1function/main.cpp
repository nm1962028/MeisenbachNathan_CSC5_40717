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
//Execution begins here!
int main(int argc, char** argv) 
{
    //Declare variables
    float approxEx=1,exactEx,x;
    //Prompt the user for the power of e^x
    cout<<"What x in e^x would you like to use?\n";
    cin>>x;
    //Calculate e^x
    for(int n=1;n<=13;n++)
        {
        approxEx+=(pow(x,n)/nFactrl(n));
        }
    //Calculate the exact e^x
    exactEx=exp(x);
    //compare the results
    cout<<"approximate e^x = "<<approxEx<<endl;
    cout<<"Exact e^x = "<<exactEx<<endl;
    //exit stage right
    return 0;
}

int nFactrl(int n){
    //Declare the variable
    //Note function only works for values 0-13
    int factorial=1;
    if(n==0||n==1)return factorial;
    else if(n<=13){
        for(int i=1;i<=n;i++){
            factorial*=i;
        }
        return factorial;
    }else{
        return -1;
}    