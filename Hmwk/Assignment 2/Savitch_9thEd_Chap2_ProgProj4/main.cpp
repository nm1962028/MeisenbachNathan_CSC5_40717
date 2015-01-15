/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 14, 2015, 4:44 PM
 * Purpose: To create a program that calculates loan information for a consumer
 */
//System Libraries
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;
//User Libraries
//GLobal Constants
const float CNVTOPC=.01;
//Function Prototypes
//Execution Begins here
int main(int argc, char** argv)
{
    //Declare Variables
    float amtCnNd;//Amount of cash consumer needs from loan
    float intRate;//Interest rate of the loan
    float durLoan;//Duration of the loan
    float fceValu;//Face value of the loan
    float mnPymnt;//Monthly payment
    char ans;
    do
    {
    //Prompt the user for input
    cout<<"I can assist you in process of acquiring a consumer loan\n";
    cout<<"Please input the amount you would like to receive\n";
    cin>>amtCnNd;
    cout<<"Thank you, Please input the percent interest of the loan\n";
    cin>>intRate;
    cout<<"Thank you again, please input the duration of the loan\n";
    cin>>durLoan;
    cout<<"Fabulous, I have all of the information I require\n";
    cout<<"Please Stand by..."<<endl;
    //Control the significant digits for currency purposes
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Calculate the face value and the monthly payment
    fceValu=(intRate*CNVTOPC*amtCnNd)*(durLoan/12)+amtCnNd;
    mnPymnt=fceValu/durLoan;
    cout<<"The face value of your loan will need to be: $"<<fceValu<<endl;
    cout<<"The monthly payments for your loan will be: $"<<mnPymnt<<endl;
        cout<<"Would you like to input another loan?\n";
        cout<<"Press y for yes, n for no,\n";
        cout<<"and then press return."<<endl;
        cin>>ans;
    }while(ans=='y'||ans=='Y');
    cout<<"Have a great day!"<<endl;
    return 0;
}

