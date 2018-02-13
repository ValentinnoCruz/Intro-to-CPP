/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 9th, 2018, 10:00 PM
 * Purpose:  Paint Calculation
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>    //ceiling function
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
  int number;
    cout<< "Enter a number: ";
    cin>> number;
    while (number< 2 || number% 2 == 0)
    {
        cout << "Invalid response. Enter an odd number greater than or equal to 2:";
        cin>> number;
    }
    for( int lineNum=0; lineNum<number; lineNum++)
        {
            cout <<"*";
            for (int i=0; i<number-lineNum; i++)
                cout<<" ";
            cout<<endl;
            for (int x= 0; x<= lineNum; x++)
                cout<< " ";
        }
    cout<< endl;
  
    return 0;
}