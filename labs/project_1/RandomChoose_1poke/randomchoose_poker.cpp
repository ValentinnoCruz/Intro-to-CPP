/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on October 30th, 2018, 5:11 PM
 * Purpose: Poker Dice
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here


string getDie(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    
    //Dice
    string Die1,Die2,Die3,Die4,Die5;
    int nHands=1;
    int Die1, Die2, Die3, Die4, Die5;
    int NumOF1s = 0, NumOF2s = 0, 
         NumOF3s = 0, NumOF4s = 0, NumOF5s = 0, NumOF6s = 0;
    bool TwoOFakind = false;
    bool ThreeOFakind = false;
    //Choose Die
    for(int hand=1;hand<=nHands;hand++){
        Die1=getDie(rand()%6+1);
        do{
            Die2=getDie(rand()%6+1)<<endl;
            if (Die2 == 1)
{
    NumOF1s += 1;
            }
            cout<<"You rolled"<<NumOF1s<<"Ones"<<endl;
        }while(Die1==Die2);
        do{
            Die3=getDie(rand()%6+1);
        }while(Die1==Die3||Die2==Die3);
        do{
            Die4=getDie(rand()%6+1);
        }while(Die1==Die4||Die2==Die4||Die3==Die4);
        do{
            Die5=getDie(rand()%6+1);
        }while(Die1==Die5||Die2==Die5||Die3==Die5||Die4==Die5);
        //Output the 5 unique dies
        switch
        cout<<Die2<<" "<<endl;
        cout<<Die3<<" "<<endl;
        cout<<Die4<<" "<<endl;
        cout<<Die5<<" "<<endl;
    }

    //Exit
    return 0;
}

string getDie(int nLines){
    //Declare variables
    fstream in;
    string die;
    //Initialize variables
    in.open("die.dat");
   
    for(int line=1;line<=nLines;line++){
        in>>die;
    }
    //Close the file
    in.close();
    //Return the random color
    
    
    return die;
}
