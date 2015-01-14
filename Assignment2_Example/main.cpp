/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 14, 2015, 10:35 AM
 * Purpose: Assignment 2 turn in with menu
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
const float CNVLBGM=453.6;//Grams per pound
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
    //Assignment 2 Menu prompt
    cout<<"soln 1 is Savitch 8thEd Chap2 Prob 2"<<endl;
    cout<<"soln 2 is Savitch 8thEd Chap2 Prob 3"<<endl;
    cout<<"You get the idea"<<endl;
    cout<<"Input which soln you would like to see!"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice)
    {
        case 1:
        {
            cout<<"You have chosen soln 1"<<endl;
            //Declare Variables
            const float CONC=1e-3f;//sweetener concentration
            float wtCoke=3.5e2f;//weight of coke in grams
            float kMouse=5.0f;//Quantity of sweetener thats kills mouse in grams
            float wtMouse=3.5e1f;//Wt of mouse in grams
            float kPer, wtDsPer;
            int   nCans;
            //Input the Desired weight of a person
            cout<<"Input your desired weight in lbs"<<endl;
            cout<<"Format the input as a float"<<endl;
            cin>>wtDsPer;
            wtDsPer*=CNVLBGM;//Convert to grams
            //Calculations
            kPer=kMouse/wtMouse*wtDsPer;
            nCans=kPer/wtCoke/CONC;
            //Output the limit of what you can drink
            cout<<"Number of cans of diet coke ";
            cout<<"That will kill you = "<<nCans<<endl;
            break;
            
        }
        case 2:
        {
            break;
        }
    default: cout<<"Incorrect choice"<<endl;
    }
        //Exit Stage Right
    return 0;
}

