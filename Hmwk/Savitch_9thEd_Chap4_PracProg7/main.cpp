/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 21, 2015, 1140 AM
 * Purpose: Gravitational Attractive force
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
const float G=6.673e-8f;//units gravitational constant weak force cm^3gmsec^2
//Function Prototypes
 //f          //m1    m2   d
float atrForc(float,float,float);
//Execution begins here!
int main(int argc, char** argv) 
{
    //Declare variables, values found using google
    float mEarth=5.97219e24f;//mass of earth in kilograms
    float wtMark=188.0f;//weight of Professor Lehr in pounds
    float rEarth=6.371e3;//radius of earth in Kilometers
    //Conversions for consistent units
    mEarth*=1e3;//convert to grams -> 10e3g/kg
    float mMark=wtMark*453.59;//grams per pound
    rEarth*=(1e3f*1e2f);//10^3m/km*10^2cm/m
    //Calculate the attractive force in dynes
    float dynes=atrForc(mEarth,mMark,rEarth);
    float lbs=dynes/4.44822e5f;//Conversion from pound to dyne
    //Output the results
    cout<<"My weight in dynes = "<<dynes<<endl;
    cout<<"My weight in lbs = "<<lbs<<endl;
    //exit stage right
    return 0;
}
float atrForc(float m1,float m2,float d){
    return G*m1*m2/d/d;
}