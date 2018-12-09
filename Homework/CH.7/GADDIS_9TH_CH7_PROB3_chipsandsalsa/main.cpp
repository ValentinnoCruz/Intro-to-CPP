/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 24, 2018 11:53PM
 * Purpose:  Salsa
 */


//System Libraries
#include <iostream>
 #include <iomanip>
 #include <string>
using namespace std; 

//User Libraries
void getData();
 int Tot_sale();
 string big_seller();
 string low_seller(); 

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const int Num_ofsals = 5;
 string sals_Name[Num_ofsals] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
 int jars_sld[Num_ofsals];
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
   
 getData();

// display data
 cout << "\n\tSales Report" << endl;
 cout << "=============================" << endl;
     for (int i = 0; i < Num_ofsals; i++) 
         {
          cout << sals_Name[i]<< ": " << jars_sld[i] << endl;
         }
 cout << "Total Sale: " << Tot_sale() << endl << endl;
 cout << "Highest Selling Product: " << big_seller() << endl;
 cout << "Lowest Selling Product: " << low_seller() << endl;

   return 0;
 }

 void getData() 
 {
   for (int i = 0; i < Num_ofsals; i++)
        {
          cout << "how many jars were sold for " << sals_Name[i] << ": ";
          cin >> jars_sld[i];

     while (jars_sld[i] < 0)
          {
           cout << "Wrong number entered please try again.." << endl;
           cin >> jars_sld[i];
          }
       }
 }

 int Tot_sale() {
   int total = 0; 

   for (int i = 0; i < Num_ofsals; i++) {
     total += jars_sld[i];
   }
   return total;
 }

 string low_seller()
         {
           int lowest = jars_sld[0];
           string lowestName = sals_Name[0];
                 for (int i = 0; i < Num_ofsals; i++)
                 {
                      if (jars_sld[i] < lowest) 
                      {
                        lowest = jars_sld[i];
                        lowestName = sals_Name[i];
                      }
                 }
          return lowestName;
        }

 string big_seller() 
 {
    int highest = jars_sld[0];
   string highestName = sals_Name[0];
        for (int i = 0; i < Num_ofsals; i++)
            {
             if (jars_sld[i] > highest)
                {
                 highest = jars_sld[i];
                 highestName = sals_Name[i];
                }
              }
   return highestName; 
 }
    //Initial Variables
   
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
