/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 17, 2018, 10:35 AM
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
    int tst1, tst2, tst3, tst4, tst5; //test scores
    int totlTst; //total test scores combined
    double avgTstscore; //average test scores
    
    //Initialize Variables
    cout<<"What was the result of Test 1? "<<endl;
    cin>>tst1;
    cout<<"What was the result of Test 2? "<<endl;
    cin>>tst2;
    cout<<"What was the result of Test 3? "<<endl;
    cin>>tst3;
    cout<<"What was the result of Test 4? "<<endl;
    cin>>tst4;
    cout<<"What was the result of Test 5? "<<endl;
    cin>>tst5;
    
    //Process/Map inputs to outputs
    totlTst = tst1+tst2+tst3+tst4+tst5;
    avgTstscore = static_cast<double> (totlTst) / 5 ;
    cout<< setprecision (2)<<fixed; //set decimal place by 2
    cout<<"The Average test score was "<<avgTstscore<<"%"<<endl;

    //Output data
    
    //Exit stage right!
    return 0;
}