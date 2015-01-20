/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 20, 2015, 11:33 AM
 * Purpose: To write a program that converts an Arabic numeral between 1000 and
 * 3000 to roman numerals. Per Savitch 9thEd Chapter 3 Programming Project 3
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
    //Declare Variables
    unsigned short number;
    //Prompt user for input
    cout<<"Input a number from 1000 to 3000.\n";
    cin>>number;
    //Determine the number of 1000's
    char thousands=(number-number%1000)/1000;
    //Output the thousands in roman numerals
    switch(thousands)
    {
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    //Determine the amount of hundreds 100's
    number-=thousands*1000;
    char hundreds=(number-number%100)/100;
        //Output the hundreds!
    switch(hundreds)
    {
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";break;
        case 2: cout<<"C";break;
        case 1: cout<<"C";break;
        default:;
    }
    //Determine the amount of tens 10's
    number-=hundreds*100;
    char tens=(number-number%10)/10;
    //Output the tens!
    switch(tens)
    {
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
        default:;
    }
    //Determine the amount of ones 10's
    number-=tens*10;
    char ones=number;
    //Output the tens!
    switch(ones)
    {
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
        default:;
    }
    return 0;
}

