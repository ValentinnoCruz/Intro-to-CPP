/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 11, 2018, 12:05 PM
 * Purpose: Sum
 *          
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
 int Num, TotL = 0;
    //Initial Variables
      cout << "Enter a positve Number: " << endl; 
   cin >> Num;
    //Map/Process Inputs to Outputs
   
 //Only accept positive Number
   if (Num < 0) { 
     cout << "Please Input a positive number.";
     return 0;
   }
    //Display Outputs
    
   for (int i = 1; i <= Num; i++) {
     TotL += i;
     cout  << i << endl;
     }
    cout << "Total =  " << TotL << endl;
    //Exit program!
    return 0;
}
