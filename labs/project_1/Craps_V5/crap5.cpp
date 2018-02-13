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
#include <iomanip>   //Formatting Library
#include <cstring>   //Strin Library
#include <cmath>     //Math Library
#include <fstream>   //File Stream Operator
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT=100.0f;//Conversion to Percent

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random seed here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables and Initialize
    unsigned int win,lose;
    unsigned int win2=0,win3=0,win4=0,win5=0,win6=0,
            win7=0,win8=0,win9=0,win10=0,win11=0,win12=0;
    unsigned int lose2=0,lose3=0,lose4=0,lose5=0,lose6=0,
            lose7=0,lose8=0,lose9=0,lose10=0,lose11=0,lose12=0;
    unsigned int nGames=36*pow(10,6),fnGames;
    string name;
    
    //Open a fstream to modify the Number of Games
    ifstream input;
    input.open("nGames.dat");
    while(input>>fnGames);
    nGames=nGames<fnGames?fnGames:nGames;
    
    
    //Multiple Assignment Initialization
    win=lose=0;
    
    //Prompt players name for input
    cout<<"This is a Crap Simulation"<<endl;
    cout<<"Input Name of Player that wants the Simulation result"<<endl;
    cin>>name;
    
    
    //Play the number of games required
    for(int game=1;game<=nGames;game++){
        //Declare the dice and sum the results
        unsigned char die1=rand()%6+1;
        unsigned char die2=rand()%6+1;
        unsigned char sum=die1+die2;
        //Record the initial Wins and Losses
        switch(sum){
            case 2:lose2++;break;
            case 3:lose3++;break;
            case 7:win7++;break;
            case 11:win11++;break;
            case 12:lose12++;break;
        }
        //Decide if you need to Roll Again
        if(sum==7||sum==11)win++;
        else if(sum==2||sum==3||sum==12)lose++;
        else{
            bool rollAgn=true;
            //Roll the dice as many times as necessary
            do{
                die1=rand()%6+1;
                die2=rand()%6+1;
                unsigned char sum2=die1+die2;
                //If you roll a 7 before your original sum, you lose
                if(sum2==7){
                    lose++;
                    }
                    rollAgn=false;
                //If you roll your original sum, you win.
                }else if(sum2==sum){
                    win++;
                    rollAgn=false;
                    switch(sum){
                        case 4:win4++;break;
                        case 5:win5++;break;
                        case 6:win6++;break;
                        case 8:win8++;break;
                        case 9:win9++;break;
                        case 10:win10++;break;
                    }
                }
            }while(rollAgn);
        }
    }
    //Output the Results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"This simulation was run for "<<name<<endl;
    cout<<"Total Number of Games = "<<nGames<<endl;
    cout<<"Total Wins = "<<win<<" Percentage win = "
            <<PERCENT*win/nGames<<"%"<<endl;
    cout<<"Total Lose = "<<lose<<" Percentage Lose = "
            <<100*static_cast<float>(lose)/nGames<<"%"<<endl;
    cout<<"Total Number of Games = "<<win+lose<<endl;
    cout<<"Initial Roll     Wins    Losses"<<endl;
    cout<<"     2     "<<setw(10)<<win2<<setw(10)<<endl;
    cout<<"     3     "<<setw(10)<<win3<<setw(10)<<lose3<<endl;
    cout<<"     4     "<<setw(10)<<win4<<setw(10)<<lose4<<endl;
    cout<<"     5     "<<setw(10)<<win5<<setw(10)<<lose5<<endl;
    cout<<"     6     "<<setw(10)<<win6<<setw(10)<<lose6<<endl;
    cout<<"     7     "<<setw(10)<<win7<<setw(10)<<lose7<<endl;
    cout<<"     8     "<<setw(10)<<win8<<setw(10)<<lose8<<endl;
    cout<<"     9     "<<setw(10)<<win9<<setw(10)<<lose9<<endl;
    cout<<"    10     "<<setw(10)<<win10<<setw(10)<<lose10<<endl;
    cout<<"    11     "<<setw(10)<<win11<<setw(10)<<lose11<<endl;
    cout<<"    12     "<<setw(10)<<win12<<setw(10)<<lose12<<endl;
    int tot=win2+win3+win4+win5+win6+win7+win8+win9+win10+win11+win12
           +lose2+lose3+lose4+lose5+lose6+lose7+lose8
           +lose9+lose10+lose11+lose12;
    cout<<"Total Wins and Losses = "<<tot<<endl;
    
    //Close file
    input.close();
    
    //Exit
    return 0;
}