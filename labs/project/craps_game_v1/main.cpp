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
    unsigned short freq2=0,freq3=0,freq4=0,freq5=0,freq6=0,freq7=0,freq8=0,
                   freq9=0,freq10=0,freq11=0,freq12=0;
    unsigned int nToss = 36000;
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    min=100;
    max=0;
    for (int tossit=1;tossit<=nToss;tossit++){
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        switch (sum){
            case 2:freq2++;break;
            case 3:freq3++;break;
            case 4:freq4++;break;
            case 5:freq5++;break;
            case 6:freq6++;break;
            case 7:freq7++;break;
            case 8:freq8++;break;
            case 9:freq9++;break;
            case 10:freq10++;break;
            case 11:freq11++;break;
            case 12:freq12++;break;
            default:cout<<" Bad Throw!!"<<endl;
        }
    }
        cout<<"Freq 2 = "<<static_cast<int>(freq2)<<endl;
        cout<<"Freq 3 = "<<static_cast<int>(freq3)<<endl;
        cout<<"Freq 4 = "<<static_cast<int>(freq4)<<endl;
        cout<<"Freq 5 = "<<static_cast<int>(freq5)<<endl;
        cout<<"Freq 6 = "<<static_cast<int>(freq6)<<endl;
        cout<<"Freq 7 = "<<static_cast<int>(freq7)<<endl;
        cout<<"Freq 8 = "<<static_cast<int>(freq8)<<endl;
        cout<<"Freq 9 = "<<static_cast<int>(freq9)<<endl;
        cout<<"Freq 10 = "<<static_cast<int>(freq10)<<endl;
        cout<<"Freq 11 = "<<static_cast<int>(freq11)<<endl;
        cout<<"Freq 12 = "<<static_cast<int>(freq12)<<endl;

        
    //Output Located Here
    

    //Exit
    return 0;
}

