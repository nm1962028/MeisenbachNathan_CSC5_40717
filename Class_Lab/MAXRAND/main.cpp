/* 
 * File:   main.cpp
 * Author: Nathan Meisenbach
 * Created on January 21, 2015, 8:19 AM
 * Purpose: TO make a program that shows the maximum random potential
 */
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
const unsigned int MAXRAND=pow(2,31);

int main(int argc, char** argv) 
{

    srand(static_cast<unsigned int>(time(0)));
    int loop=1000000000;
    int max=rand();
    
    for(int i=2;i<=loop;i++)
    {
        int r=rand();
        if (r>max)max=r;
    }
    cout<<"2^31 = "<<MAXRAND<<endl;
    cout<<"Maximum found = "<<max<<endl;
    
    return 0;
    
}

