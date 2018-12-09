/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on november 11, 2018, 4:50 PM
 * Purpose: present value
 *           
 */

//System Libraries
 #include <iostream>
 #include <iomanip>
 #include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
float presentValue(float, float, int); 
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare Variables
    float futr_Val,    // how much you want in the future
           annul_Rt;    // annual interest rate in %
   int num_Yrs;     //  how many years will the money sit
   char usr_input;

   do 
   { 
   cout << "How much money do you want to gain from interest? ";
   cin >> futr_Val;
   cout << "what is the yearly interest rate? ";
   cin >> annul_Rt;
   cout << "how many years will you allow the money to sit in the bank? ";
   cin >> num_Yrs;

   cout << setprecision(2) << fixed << showpoint;
   cout << "You  need to deposit $"
        << presentValue(futr_Val, annul_Rt, num_Yrs)
        << " now.\n";

   cout << "any more calculations? (Y/N)";
   cin >> usr_input;
   } while (usr_input == 'Y' || usr_input == 'y');
  
   return 0;
 }
    //Initial Variables

    //Map/Process Inputs to Outputs
       
    //Display Outputs
    
    //Exit program!
/* calculate how much money would need to be deposit in order to satisfy 
the given inputs of interest,  years in the bank, and money wanted via interest*/
 float presentValue(float futr_Val, float annul_Rt, int num_Yrs) {
 return (futr_Val / pow((1 + (annul_Rt / 100)), num_Yrs));
 }