/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 10, 2018, 1:05 PM
 * Purpose:stock profit
 *           
 */

//System Libraries
 #include <iostream>
 #include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
float profit(int, float, float, float, float);
 void userData(int&, float&, float&, float&, float&);
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare Variables
  int NS;                 //number of shares
  float PP,         //purchse price per share
          PC,            //purchase commision paid
          SP,           //sale price per share 
          SC;         //sale commision paid

   userData(NS, PP, PC, SP, SC);

   cout << "\nTotal Profit from the share stock" << endl;
   cout << "----------------------------" << endl;
   cout << setprecision(2) << fixed << showpoint;
   cout << "$" << profit(NS, PP, PC, SP, SC);

   return 0;
 }

  // profit = (( NS  *  SP ) -  SC ) - (( NS  *  PP ) +  PC ) 
 float profit(int NS, float PP, float PC,
                      float SP, float SC) {
 float totalPricePaid = (NS * SP);
 float totalSalePrice = (NS * PP);

   return ((totalPricePaid - SC) - (totalSalePrice + PC));
 }

 void userData(int& NS, float& PP, float& PC,
                        float& SP, float& SC) {
   cout << "how many shares did you buy? ";
   cin >> NS;
   while (NS < 0)
        {
          cout << "Please enter a valid number, try again." << endl;
          cin >> NS;
        }

   cout << "how much did you pay per stock? ";
   cin >> PP;
   while (PP < 0) 
       {
         cout << "Please enter a valid number, try again" << endl;
        cin >> PP;
      }  

   cout << "what was the purchase commission paid ? ";
   cin >> PC;
   while (PC < 0) 
        {
          cout << "Please enter a valid number, try again" << endl;
          cin >> PC;
        }  

   cout << "what was the sale price? ";
   cin >> SP;
   while (SP < 0) 
        {
         cout << "Please enter a valid number, try again" << endl;
         cin >> SP;
        }  

   cout << "what was the sale commission paid?";
   cin >> SC;
   while (SC < 0)
        {
         cout << "Please enter a valid number, try again" << endl;
         cin >> SC;
        }  
 }
    //Initial Variables

    //Map/Process Inputs to Outputs
       
    //Display Outputs
    
    //Exit program!
