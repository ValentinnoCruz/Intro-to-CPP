/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 23, 2018 5:44PM
 * Purpose:  Bigger than N
 */


//System Libraries
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std; 

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
void Bigr_thnN(int[], int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
   const int SIZE = 8;
   int n = 5;
   int arr[SIZE] = {1, 2, 3, 6, 7, 9, 2, 10};

   Bigr_thnN(arr, SIZE, n);

   return 0;
 }

 void Bigr_thnN(int arr[], int SIZE, int n) {
     for (int i = 0; i < SIZE; i++) {
     if (arr[i] > n) {
       cout << arr[i] << endl;
     }
   }
 }
    
    //Initial Variables
   
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
