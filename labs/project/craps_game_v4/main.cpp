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
    unsigned int win=0, lose=0;
    unsigned int win2=0,win3=0,win4=0,win5=0,win6=0,win7=0,win8=0,
                 win9=0,win10=0,win11=0,win12=0;
    unsigned int lose2=0,lose3=0,lose4=0,lose5=0,lose6=0,lose7=0,lose8=0,
                 lose9=0,lose10=0,lose11=0,lose12=0;
    unsigned int nGames = 36000;
    
    //Input or initialize values Here
    //craps rules
    // 7,11 = win: 2, 3, 12 = lose: 1,4,5,6,8,9, 10 must roll 2 times in a row
    //Process/Calculations Here
    
    //Play the number of games required
    for (int game=1;game<=nGames;game++){
        
    //declare the dice and sum the results
        unsigned char die1=rand()%6+1;
        unsigned char die2=rand()%6+1;
        unsigned char sum=die1+die2;
        
    //record the initial wins and losses
        switch (sum){
            case 2:lose2++;break;
            case 3:lose3++;break;
            case 7:win7++;break;
            case 11:win11++;break;
            case 12:lose12++;break;
        }
        
        //decide if you need to roll again
        if(sum==7||sum==11)win++;
        else if(sum==2||sum==3||sum==12)lose++;
        else {
            bool rollAgn=true;
            
            //roll the dice as many times as necessary 
            do{
                die1=rand()%6+1;
                die2=rand()%6+1;
                unsigned char sum=die1+die2;
                
                //if you roll a 7 before original sum you lose
                if (sum2==7){
                    lose++;
                    rollAgn=false;
                    
                //if you roll your original sum you win
                }else if (sum2==sum){
                    win++;
                    rollAgn=false;
                    }   
                }
            }while(rollAgn);
        }
    }
    
        //output results
        cout<<"Total Number Of Games = "<<nGames<<endl;
        cout<<"Total Wins = "<<win<<"Percentage win = "<<win/nGames*100
                <<"%"<<lose<<"Percentage Lose = "
                <<lose/nGames*100<<"%"<<endl;
        cout<<"Total Lose = "<<lose<endl;
        cout<<"TOtal Number of Games = "<<win+lose<<endl;
        

        
    //Output Located Here
    

    //Exit
    return 0;
}

