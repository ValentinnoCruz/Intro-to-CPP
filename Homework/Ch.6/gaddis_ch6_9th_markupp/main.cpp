/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 11, 2018, 12:05 PM
 * Purpose:  markup
 *           
 */

//System Libraries
#include <iostream> 
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void CalcRetail(float, float);
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare Variables
   double whleSalecst; 
   double MrkUP_per;
   cout << "Input the wholesale cost and the markup percent. "<<endl;
   cin >> whleSalecst >> MrkUP_per;

   while (whleSalecst < 0 || MrkUP_per < 0)
    {
     cout << "Cant input a negative number, please try again." << endl;
     cin >> whleSalecst >> MrkUP_per;
    }
   CalcRetail(whleSalecst, MrkUP_per);
   return 0;
 }

 void CalcRetail(float whleSalecst, float MrkUP_per) 
 {
   cout << setprecision(2) << fixed << showpoint << endl;
   cout << "If the items wholesale price is $"
        << whleSalecst 
        << " & the markup percent is " 
        << MrkUP_per 
        << "%, then the retail price is $" 
        << (whleSalecst * (MrkUP_per / 100) + whleSalecst) 
        << ".";
 }
    //Initial Variables
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
 