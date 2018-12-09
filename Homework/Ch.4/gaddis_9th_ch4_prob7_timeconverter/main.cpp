/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 27, 2018, 11:22 AM
 * Purpose: Gaddis - p.221 #61 numeric score to letter grade  
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    float score;
    cout<<"please enter a score: ";
    cin>>score;
    
    //validate user input
    if(score < 0 || score > 100) { // || = OR 
        cout<<"Error score must be 0-100 (inclusive)"<<endl;
                exit(1);
    }
    
    //Determine what letter grade value
    
    char letter_grade;
    if(score >= 90.0)
        letter_grade = 'A';
    else if (score >= 80.0)
        letter_grade = 'B';
    else if (score >= 70.0)
        letter_grade = 'C';
    else if (score >= 60.0)
        letter_grade = 'D';
    else letter_grade = 'F'; 
                      
    //Process/Calculations Here
    
    
    
    //Output Located Here
    cout<< "The letter grade was an "<<letter_grade<<endl;

    //Exit
    return 0;
}

