/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 5, 2015, 9:15 PM
 * Purpose: Savitch 9thEd Chapter 1 Practice Program #2
 */

#include <iostream>
using namespace std;


int main( ) 
{
   int number_of_pods, peas_per_pod, total_peas;
    
   cout << "Hello." <<endl;
   cout << "Press return after entering a number.\n";
   cout << "Enter the number of pods:\n";
    
    cin >> number_of_pods;
    
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all pods.\n";
    cout << "Good-bye.\n";
    
    return 0;
}
