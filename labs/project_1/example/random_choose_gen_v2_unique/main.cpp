/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 1, 2018, 11:24 AM
 * Purpose:  Random Choose from a file (Generator)
 */

//System Libraries Here
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

string getColr();
string getCard();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    for (int i=1;i<=10;i++){
        cout<<getColr()<<endl; 
    }
   //test out card shuffle and pick 5 unique cards
    string card1,card2,card3,card4,card5;
    int card; 
    
    //choose cards
     card1=getcard(rand()%52+1);
     do{
        card2=getcard(rand()%52+1);
     }while (card1==card2);
     do{
        card3=getcard(rand()%52+1);
     }while (card1==card3||card2==card3);
     do{
        card4=getcard(rand()%52+1);
     }while (card1==card4||card2==card4||card3==card4);
     do{
        card5=getcard(rand()%52+1);
     }while (card1==card5||card2==card5||card3==card5||card4==card5);
     
     //output the 5 unique cards
     cout<<card1<<" "<<card2<<" "<<card3<<" "<<card4<<" "<<card5<<" "<<endl;
    
    //end of getting unique card

    //Exit
    return 0;
    
}
string getCard(){
    //declare variables
    fstream in;
    string card;
    int nlines;
    //initialize variables
    in.open("card.dat");
    nlines=rand()%52+1;//possible 52 cards in the file
    //look through file to find the random color
    for (int line=1;line<=nlines;line++){
        in>>card;
    }

//close the file
in.close();
//return the random color
return card;
}

string getColr(){
    //declare variables
    fstream in;
    string color;
    int nlines;
    //initialize variables
    in.open("color.dat");
    nlines=rand()%8+1;//possible 8 colors in the file
    //look through file to find the random color
    for (int line=1;line<=nlines;line++){
        in>>color;
    }

//close the file
in.close();
//return the random color
return color;
}