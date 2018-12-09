/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 29,  2018, 11:59 AM
 * Purpose:  Magic Date
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
    float date,mnth,yr;
            
    //Input or initialize values Here
    cout<<"Please Enter the numerical value of the month"<<endl;
    cin>>mnth;
    if (mnth < 01 || mnth > 12){
        cout<<"Not a valid month"<<endl;
        exit(1);
    }
    cout<<"Please Enter the numerical value of the date"<<endl;
    cin>>date;
    if (date < 01 || date > 31){
        cout<<"Not a valid date"<<endl;
        exit(1); }
    
    cout<<"Please Enter the two digit numerical value of the year"<<endl;
    cin>>yr;
    if (yr < 00 || yr > 99){
        cout<<"Not a valid year"<<endl;
        exit(1); }
    
    
    
    //Process/Calculations Here
    if ((mnth * date) == yr){
        cout<<"Congrats! this is a Magic Date!"<<endl;
    }
    else {
        cout<<"This date is not magic"<<endl;
    }
    //Output Located Here
    
    //Exit
    return 0;
}

