/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 27, 2018, 9:51 AM
 * Purpose:  Independent IF Solution for paycheck problem
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
    float payRate, //pay rate in $'s per hour
          hrsWrkd, //number of hours worked in a week
          grosPay; //gross pay in $'s
           
    const float ovrTime = 40, //point at which OT begins
                tmHalf = 1.5; //time and a half for overtime
            
    //Input or initialize values Here
    payRate = 11; //11 $'s an hour
    hrsWrkd=50; //hours worked = 50
    
    //Process/Calculations Here
    if (hrsWrkd<=ovrTime)grosPay=payRate*hrsWrkd;
    if (hrsWrkd>ovrTime)grosPay=ovrTime*payRate
            + (hrsWrkd-ovrTime)*payRate*tmHalf;
    
    //Output Located Here
    cout<<"Gross pay is = $"<<grosPay<<
            " for "<<hrsWrkd<<" hours worked "<<endl;
            cout<<"at a payrate of $"<<payRate<<"/hr"<<endl;

    //Exit
    return 0;
}

