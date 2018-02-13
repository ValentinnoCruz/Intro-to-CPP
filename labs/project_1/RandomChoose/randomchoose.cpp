/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 1st, 2018, 11:27 AM
 * Purpose:  Randomly choose from a file
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
string getColr();
string getCard();
string getCard(int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number function
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    for(int i=1;i<=10;i++){
        cout<<getColr()<<endl;
    }
    //Test out the Card Shuffle and pick 5 unique
    //Cards
    string card1,card2,card3,card4,card5;
    int nHands=100;
    //Choose Cards
    for(int hand=1;hand<=nHands;hand++){
        card1=getCard(rand()%52+1);
        do{
            card2=getCard(rand()%52+1);
        }while(card1==card2);
        do{
            card3=getCard(rand()%52+1);
        }while(card1==card3||card2==card3);
        do{
            card4=getCard(rand()%52+1);
        }while(card1==card4||card2==card4||card3==card4);
        do{
            card5=getCard(rand()%52+1);
        }while(card1==card5||card2==card5||card3==card5||card4==card5);
        //Output the 5 unique cards
        cout<<card1<<" "<<card2<<" "<<card3<<" "
                <<card4<<" "<<card5<<endl;
    }

    //Exit
    return 0;
}

string getCard(int nLines){
    //Declare variables
    fstream in;
    string card;
    //Initialize variables
    in.open("card.dat");
    //Look through file to find the random color
    for(int line=1;line<=nLines;line++){
        in>>card;
    }
    //Close the file
    in.close();
    //Return the random color
    return card;
}

string getCard(){
    //Declare variables
    fstream in;
    string card;
    int nLines;
    //Initialize variables
    in.open("card.dat");
    nLines=rand()%52+1;//Possible 52 cards in the file
    //Look through file to find the random color
    for(int line=1;line<=nLines;line++){
        in>>card;
    }
    //Close the file
    in.close();
    //Return the random color
    return card;
}

string getColr(){
    //Declare variables
    fstream in;
    string color;
    int nLines;
    //Initialize variables
    in.open("color.dat");
    nLines=rand()%8+1;//Possible 8 colors in the file
    //Look through file to find the random color
    for(int line=1;line<=nLines;line++){
        in>>color;
    }
    //Close the file
    in.close();
    //Return the random color
    return color;
}