/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on november 11, 2018, 1:25 PM
 * Purpose:  kinetic energy
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

//Function Prototypes
int Kinet_Enrgy(int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare Variables
    int mass,    //the objects mass
         velocity;   // objects velocity in m/seconds
    //Initial Variables
     cout << "What is the objects mass in KG? : ";
   cin >> mass;
   cout << "What is the objects veloctiy?: ";
   cin >> velocity;
   cout << setprecision(2) << fixed;
   cout << Kinet_Enrgy(mass, velocity) << endl;
   return 0;
 }
    //Map/Process Inputs to Outputs
       
    //Display Outputs
    
    //Exit program!
 Kinet_Enrgy(int mass, int velocity) {
   return (0.5 * mass * pow(velocity, 2));
 }