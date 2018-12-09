/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 25, 2018 4:59PM
 * Purpose:  lottery winner modification 
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
  //declare array and initialize to values given
    int Num_playd[10] = {12126, 55544, 13135, 02149, 75988,
                                     69695, 07734, 80039, 24724, 153426};

//state the winning numbers in hand
    int Win_num;
    cout << "Please enter this weeks winning number:\n";
    cin >> Win_num;

 //initialize varible
    if (i_Find(Num_playd, 10, Win_num))
        cout << "You hit the jackpot!\n";
    else
        cout << "You don't have a winning ticket!\n";

    return 0;
}

bool i_Find(const int numbers[], int arraySize, int Win_num){
 
int first = 0, 
     last = arraySize-1, 
     middle;

    //cont. loop until first and last indexes are overlapped
    while(first <= last)
      {
        middle = (first + last) / 2;
            if(numbers[middle] == Win_num)
            {
             return true;
            }
                 else if(numbers[middle] > Win_num)
                {
                  last = middle - 1;
                }
                     else if(numbers[middle] < Win_num)
                     {
                      first = middle + 1;
                     }
    }
    return false;
}
