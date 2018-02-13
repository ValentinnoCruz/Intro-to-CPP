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
    unsigned int freq2=0,freq3=0,freq4=0,freq5=0,freq6=0,
            freq7=0,freq8=0,freq9=0,freq10=0,freq11=0,freq12=0;
    unsigned int nThrows=3600000000;
    

    //Process/Calculations Here

    for(int thrwit=1;thrwit<=nThrows;thrwit++){
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        switch(sum){
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
            default:cout<<"Bad Throw!!!"<<endl;
        }
    }
    cout<<"Freq 2 = "<<freq2<<endl;
    cout<<"Freq 3 = "<<freq3<<endl;
    cout<<"Freq 4 = "<<freq4<<endl;
    cout<<"Freq 5 = "<<freq5<<endl;
    cout<<"Freq 6 = "<<freq6<<endl;
    cout<<"Freq 7 = "<<freq7<<endl;
    cout<<"Freq 8 = "<<freq8<<endl;
    cout<<"Freq 9 = "<<freq9<<endl;
    cout<<"Freq 10 = "<<freq10<<endl;
    cout<<"Freq 11 = "<<freq11<<endl;
    cout<<"Freq 12 = "<<freq12<<endl;
    
    //Exit
    return 0;
}