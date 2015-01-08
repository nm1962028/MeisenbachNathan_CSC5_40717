/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 6, 2015, 4:13 PM
 * Purpose: Programming Project #1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//GLobal Constants

//Function Prototypes

//Execution Begins Here!
int main( ) 
{
    //Declare Variables
    int initial_integer, second_integer, sum_of_integers, product_of_integers;
    
    //prompt the user for input
    cout << "Hello, want to play a game?\n";
    cout << "Enter an initial integer, then press enter please.\n";
    
    cin >> initial_integer;
    
    cout << "Thank you, that was a nice integer.\n";
    cout << "Enter a second integer, then press enter please.\n";
    
    cin >> second_integer;

    //calculations
    sum_of_integers = initial_integer + second_integer;
    product_of_integers = initial_integer * second_integer;
    
    //Output the results
    cout << "OH! that one tickled!\n";
    cout << "Now stand back, and be prepared to be amazed!\n";
    cout << "The sum of your two integers is ";
    cout << sum_of_integers;
    cout << " and the product of your integers is ";
    cout << product_of_integers <<endl;
    
    //Exit Stage Right!
    cout << "Have a wonderful day!" <<endl;
            
    return 0;
}

