/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on February 13, 2018, 12:51 PM
 * Purpose:  Falling Distance
 *           
 */

//System Libraries
#include <iostream> 
#include <iomanip>
 #include<cmath>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
  float fallingDistance(int);
  const float GRAVITY = 9.8;  // gravity
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare Variables

    //Initial Variables
     for (int i = 1; i <= 10; i++)
        {
          cout << setprecision(2) << fixed;
          cout << fallingDistance(i) << endl;
        }
   return 0;
 }
    //Map/Process Inputs to Outputs
   float fallingDistance(int time) 
        {
         return (0.5 * GRAVITY * pow(time, 2));
        }
    //Display Outputs
    
    //Exit program!
