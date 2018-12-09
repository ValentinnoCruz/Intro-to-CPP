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

 double futureValue(double, double, int);   
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare Variables
   double presnt_Val,     //money currently
              mnthly_Rate;   // interest rate per month
   int mnth_Totl;               //number of months total
   char usr_input;

    //Initial Variables

   do {
   cout << "How much do you have saved up? ";
   cin >> presnt_Val;
   cout << "what is the monthly interest rate? ";
   cin >> mnthly_Rate;
   cout << "How many total of months? ";
   cin >> mnth_Totl;

   cout << setprecision(2) << fixed << showpoint;
   cout << "================" << endl;
   cout << "At  " << mnth_Totl << " months you'll have $" << 
   futureValue(presnt_Val, mnthly_Rate, mnth_Totl) << "." << endl;

   cout << "==================" << endl;
   cout << "Any more calculations? (Y/N)" << endl;
   cin >> usr_input;
   } while (usr_input == 'Y' || usr_input == 'y');

   return 0;
 }
 
    //Map/Process Inputs to Outputs
       
    //Display Outputs
    
    //Exit program!
//caluclates and return futureValue in $. formula F = P * (1 + i)^t
 double futureValue(double presnt_Val, double mnthly_Rate, int mnth_Totl) {
   return (presnt_Val * (pow(1 + (mnthly_Rate / 100), mnth_Totl)));
 }