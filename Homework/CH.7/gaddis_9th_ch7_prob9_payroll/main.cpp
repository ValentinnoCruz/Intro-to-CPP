/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on nov 24, 2018 5:14PM
 * Purpose:  Payroll
 */


//System Libraries
#include <iostream>
 #include <iomanip>
using namespace std; 

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
 long int empId[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489}; // array 4 employee ID
 int hours[7];  //array for number of hours worked/employee
 double payRate[7]; // hold each employee hr pay rate
 double wages[7];//hold each employee gross wages

   for (int i = 0; i < 7; i++) {
     cout << "Employee ID: " << empId[i] << endl;
     cout << "What was the number of hours worked? " ;
     cin >> hours[i];
     cout << "What is the employee hourly pay rate? ";
     cin >> payRate[i];

//input Validation
     while (hours[i] < 0 || payRate[i] < 15)
     {
       cout << "Please enter a positive number greater than 15.00 for payrate" << endl;
       cout << "What was the number of hours worked? " ;
       cin >> hours[i];
       cout << "What is the employee hourly pay rate? ";
       cin >> payRate[i];
      
 //figure out the total wages per employee
     }
     wages[i] = (hours[i] * payRate[i]);
     }

//display report
   cout << "----------Employee Gross Wage----------" << endl;
   cout << "=======================================" << endl;
   for (int i = 0 ; i < 7; i++)
     {
       cout << "Employee ID: " << empId[i] << endl;
       cout << setprecision(2) << fixed << showpoint;
       cout << "Total Wages: $" << wages[i] << endl;
     }

   return 0;
 }
    
    //Initial Variables
   
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
