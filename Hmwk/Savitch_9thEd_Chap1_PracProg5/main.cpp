/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 5, 2015, 9:15 PM
 * Purpose: Savitch 9thEd Chapter 1 Practice Program #5
 */

//System Library
#include <iostream>
using namespace std;

//User Library

//Execution begins here
int main( ) 
{
    //Declare Variables
   int width_of_fence, height_of_fence, total_length;
    
   //prompt user for input
   cout << "Hello." <<endl;
   cout << "Press return after entering a number.\n";
   cout << "Enter the width of fence required in feet:\n";
    cin >> width_of_fence;//in (ft))
    cout << "Enter the height of fence required in feet:\n";
    cin >> height_of_fence;// in (ft))
    
    //Calculations
    total_length = width_of_fence * height_of_fence;
    
    //Output Results
    cout << "If you need to enclose an area with ";
    cout << width_of_fence;
    cout << " foot width of fence\n";
    cout << "and ";
    cout << height_of_fence;
    cout << " foot height of fence, then\n";
    cout << "you should acquire ";
    cout << total_length;
    cout << " total length of fence.\n";
    cout << "Good-bye.\n";
    
    //Exit Stage Right
    return 0;
}