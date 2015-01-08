/* 
 * File:   main.cpp
 * Author: Nahtan Meisenbach
 * Created on January 8, 2015, 8:37 AM
 * Purpose: To solve problem #5
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char C;
    //Prompt user for input
    cout<<"This program is vastly complicated"<<endl;
    cout<<"and intrinsically unsafe to the user."<<endl;
    cout<<"Run this program at your own risk!!!"<<endl;
    cout<<"Please enter a character, any character."<<endl;
    cin>>C;
    cout<<endl<<endl;
    
    //Output Results
    cout<<"   "<<C<<C<<C<<C<<C<<endl;
    cout<<" "<<C<<C<<"     "<<C<<C<<endl;
    cout<<C<<endl;
    cout<<C<<endl;
    cout<<C<<endl;
    cout<<C<<endl;
    cout<<C<<endl;
    cout<<" "<<C<<C<<"     "<<C<<C<<endl;
    cout<<"   "<<C<<C<<C<<C<<C<<endl;
    
    //Exit Stage right!
    return 0;
}

