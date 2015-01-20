/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 20, 2015, 10:28 AM
 * Purpose: To create a program that runs the game "23" as found in Savitch
 * 9thEd chapter 3 programming project #12
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) 
{
    //Declare Variables
    char thPick=23;//Total beginning amount of toothpicks & for each turn
    bool computer;//The computer opponent
    short nPckRmv;//Number of toothpicks removed by the human player
    //Playing the game
    do
    {
        //Designate the player
        computer=false;
        //Ask player how many toothpicks her or she wants to remove
        do
        {
        cout<<"There are "<<static_cast<int>(thPick)<<" left to remove.\n";
        cout<<"How many toothpicks do you want to remove?\n";
        cout<<"Choose 1,2 or 3\n";
        cin>>nPckRmv;
        }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
        //Remove the number of toothpicks
        thPick-=nPckRmv;
        //designate the computer
        computer=true;
        //Utilize logic from the book pgs178-179
        if(thPick>4)
        {
            nPckRmv=4-nPckRmv;
            thPick-=nPckRmv;
        }else if(thPick>=2&&thPick<=4)
        {
            thPick=1;
        }else if(thPick==1)
        {
            thPick=0;
            computer=false;
        }
    }while(thPick>1);
    //Output the winner and loser
    if(computer)
    {
        cout<<"Computer Wins and you lose!\n";
    }else
    {
        cout<<"Well done! You beat the computer!\n";
    }
    //Exit stage right!
    return 0;
}

