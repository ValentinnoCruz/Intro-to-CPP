/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 11, 2018, 11:05 AM
 * Purpose: accidents 
 *           
 */

//System Libraries
#include <iostream> 
 #include <string> 
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
int getAccident(string);
void findLow(int, int, int, int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
//Declare Variables
int north, south, east, west, central;

   north = getAccident("north");
   south = getAccident("south");
   east = getAccident("east");
   west = getAccident("west");
   central = getAccident("central");

   findLow(north, south, east, west, central);

   return 0;
 }
    //Initial Variables
   int getAccident(string name) {
   int numAccidents;

   cout << "What was the number of accidents in the " << name << ": ";
   cin >> numAccidents;
  
   while (numAccidents < 0) 
        {
          cout << "Please enter number greter than 0.";
          cin >> numAccidents;
        }
   return numAccidents;
 }
   

    //Map/Process Inputs to Outputs
       
    //Display Outputs
    
    //Exit program!
/* set lowest to first value. check each value if it is lower than previous. if it is set that to lowest if not do nothing. */
 void findLow(int north, int south, int east, int west, int central) 
      {
         int lowest = north;   
          string region = "North";  //store name
  
   if (south < lowest) 
     {
       lowest = south;
       region = "South";
     }
   if (east < lowest) 
     {
       lowest = east;
       region = "East";
     }
   if (west < lowest) 
     {
       lowest = west;
       region = "West";
     }
   if (central < lowest)
     {
       lowest = central;
       region = "Central";
     }
  
   cout << region << " has the lowest total accidents with " << lowest << ".";
 }