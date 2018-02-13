/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 23, 2018 11:14AM
 * Purpose:  Arrays
 */


//System Libraries
#include <iostream>
using namespace std; 

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
   const int SIZE = 5;
   int num[SIZE];

    //Initial Variables
      for (int i = 0; i < SIZE; i++) 
        {
         cout << "enter the value ";
         cin >> num[i];
         }

   int biggest = num[0];
   int smallest = num[0];

   for (int i = 0; i < SIZE; i++) {
     if (num[i] > biggest) {
       biggest = num[i];
     }
     if (num[i] < smallest) {
       smallest = num[i];
     }

   }

    //Map/Process Inputs to Outputs

    //Display Outputs
   cout << "Largest: " << biggest << endl;
   cout << "Smallest: " << smallest << endl;
    //Exit program!
    return 0;
}