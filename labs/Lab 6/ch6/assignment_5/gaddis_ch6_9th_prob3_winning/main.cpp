/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on november 11, 2018, 3:33 PM
 * Purpose winning division
 *           
 */

//System Libraries
#include <iostream> 
 #include <string>
 #include<iomanip>
using namespace std;

//USEr Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
double getSales(string);
 void findHighest(double, double, double, double);
//Execution Begins Here!
int main(int argc, char** argv) {
    
    
    //Declare Variables
    
 double NE, SE, NW, SW;  // quarterly sale for each division

   NE = getSales("NorthEast");  // get quarterly sale for each team and return double
   SE = getSales("SouthEast");
   NW = getSales("NorthWest");
   SW = getSales("SouthWest");

   findHighest(NE, SE, NW, SW);

   return 0;
 }
    //Initial Variables
     
 double getSales(string) {
 double qtr_Sale;
   cout << setprecision(2) << fixed << showpoint;
   cout << "Input the Quarterly sales amount " << endl;
   cin >> qtr_Sale;

         while (qtr_Sale < 0)
            {
             cout << "Please enter a valid dollar amount, try again.";
             cin >> qtr_Sale;
             }
   return qtr_Sale;
 }

  

    //Map/Process Inputs to Outputs
       
    //Display Outputs
    
    //Exit program!

 void findHighest(double NE, double SE, double NW, double SW)
 {
         if (NE > SE && NE > NW && NE > SW)
                {
                  cout << "NorthEast has the highest sales for the quarter with $" << NE << "."; 
                } 
                  else if (SE > NE && SE > NW && SE > SW) 
                        {
                         cout << "SouthEast has the highest sales for the quarter with $" << SE << "."; 
                        } 
                            else if (NW > NE && NW > SE && NW > SW) 
                             {
                               cout << "NorthWest has the highest sales for the quarter with $" << NW << "."; 
                             } 
                                else {
                                        cout << "SouthWest has the highest sales for the quarter with $" << NE << "."; 
                                        }
 }