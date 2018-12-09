/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 10, 2018, 9:27PM
 * Purpose: Prime number list
 *           
 */

//System Libraries
 #include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
 bool isPrime(int);
 
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare Variables
   int n;
   cout << "Enter a number: ";
   cin >> n;

   isPrime(n) == false ? cout << "False" : cout << "Prime";

   return 0;
 } 

 bool isPrime(int n) {

   if (n == 1) return false;

   for (int i = 2; i < n; i++) 
        {
           if (n%i== 0) 
           {
             return false;
           } 
       }
   return true;
 }
    //Initial Variables

    //Map/Process Inputs to Outputs
       
    //Display Outputs
    
    //Exit program!
