/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 29, 2018, 11:42 AM
 * Purpose:  Roman numberal converter
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int num;
    
    cout<<"This is a Roman Numeral Converter"<<endl;
    cout<<"Please enter a number 1-10"<<endl;
    cin>>num;
    
    
    
    
    switch (num) {
        case 1: cout<<"The Roman Numeral is I "<<endl;
        break;
        
        case 2: cout<<"The Roman Numeral is II "<<endl;
        break;
        
        case 3: cout<<"The Roman Numeral is III "<<endl;
        break;
        
        case 4: cout<<"The Roman Numeral is IV "<<endl;
        break;
        
        case 5: cout<<"The Roman Numeral is V "<<endl;
        break;
        
        case 6: cout<<"The Roman Numeral is VI "<<endl;
        break;
        
        case 7: cout<<"The Roman Numeral is VII "<<endl;
        break;
        
        case 8: cout<<"The Roman Numeral is VIII "<<endl;
        break;
        
        case 9: cout<<"The Roman Numeral is IX "<<endl;
        break;
        
        case 10: cout<<"The Roman Numeral is X "<<endl;
        break;
        default: cout<<"Please enter a number 1-10!"<<endl;
    }
    //Input or initialize values Here
  
    //Process/Calculations Here
   
    
    //Output Located Here
    

    //Exit
    return 0;
}

