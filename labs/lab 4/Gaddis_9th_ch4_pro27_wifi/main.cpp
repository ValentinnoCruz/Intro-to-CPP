/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on October 02, 2018, 11:14 AM
 * Purpose: Gaddis 9th Ch. 4 prob 27
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    cout<<"Wi-Fi troubleshooting program"
            <<"============================="<<endl;
    
    cout<<"Reboot the computer and try to connect."<<endl;
    
    
    string YesNo;
    cout<<"Did that fix the problem?";
    cin>>YesNo;
    
    
    // versus lowercase?
    if ( YesNo == "no" || YesNo == "NO") {
                cout<<"Reboot the router and try to connect." <<endl;
    
                cout<<"Did that fix the problem?";
                cin>>YesNo;
    
        if ( YesNo == "no" || YesNo == "NO") {
                    cout<<"Make sure the cables between" 
                    <<"the router and modem are plugged in" 
                    << " firmly"<<endl;
    
                     cout<<"Did that fix the problem?";
                        cin>>YesNo;
    
            if ( YesNo == "no" || YesNo == "NO") {
                 cout<<"Move the router to a new "
                  << "location and try to connect." <<endl;
    
                 cout<<"Did that fix the problem?";
                 cin>>YesNo;
    
                 if ( YesNo == "no" || YesNo== "NO") {
                     cout<<"Get a new router." 
                      <<endl;
        
                }
            }
        }
    }   
        
    //validate user input
  
    
    
    //Determine what letter grade value
    
    
    
    //output
    
    
    
    //From savitch p.127
    
    
    
    
    
    //Output Located Here
    

    //Exit
    return 0;
}

