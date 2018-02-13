/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 13, 2016, 11:27 AM
 * Purpose:  Math Tutor
 */

//System Libraries Here
#include <iostream>
#include <iomanip> //format library
#include <cstdlib> //random and set random seet
#include <ctime> // time to set the seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set te random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    unsigned short op1, //operand 1
                   op2, //operand 2
                   result, //op1+op2
                   stuAns; //student answer 
    
    //Input or initialize values Here
    op1=100+rand()%900; //3 digit number
    op2=10+rand()%990; //2 or 3 digit number
    
    //Process/Calculations Here
    
    // display the output
    cout<<setw(6)<<op1<<endl;
    cout<<" + "<<setw(3)<<op2<<endl;
    cout<<"------"<<endl;
    cout<<setw(6)<<result<<endl;        
    //Output Located Here
    

    //Exit
    return 0;
}

