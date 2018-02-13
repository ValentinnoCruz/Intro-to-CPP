/* 
 * File:   main.cpp
 * Author:Valentinno Cruz
 * Created on October 18, 2018, 10:27 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <ctime>       //time library
#include <cstdlib>     // random number functions library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //set random see here! (always after main)
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables and initialize here
    unsigned char die1, die2, sum, max, min;   //6 #'s is small enough 4 1 byte
    unsigned int nToss = 36000;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    min=100;
    max=0;
    for (int tossit=1;tossit<=nToss;tossit++){
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        if (sum>max)max=sum;
        if(sum<min)min=sum;
        cout<<static_cast<int> (sum)<<" = "
                <<static_cast<int> (die1)<<" + "
                <<static_cast<int> (die2)<<endl;
       
    }
    cout<<"The max Sum = "<<static_cast<int>(max)<<endl;
    cout<<"The min Sum = "<<static_cast<int>(min)<<endl;
    
    //Output Located Here
    

    //Exit
    return 0;
}

