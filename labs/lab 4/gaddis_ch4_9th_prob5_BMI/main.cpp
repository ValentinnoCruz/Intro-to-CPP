/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 29, 2018, 12:40 PM
 * Purpose:  BMI
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float wT, //in pounds
          hT, //in feet
          bmi; //persons body mass index
    
            
    //Input or initialize values Here
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Please enter your weight in pounds"<<endl;
    cin>>wT;
    cout<<"Please enter your height in inches"<<endl;
    cin>>hT;
    
    bmi = (wT * (703 / (hT*hT)));
    
    cout<<"Your BMI is "<<bmi<<endl; 
    
    if (bmi < 18.5){
        cout<<"You're underweight according to your BMI"<<endl;
    }
    else if ( bmi >25){
        cout<<"You're overweight according to your BMI"<<endl;
        }
    else {
        cout<<"Your BMI is normal"<<endl;
    }
       
     
    
    //Process/Calculations Here
   
    
    //Output Located Here
   
    //Exit
    return 0;
}

