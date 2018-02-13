/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 17, 2018, 3:00 pM
 * Purpose:  Gaddis chap 3 question 6
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const double cupS = 1.5/48; //cup of sugar per cookie
    const double cupF = 2.75/48; //cup of sugar per cookie
    const double cupB = 1.00/48; //cup of sugar per cookie
    int cookE;                   //desired amount of cookies
    
    //Initialize Variables
   
   
    
    //Process/Map inputs to outputs
    cout<< setprecision (2)<<fixed; //set decimal place by 2
    cout<<"How many Cookies do you want to make?  "<<endl;
    cin>>cookE;


    //Output data 
    cout<<"You will need "<<cookE*cupS<<" cups of sugar."<<endl;
    cout<<"You will need "<<cookE*cupB<<" cups of butter."<<endl;
    cout<<"You will need "<<cookE*cupF<<" cups of flour."<<endl;
    cout<<"To make "<<cookE<<" cookies"<<endl;
    //Exit stage right!
    return 0;
}