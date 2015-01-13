/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 13, 2015, 10:16 AM
 * Purpose:bitcoin Conversion
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//GLobal COnstants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) 
{
    //Declare Variables and Initialize
    float bcToDlr=232.8;//Jan13th, 2015 10:17am
    float erToDlr=0.849381;//Jan13th, 2015 10:20am
    float ynToDlr=118.03;//Jan13th, 2015 10:21am
    float bitcoin,dollars,euros,yen;
    
    //Input the number of bitcoin then convert
    
    cout<<"Input the number of bitcoin "<<endl;
    cout<<"You wish to purchase."<<endl;
    cin>>bitcoin;
    //convert to all the currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //Output the results
    cout<<bitcoin<<" bitcoin = "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" bitcoin = "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" bitcoin = "<<yen<<"(yen)"<<endl<<endl;
    cout<<"As of Jan 13, 2015 at apprx 10:30am"<<endl;
    //Exit Stage Right!
    return 0;
}

