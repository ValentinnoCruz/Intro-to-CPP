/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 29, 2018, 11:28 AM
 * Purpose:  Which number is greater
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
    int num1, num2;
            
    //Input or initialize values Here
    cout<<"Enter the first number" <<endl;
    cin>>num1;
    cout<<"Now enter the second number"<<endl;
    cin>>num2;
    
    //Process/Calculations Here
    if (num1 > num2){ 
       cout<<num1<<" is greater than " << num2<<endl;
    }
    else {
       cout<<num2<<" is greater than "<<num1<<endl;
    }
    //Output Located Here
   
    //Exit
    return 0;
}

