/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 13, 2018, 12:07 AM
 * Purpose:  Justification of Candy Bar Consumption
 */

//System Libraries Here
#include <iostream>
#include <iomanip>  //format library
#include <cstdlib> //random and set random seet
#include <ctime>  // time to set the seed

using namespace std;

//User Libraries Here


//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    unsigned char seX,          // Male or Female M or F
                  wt,          // Weight in pounds
                  ht,         // Height in inches
                  age;       // Age in YEARS
    unsigned short bmr,     // Basal Metabolic Rate
                   calBar; // Calories per bar
    float          nBars; // number of bars
    
    //Input or initialize values Here
    calBar=230;                 //Given calories per candy bar
    seX=(rand()%2>0?'M':'F');  // random male or female
    wt=100+rand()%11;         //number between 100-210 lbs [100-210]
    ht=60+rand()%17;         // height from 60-76 inches [60-76]
    age=18+rand()%51;       //ages between 18-68 years old [18-68]
    
    //Process/Calculations Here
    bmr = seX=='F'? //if true it will use top if false otherwise
        655 + 4.3*wt + 4.7*ht + 4.7*age:
        66 + 6.3*wt + 12.9*ht + 6.8*age;
    
    nBars=static_cast<float>(bmr)/calBar;
    
    //Output Located Here
    cout<<" Stats for Candy Bars"<<endl;
    cout<<" Sex = "<<seX<<endl;
    cout<<" Weight = "<<static_cast<int>(wt)<<" lbs"<<endl;
    cout<<" Height = "<<static_cast<int>(ht)<<" Inches"<<endl;
    cout<<" Age = "<<static_cast<int>(age)<<" Years"<<endl;
    cout<<" BMR = "<<bmr<<" Calories"<<endl;
    cout<<" # of Candy Bars to consume = "<<nBars<<endl;

    //Exit
    return 0;
}

