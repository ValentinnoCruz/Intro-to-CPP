/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 16, 2018, 11:32 AM
 * Purpose:  Gaddis chap 3 question 1
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
    int galnhold; //how many gallons a car can hold
    int milesFultnk; //how many miles drive on a full tank of gas
    double milePergaln; //avg miles per gallon
    
    //Initialize Variables
    cout<<"How many gallons can your car hold? "<<endl;
    cin>>galnhold;
    cout<<"How many Miles Can you drive on a full tank? "<<endl;
    cin>>milesFultnk;
    
    //Process/Map inputs to outputs
    milePergaln = (milesFultnk) / galnhold ;
    cout<<"You can drive "<<milePergaln<<" Miles per Gallon"<<endl;

    //Output data
    
    //Exit stage right!
    return 0;
}