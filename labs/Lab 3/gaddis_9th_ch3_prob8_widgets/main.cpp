/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 19, 2018, 09:36 AM
 * Purpose:  Gaddis chapter 3 problem 8
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

const double POUNDS_PER_WIDGET = 12.5; //double pallet, total;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    double pallet, total;
  
  cout<<"What is the weight of the pallet itself in pounds?"<<endl;
  cin>>pallet;
  cout<<"What is the total weight of the pallet & widgets in pounds"<<endl;
  cin>>total;
  cout<<"Number of Widgets: "<<((total - pallet)/POUNDS_PER_WIDGET);
  
  return 0;
}
