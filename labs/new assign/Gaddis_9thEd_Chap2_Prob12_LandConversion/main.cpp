/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 18th, 2018, 11:25 AM
 * Purpose:  Movie Tickets
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const double adltTix = 10.00; // Price of an adult ticket
const double childTix = 6.00; // price of childrens ticket

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE =26; 
    char cMovie[SIZE];
    
    
    
    //Input or initialize values Here
    cout<<"This program Calculated the take"<<endl;
    cout<<"a theater derives for showing a movie"<<endl;
    cout<<"Input the name of the movie"<<endl;
    cin.getline(cMovie,SIZE);
    
    //Process/Calculations Here
   
    //Output Located Here
    cout<<cMovie<<endl;

    //Exit
    return 0;
}
