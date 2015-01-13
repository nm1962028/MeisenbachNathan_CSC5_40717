/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 13, 2015, 10:16 AM
 * Purpose:bitcoin Conversion
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float CMTNONS=3.527392e4;//Conversion from Metric tons to ounces
//Function Prototypes

//Execution Begins here!

int main(int argc, char** argv) 
{
    //Declare Variables
    float wtPckOz;//Weight of cereal contents in ounces
    float wtPckTn;//Weight of cereal contents in Metric Tons
    float nPckTn;//Number of cereal boxes in a metric ton
    //Prompt user for cereal weight
    cout<<"Please input the ounces of cereal as labeled"<<endl;
    cout<<"on the box to be converted to metric tons."<<endl;
    cout<<"Format in DDD.DDD: (Ounces)"<<endl;
    //Calculate from ounces to metric tons
    cin>>wtPckOz;
    wtPckTn=wtPckOz/CMTNONS;
    nPckTn=1/wtPckTn;
    //Output the results
    cout<<"weight of cereal box is: ";
    cout<<wtPckTn<<" Metric Tons"<<endl;
    cout<<nPckTn<<" Number of cereal boxes in a metric ton"<<endl;
    //Ask if user would like to repeat the calculation:
    cout<<"Would you like to play again?"<<endl;
    cout<<"Or we could play the same one over again"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y')
        //Prompt user for cereal weight
        cout<<"Please input the ounces of cereal as labeled"<<endl;
        cout<<"on the box to be converted to metric tons."<<endl;
        cout<<"Format in DDD.DDD: (Ounces)"<<endl;
        //Calculate from ounces to metric tons
        cin>>wtPckOz;
        wtPckTn=wtPckOz/CMTNONS;
        nPckTn=1/wtPckTn;
        //Output the results
        cout<<"weight of cereal box is: ";
        cout<<wtPckTn<<" Metric Tons"<<endl;
        cout<<nPckTn<<" Number of cereal boxes in a metric ton"<<endl;
        
    return 0;
}

