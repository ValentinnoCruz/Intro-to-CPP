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
                      
    
    //output
    cout<< "The letter grade was an "<<letter_grade<<endl;
    
    
    //From savitch p.127
    switch (letter_grade){
        case 'A':
            cout<<"Excellent! "
                <<"You do not need to take"
                    <<" the final." <<endl;
            break;
        case 'B':
            cout<<"Very Good! "<<endl;
            break;
        case 'C':
            cout<<"Passing! "<<endl;
            break;
        case 'D':
        case 'F':
            cout<<"Not good.! "
                <<"Go Study."<<endl;
            break;
                 
        default:
            cout<<"That is not a possible grade"<<endl;
    }
    
    
    
    //Output Located Here
    

    //Exit
    return 0;
}

