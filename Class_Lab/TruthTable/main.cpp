/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 13, 2015, 9:15 AM
 * Purpose: To Understand the truth
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare 2 Boolean Variables
    bool X,Y;
    //Output the  heading
    cout<<"X  Y  !X  !Y  X&&Y  X||Y  X^Y  (X^Y)^Y  (X^Y)^X ";
    cout<<"!(X||Y) !X&&!Y !X&&Y !X||!Y"<<endl;
    //Fill in the first Row
    X=true;Y=true;
    cout<<(X? 'T': 'F')<<"  ";
    cout<<(Y? 'T': 'F')<<"   ";
    cout<<(!X? 'T': 'F')<<"   ";
    cout<<(!Y? 'T': 'F')<<"    ";
    cout<<(X&&Y? 'T': 'F')<<"      ";
    cout<<(X||Y? 'T': 'F')<<"    ";
    cout<<(X^Y? 'T': 'F')<<"      ";
    cout<<((X^Y)^Y? 'T': 'F')<<"      ";
    cout<<((X^Y)^X? 'T': 'F')<<"        ";
    cout<<(!(X||Y)? 'T': 'F')<<"      ";
    cout<<(!(X&&!Y)? 'T': 'F')<<"      ";
    cout<<(!(X&&Y)? 'T': 'F')<<"    ";
    cout<<(!(X||!Y)? 'T': 'F')<<"    ";
    cout<<endl;
    //Fill in the Second Row
    X=true;Y=false;
    cout<<(X? 'T': 'F')<<"  ";
    cout<<(Y? 'T': 'F')<<"   ";
    cout<<(!X? 'T': 'F')<<"   ";
    cout<<(!Y? 'T': 'F')<<"    ";
    cout<<(X&&Y? 'T': 'F')<<"      ";
    cout<<(X||Y? 'T': 'F')<<"    ";
    cout<<(X^Y? 'T': 'F')<<"      ";
    cout<<((X^Y)^Y? 'T': 'F')<<"      ";
    cout<<((X^Y)^X? 'T': 'F')<<"        ";
    cout<<(!(X||Y)? 'T': 'F')<<"      ";
    cout<<(!(X&&!Y)? 'T': 'F')<<"      ";
    cout<<(!(X&&Y)? 'T': 'F')<<"    ";
    cout<<(!(X||!Y)? 'T': 'F')<<"    ";
    cout<<endl;
    X=false;Y=true;
    cout<<(X? 'T': 'F')<<"  ";
    cout<<(Y? 'T': 'F')<<"   ";
    cout<<(!X? 'T': 'F')<<"   ";
    cout<<(!Y? 'T': 'F')<<"    ";
    cout<<(X&&Y? 'T': 'F')<<"      ";
    cout<<(X||Y? 'T': 'F')<<"    ";
    cout<<(X^Y? 'T': 'F')<<"      ";
    cout<<((X^Y)^Y? 'T': 'F')<<"      ";
    cout<<((X^Y)^X? 'T': 'F')<<"        ";
    cout<<(!(X||Y)? 'T': 'F')<<"      ";
    cout<<(!(X&&!Y)? 'T': 'F')<<"      ";
    cout<<(!(X&&Y)? 'T': 'F')<<"    ";
    cout<<(!(X||!Y)? 'T': 'F')<<"    ";
    cout<<endl;
    X=false;Y=false;
    cout<<(X? 'T': 'F')<<"  ";
    cout<<(Y? 'T': 'F')<<"   ";
    cout<<(!X? 'T': 'F')<<"   ";
    cout<<(!Y? 'T': 'F')<<"    ";
    cout<<(X&&Y? 'T': 'F')<<"      ";
    cout<<(X||Y? 'T': 'F')<<"    ";
    cout<<(X^Y? 'T': 'F')<<"      ";
    cout<<((X^Y)^Y? 'T': 'F')<<"      ";
    cout<<((X^Y)^X? 'T': 'F')<<"        ";
    cout<<(!(X||Y)? 'T': 'F')<<"      ";
    cout<<(!(X&&!Y)? 'T': 'F')<<"      ";
    cout<<(!(X&&Y)? 'T': 'F')<<"    ";
    cout<<(!(X||!Y)? 'T': 'F')<<"    ";
    cout<<endl<<endl<<endl;
    
    //Swap using temp variable
    int A,B,temp;
    A=2,B=3,temp=1;
    cout<<"If A=2 and B=3 then:"<<endl;
    cout<<temp<<" = "<<A<<endl;
    cout<<A<<" = "<<B<<endl;
    cout<<B<<" = "<<temp<<endl;
    
    int a,b;
    a=2,b=3;
   
    //Exit Stage Right!
    return 0;
}

