/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 30 , 2018, 12:40 PM
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
    int mass, // mass of the object
          wT; //weight of the object in pounds
        
    
            
    //Input or initialize values Here
    cout<<"Please enter the mass of the object"<<endl;
    cin>>mass;
    
   
     
    
    //Process/Calculations Here
     wT = mass * 9.8; //formula for weight
    
    //Output Located Here
    cout<<"The weight in newtons is: "<<wT<<endl;
   
    if (wT < 10){
        cout<<"The Object is too light"<<endl;
    }
    if ( wT >1000){
        cout<<"The object is too heavy"<<endl;
        }
   
    //Exit
    return 0;
}

