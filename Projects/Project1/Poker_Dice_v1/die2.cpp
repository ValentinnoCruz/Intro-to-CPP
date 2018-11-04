/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on October 29, 2018 11:14AM
 * Purpose:  Poker Dice
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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
     
    int Die1, Die2, Die3, Die4, Die5;
    int NumOnes = 0, NumTwos = 0, 
         NumThrees = 0, NumFours = 0, NumFives = 0, NumSix = 0;
    bool TwoOFakind = false;
    bool ThreeOFakind = false;
   
         cout << "Rol lthe Dice." << endl;
         cout << "FirstThrow: ";
                cin >> Die1;
         cout << "SecThrow: ";
                 cin >> Die2;
         cout << "ThirdThrow: ";
                 cin >> Die3;
         cout << "FourthThrow: ";
              cin >> Die4;
         cout << "FifthThrow: ";
                 cin >> Die5;
    
    //Initial Variables
    if  (Die1 > 6 || Die1 < 1 || Die2 > 6 || 
         Die2 < 1 || Die3 > 6 || Die3 < 1 || Die4 > 6 || Die4 < 1 || Die5 > 6 || Die5 < 1 )
{
   exit(1);
}
    if (Die1 > 6 || Die1 < 1 || Die2 > 6 || Die2 < 1 || Die3 > 6 || 
        Die3 < 1 || Die4 > 6 || Die4 < 1 || Die5 > 6 || Die5 < 1 )
{
   exit(1);
}

if (Die1 == 1)
{
    NumOnes += 1;
}
if (Die2 == 1)
{
    NumOnes += 1;
}
if (Die3 == 1)
{
    NumOnes += 1;
}
if (Die4 == 1)
{
    NumOnes += 1;
}
if (Die5 == 1)
{
    NumOnes += 1;
}
cout << "You Rolled " << NumOnes << " ones." << endl;

if (Die1 == 2)
{
    NumTwos += 1;
}
if (Die2 == 2)
{
    NumTwos += 1;
}
if (Die3 == 2)
{
    NumTwos += 1;
}
if (Die4 == 2)
{
    NumTwos += 1;
}
if (Die5 == 2)
{
    NumTwos += 1;
}
cout << "You Rolled" << NumTwos << " twos." << endl;

if (Die1 == 3)
{
    NumThrees += 1;
}
if (Die2 == 3)
{
    NumThrees += 1;
}
if (Die3 == 3)
{
    NumThrees += 1;
}
if (Die4 == 3)
{
    NumThrees += 1;
}
if (Die5 == 3)
{
    NumThrees += 1;
}
cout << "You Rolled " << NumThrees << " threes." << endl;

if (Die1 == 4)
{
    NumFours += 1;
}
if (Die2 == 4)
{
    NumFours += 1;
}
if (Die3 == 4)
{
    NumFours += 1;
}
if (Die4 == 4)
{
    NumFours += 1;
}
if (Die5 == 4)
{
    NumFours += 1;
}
cout << "You Rolled " << NumFours << " fours." << endl;

if (Die1 == 5)
{
    NumFives += 1;
}
if (Die2 == 5)
{
    NumFives += 1;
}
if (Die3 == 5)
{
    NumFives += 1;
}
if (Die4 == 5)
{
    NumFives += 1;
}
if (Die5 == 5)
{
    NumFives += 1;
}
cout << "You Rolled " << NumFives << " fives." << endl;

if (Die1 == 6)
{
    NumSix += 1;
}
if (Die2 == 6)
{
    NumSix += 1;
}
if (Die3 == 6)
{
    NumSix += 1;
}
if (Die4 == 6)
{
    NumSix += 1;
}
if (Die5 == 6)
{
    NumSix += 1;
}
cout << "You Rolled " << NumSix << " sixes." << endl << endl;
if (NumOnes == 2 || NumTwos == 2 || NumThrees == 2 || NumFours == 2 || NumFives == 2 || NumSix == 2)
{
    TwoOFakind = true;
}
if( (NumOnes == 2 || NumTwos == 2 || NumThrees == 2 || NumFours == 2 || NumFives == 2 || NumSix == 2)
    && (NumOnes == 2 || NumTwos == 2 || NumThrees == 2 || NumFours == 2 || NumFives == 2 || NumSix == 2)){
        cout<< "You Rolled two pair!!!"<<endl;
    }



if (NumOnes == 3 || NumTwos == 3 || NumThrees == 3 || NumFours == 3 || NumFives == 3 || NumSix == 3)
{
    cout << "You Rolled three of a kind!!!" << endl;
    ThreeOFakind = true;
}
else
{
    cout << "No three of a kind" << endl;
}

if (NumOnes == 4 || NumTwos == 4 || NumThrees == 4 || NumFours == 4 || NumFives == 4 || NumSix == 4)
{
    cout << "You Rolled four of a kind!!!" << endl;
}
else
{
    cout << "No four of a kind" << endl;
}

if (NumOnes == 5 || NumTwos == 5 || NumThrees == 5 || NumFours == 5 || NumFives == 5 || NumSix == 5)
{
    cout << "You Rolled five of a kind!!!" << endl;
}
else
{
    cout << "No five of a kind" << endl;
}

//
if (TwoOFakind == true && ThreeOFakind == true)
{
     cout << "You Rolled a full house!!!!" << endl;
}
else
{
    cout << "No full house" << endl;
}
//if (TwoOFakind == true && twoPair == true)
//{
  //   cout << "Yes Two pairs" << endl;
//}
//else
//{
    //cout << "No Two Pairs" << endl;
//}
//
if (Die1 == Die2 && Die2 == Die3 && Die3 == Die4 && Die4 == Die5)
{
    cout << "No straight" << endl;
}
else
{
    if (((Die1 >= 1 && Die1 < 6) && (Die2 >= 1 && Die2 < 6) && (Die3 >= 1 && Die3 < 6) && (Die4 >= 1 && Die4 < 6) 
            && (Die5 >= 1 && Die5 < 6)) && (Die1 != Die2 && Die2 != Die3 && Die3 != Die4 && Die4 != Die5))
    {
        cout << "You Rolled a Straight!!!!" << endl;
    }
    else if (((Die1 > 1 && Die1 <= 6) && (Die2 > 1 && Die2 <= 6) && (Die3 > 1 && Die3 <= 6) && (Die4 > 1 
      && Die4 <= 6) && (Die5 > 1 && Die5 <= 6)) && (Die1 != Die2 && Die2 != Die3 && Die3 != Die4 && Die4 != Die5))
    {
        cout << "You Rolled a Straight!!!!" << endl;
    }
    else
    {
        cout << "No straight" << endl;
    }
}
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
    return 0;
}