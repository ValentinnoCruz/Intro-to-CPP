/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 25, 2018 4:02PM
 * Purpose:  lOTTERY
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; 

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
bool i_Find(const int [], int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
   int Num_playd[10] = {12126, 55544, 13135, 02149, 75988,
                             69695, 07734, 80039, 24724, 153426};
   
 //state the winning numbers in hand
    int Win_num;
    cout << "Enter your winning numbers (5 digits):\n";
    cin >> Win_num;
    
//Initial Variables
    if ( i_Find(Num_playd, 10, Win_num))
        cout << "You hit the jackpot!!\n";
            else
                cout << "You don't have a winning ticket!\n";
       return 0;
}
    //Map/Process Inputs to Outputs

    //Display Outputs
    

bool i_Find(const int numbers[], int arraySize, int Win_num)
{
 for(int counter = 0; counter < arraySize; counter ++)  //loop through array
       {
         if(numbers[counter] == Win_num)  //check if number is valid
            return true;
        }
    return false;
}