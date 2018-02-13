/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 24th, 2018 2:19PM
 * Purpose:  Rainfall
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; 

//User Libraries
 void getData();                                     // user input rainfall 
 double Tot_Rain(double[], int);        //hold yr total rainfall
 double avgRainfall(double[], int);         // hold average monthly fall
 double lowestRainfall(double[], int);    //hold smallest rainfall
 double highestRainfall(double[], int);   // hold biggest rainfall
//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
 const int num_Mnths = 12;
 double Rainfall_Num[num_Mnths];     //hold value of number of rainfall
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    
// display output: total rain for a year, avg monthly rain fall, highest and lowest rainfall amount
   getData();
   cout << "====================================" << endl;
   cout << "The total amount of rainfall was: " 
        <<Tot_Rain(Rainfall_Num, num_Mnths) << endl;
   cout << "Monthly average rainfall was: " 
        << avgRainfall(Rainfall_Num, num_Mnths) << endl;
   cout << "The highest rainfall was: " 
        << highestRainfall(Rainfall_Num, num_Mnths) << endl;
   cout << "The lowest rainfall was: " 
        << lowestRainfall(Rainfall_Num, num_Mnths) << endl;

   return 0;
 }

 //Get user data for total rainfall per each month
 void getData() {
   for (int i = 0; i < num_Mnths; i++) {
     cout << "Input the total rainfall for month " << (i+1) << ": ";
     cin >> Rainfall_Num[i];

     while (Rainfall_Num[i] < 0) 
       {
         cout << "the number is invalid, please enter a positive number." << endl;
         cin >> Rainfall_Num[i]; 
        }
   }
 }

 //fidning the lowest amt of rainfall
 double lowestRainfall(double Rainfall_Num[], int num_Mnths) {
 double lowest = Rainfall_Num[0];

   for (int i = 0; i < num_Mnths; i++) 
       {
         if (Rainfall_Num[i] < lowest) 
                {
                 lowest = Rainfall_Num[i];
                 }
       }
   return lowest;
 }

 //find the highest amt of rainfall
 double highestRainfall(double Rainfall_Num[], int num_Mnths)
     {
      double highest = Rainfall_Num[0];
         for (int i = 0; i < num_Mnths; i++)
       {
            if (Rainfall_Num[i] > highest)
            {
            highest = Rainfall_Num[i];
           }
        }

   return highest;
 }

 //the average monthly fall
 double avgRainfall(double Rainfall_Num[], int num_Mnths)
 {
  double avg = (Tot_Rain(Rainfall_Num, num_Mnths)/ num_Mnths);
  return avg;
 }

 //find total rainfall for a year
 double Tot_Rain(double Rainfall_Num[], int num_Mnths) 
 {
   double yrly_rainFall = 0;
      for (int i = 0; i < num_Mnths; i++)
        {
          yrly_rainFall +=Rainfall_Num[i]; 
        }
   return yrly_rainFall;
 }
    //Initial Variables
   
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
