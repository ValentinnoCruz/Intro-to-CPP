/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on november 11, 2018, 1:57 PM
 * Purpose: flipcoin
 *           
 */

//System Libraries
#include <iostream> 
 #include <cstdlib>
 #include<ctime>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
int Flip_coin();
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare Variables
    
    //Initial Variables
      int Tot_Toss; // how many times the coin will br flipped

  
// generate random number, only once or else numbers will be unevenly distributed. 
srand(time(NULL));  
   cout << "How many times do you want to flip the coin? ";
   cin >> Tot_Toss;
    
   for (int i = 0; i < Tot_Toss; i++){
         Flip_coin() == 1 ? cout << "head\n" : cout << "tails\n";
        }
   return 0;
 }

    //Map/Process Inputs to Outputs
       
    //Display Outputs
    
    //Exit program!
int Flip_coin() {
   const int MIN_VALUE = 1;
   const int MAX_VALUE = 2;
   return (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
 }