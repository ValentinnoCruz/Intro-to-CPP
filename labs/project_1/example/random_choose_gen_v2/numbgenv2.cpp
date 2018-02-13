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
string getDie();


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
   //test out card shuffle
    int nrolls=1;
    int ndice=5;
    for (int hand = 1; hand<=nrolls;hand++){
        for (int dicehand=1;dicehand<=ndice;dicehand++){
            cout<<getDie()<<endl;
        }
        cout<<endl;
    }
    

    //Exit
    return 0;
}
string getDie(){
    //declare variables
    fstream in;
    string Die;
    int ndice;
    //initialize variables
    in.open("rollem.dat");
    nlines=rand()%6+1;//possible 52 cards in the file
    //look through file to find the random color
    for (int line=1;line<=nlines;line++){
        in>>dice;
    }

//close the file
in.close();
//return the random color
return dice;
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