/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 18, 2018, 12:27 PM
 * Purpose:  consumer Loan
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants  Physics/Math/Conversions/Array Dimension

//Function Prototypes

//Execution begins with main
int main(int argc, char** argv) {
    //Declare Variables
    float loanFV;//loan face value in $'s
    float loanAmt; // loan amount received in $'s
    float intRate; //interest rate /year
    float mnPymt; // monthly payment in $'s
    unsigned short nMonths; //number of months
    
    //input or initialize values here
    intRate=0.15f;//interest rate 15 percent
    nMonths=18;//18 month loan
    cout<<"Consumer loan";
    cout<<"Input Amount received in loan $'s"<<endl;
    cin>>loanAmt;
    
    //process/calculations here
    loanFV=loanAmt/(1-intRate*nMonths/12);
    mnPymt=loanFV/nMonths;
    
    //Initialize Variables
    
    //Map or process the Variables to their outputs
    
    //Display or return the output
    cout<<"$"<<loanAmt<<" @ "<<intRate*100<<" % \n";
    cout<<"for "<<nMonths<<" months = Face Value of $";
    cout<<loanFV;
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Monthly payment = $"<<mnPymt<<endl;        
    return 0;
}