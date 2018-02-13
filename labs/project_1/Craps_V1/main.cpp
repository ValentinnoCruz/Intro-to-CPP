/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 18th, 2018, 10:30 AM
 * Purpose:  Sum of 2 Randomly generated die
 */

//System Libraries Here
#include <iostream>  //Input/Output Library
#include <ctime>     //Time Library
#include <cstdlib>   //Random number Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random seed here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables and Initialize
    unsigned char die1,die2,sum,max,min;
    unsigned int nThrows=36000;
    

    //Process/Calculations Here
    min=100;
    max=0;
    for(int thrwit=1;thrwit<=nThrows;thrwit++){
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        if(sum>max)max=sum;
        if(sum<min)min=sum;
        cout<<static_cast<int>(sum)<<" = "
            <<static_cast<int>(die1)<<" + "
            <<static_cast<int>(die2)<<endl;
    }
    cout<<"The max sum = "<<static_cast<int>(max)<<endl;
    cout<<"The min sum = "<<static_cast<int>(min)<<endl;
    
    //Exit
    return 0;
}

