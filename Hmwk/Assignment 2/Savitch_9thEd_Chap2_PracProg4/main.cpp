/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 14, 2015, 12:25 PM
 * Purpose: to write a program that plays the game mad lib
 */
//System libraries
#include <iostream>
#include <string>
using namespace std;
//User Libraries
//GLobal Constants
//Function prototypes
//Execution begins here!
int main()
{
    //Declare Variables
    string f_l_nm_ins, your_name, a_food, adjective, color, animal;
    int number;
    
    cout<<"Hello, welcome to the wonderful world of mad libs\n";
    cout<<"The game where I win, and you lose.\n";
    cout<<"Please enter the first or last name of your professor\n";
    cin>>f_l_nm_ins;
    cout<<"I knew you would input such a response, I know many things\n";
    cout<<"Please input your name\n";
    cin>>your_name;
    cout<<"Thank you for providing me with your personal information\n";
    cout<<"Please input a type of food\n";
    cin>>a_food;
    cout<<"Please enter a number between 100 and 120\n";
    cin>>number;
    cout<<"Please insert an adjective. Dictionary.com can help with this.\n";
    cin>>adjective;
    cout<<"Please tell me your favorite color!\n";
    cin>>color;
    cout<<"what about your favorite animal, will you tell me that?\n";
    cin>>animal;
    cout<<endl;
    cout<<"Ok, watch and be amuzed!\n";
    cout<<"Processing...\n";
    cout<<"Processing...\n";
    cout<<endl;
    cout<<"Dear instructor "<<f_l_nm_ins<<",\n";
    cout<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time.\n";
    cout<<"First, I ate a rotten "<<a_food<<", which made me turn \n";
    cout<<color<<" and extremely ill. I came down with a fever of \n";
    cout<<number<<" . Next, my "<<adjective<<" pet "<<animal<<endl;
    cout<<"must have smelled the remains of the "<<a_food<<" on my \n";
    cout<<"homework, because he ate it. I am currently rewriting my homework \n";
    cout<<"and hope you will accept it late.\n";
    cout<<endl;
    cout<<endl;
    cout<<"Sincerely,\n";
    cout<<your_name<<endl;
    
    
    
            
    return 0;
}

