/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 17, 2018, 08:15 AM
 * Purpose:  Gaddis chap 3 question 4
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
    int rainFeb,rainMar,rainApr; //months with rain
    int totlRain; //total amount of rain that fell
    double avgRain; //average rain fall in given months
    
    //Initialize Variables
    cout<<"How many inches of rain fell in February? "<<endl;
    cin>>rainFeb;
    cout<<"How many inches of rain fell in March? "<<endl;
    cin>>rainMar;
    cout<<"How many inches of rain fell in April? "<<endl;
    cin>>rainApr;
    
    //Process/Map inputs to outputs
    totlRain = rainFeb+rainApr+rainMar;
    avgRain = static_cast<double>(totlRain) /3;
    cout<< setprecision (2)<<fixed;
    cout<<"The average rainfall for February, March & April is ";
    cout<<avgRain<<" inches."<<endl;

    //Output data
    
    //Exit stage right!
    return 0;
}