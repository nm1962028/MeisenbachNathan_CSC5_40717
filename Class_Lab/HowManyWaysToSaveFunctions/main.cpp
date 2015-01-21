/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 21, 2015, 10:31 AM
 * Purpose: fun with Savings Functions
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes

//FV = Future Value
//PV = Present Value
//int = Interest Rate
//n = number of years compounding periods
//FV          PV   int  n
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save4(float,float,float);
//Execution begins here!
int main()
{
    //Declare and initialize values
    float prsVal=1000.0f;//$100
    float intRate=6;//interest rate per year
    int   nCompnd=72/intRate;//by the rule of 72 to double
    float fCompnd=nCompnd;
    //Convert interest to a fraction
    intRate=intRate/100;
    //output the inputs
    cout<<"Present Value = $"<<prsVal<<endl;
    cout<<"Interest Rate = "<<intRate*100<<"%"<<endl;
    cout<<"Number of compounding periods = "<<nCompnd<<" (years)"<<endl;
    //Output the future value
    cout<<"Our Savings =$"
            <<save1(prsVal,intRate,nCompnd)<<endl;
    cout<<"Our Savings =$"
            <<save2(prsVal,intRate,nCompnd)<<endl;
    cout<<"Our Savings =$"
            <<save3(prsVal,intRate,nCompnd)<<endl;
    cout<<"Our Savings =$"
            <<save4(prsVal,intRate,nCompnd)<<endl;
    cout<<"Our Savings =$"
            <<save4(prsVal,intRate,fCompnd)<<endl;
    //Exit stage right!
 
    return 0;
}

//Inputs
//p-> principal in dollars meaning present value
//i-> interest rate per year
//n-> number of compounding periods
//output
//savings->future value in dollars
float save1(float p,float i,int n){
    return p*pow(1+i,n);
}
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}
float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}
float save4(float p,float i,int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}
float save4(float p,float i,float n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}