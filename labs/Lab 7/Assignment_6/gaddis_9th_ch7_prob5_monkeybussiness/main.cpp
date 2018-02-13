/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 25, 2018 5:00 PM
 * Purpose:  Monkey Business
 */


//System Libraries
#include <iostream>
 #include <iomanip>
using namespace std; 

//User Libraries
 void userData();
 void avg_aday();
 void rank_num();
//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
 const int num_monks = 3;                                  // num of monkeys
 const int num_days = 5;                                         // num of days
 double FeedChart[num_monks][num_days];  // array with 3 rows and 5 column
 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    //display report

   userData();
   cout << setprecision(2) << fixed << showpoint;
   cout << "\tFood Report" << endl;
   cout << "======================================================" << endl;
   avg_aday();
   rank_num();
   return 0;
 }

 void userData() {
   for (int i = 0; i < num_monks; i++) {            
     for (int j = 0; j < num_days; j++) {               
       cout << "How many pounds of food did money " 
            << (i+1) << " eat on day " << (j+1) << ": " << endl;
       cin >> FeedChart[i][j];
       
// input Validation
       while (FeedChart[i][j] < 0 )
       {
         cout << "Please enter a positive number" << endl;
         cin >> FeedChart[i][j];
       }
     }
   }
 }

 void avg_aday() {
   for (int i = 0; i < num_days; i++) {           
   double total = 0;                                    
   double avg = 0;                                 
     for (int j = 0; j < num_monks; j++) {   
       total += FeedChart[j][i];      
     }
     avg = (total / 3);
     cout << "Day " << (i+1) << " avg food consumed from all monkeys: "
          << avg << " LB(s)" << endl;
   }
 }

 void rank_num() {
   double highest = FeedChart[0][0];
   double lowest = FeedChart[0][0];

   for (int i = 0; i < num_monks; i++) {
     int total = 0; 
     for (int j = 0; j < num_days; j++) {
       total += FeedChart[i][j];
       if (total > highest) {
         highest = FeedChart[i][j];
       }
       if (total < lowest) {
         lowest = FeedChart[i][j];
       }
     }
   }
   cout << "Highest: " << highest << " lb(s)" << endl;
   cout << "Lowest: " << lowest << " lb(s)" << endl;
 }
    
    //Initial Variables
   
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
