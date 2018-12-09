/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on October 02, 2018, 11:39 AM
 * Purpose: Gaddis 9th Ch. 4 prob 25
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <ctype.h> 
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    char pckge; //name of the package the person has a, b, or c
    int Gbs; 
    
    cout<<"What package do you have? (A, B, or C) ?"<<endl;
    cin>>pckge;
    
    //validate input 
    if (toupper(pckge) != 'A' && toupper(pckge) !='B' &&
            toupper(pckge) !='C'){
        cout<<"You must enter A, B, or C for the package type"<<endl;
        return 1; //to return with an error (wrong val package)
    }
    
   // pckge = toupper(pckge); //also checks for lower case letters 
    
    cout<<"How many Gigabytes did you use ?"<<endl;
    cin>>Gbs;
    
    
    float totAmt;
    switch ( pckge) {
        case 'A': // can change with toupper above ^^^
        case 'a':    
            totAmt = 39.99;
            if (Gbs > 4) 
                totAmt += (Gbs - 4) *10;
                break;
            
            
        case 'B':
        case 'b':     
            totAmt = 59.99;
            if (Gbs > 8) 
                totAmt += (Gbs - 8) *5;
                break; 
                
        case 'C':
        case 'c':     
            totAmt = 69.99;
                break;         
                
                
    }
    
    
    //print out the total amount due
    cout<< " You owe $"<<totAmt<<endl;

   
    //validate user input
  
    
    
    //Determine what letter grade value
    
    
    
    //output
    
    
    
    //From savitch p.127
    
    
    
    
    
    //Output Located Here
    

    //Exit
    return 0;
}

