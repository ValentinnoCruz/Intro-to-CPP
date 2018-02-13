/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on September 27th, 2018, 10:02 AM
 * Purpose:  Independent If solution for Paycheck Problem
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate, //Pay rate in $'s/hr
          hrsWrkd, //Number of hours worked in a week
          grosPay; //Gross Pay in $'s
    const float ovrTime=40,//Point at which overtime begins
                tmHalf=1.5;//Time and 1/2 for overtime
            
    //Input or initialize values Here
    payRate=11;//Eleven $'s/hr
    hrsWrkd=50;//Hours worked = 50 
    
    //Process/Calculations Here
    if(hrsWrkd <= ovrTime) 
        grosPay = payRate*hrsWrkd;
    if(hrsWrkd  > ovrTime)
        grosPay = ovrTime*payRate 
          + (hrsWrkd-ovrTime)*payRate*tmHalf;
    
    //Output Located Here
    cout<<"Gross Pay = $"<<grosPay<<endl
        <<"for "<<hrsWrkd<<" hours worked and "
        <<"a Pay Rate = $"<<payRate<<"/hr"<<endl;

    //Exit
    return 0;
}