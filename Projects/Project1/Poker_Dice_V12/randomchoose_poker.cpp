/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 7nd, 2018, 3:03 PM 
 * Purpose:  Poker Dice Project 
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

//Function Prototypes Here

string getDie(int);  //random string generator for Sides of Die


//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Initialize the random number function
    srand(static_cast<unsigned int>(time(0)));

    //Test out the Dice Shuffle and pick 5 unique Die & Declare variables
    string Die1,Die2,Die3,Die4,Die5, name;            //String names for Die
    float nHands=1;                                    //Number of tosses
    int NumOF1s = 0, NumOF2s = 0,           //sum of values of die
         NumOF3s = 0, NumOF4s = 0, 
         NumOF5s = 0, NumOF6s = 0;
    bool TwoOAK = false;                            //Two of a kind boolean statement
    bool ThreeOAK = false;                         //Three of a kind boolean statement
    bool FourOAK = false;                          //Four of a kind boolean statement
    bool FiveOAK = false;                           //Five of a kind boolean statement
    bool TwoPairs = false;                          //Two pairs boolean statement
    bool Str8 = false;                                 //Straight boolean statement
    bool FullH = false;                                //Full House boolean statement 
    bool re1 = false;                                  //Re-roll dice one boolean statement  
    bool re2 = false;                                 //Re-roll dice two boolean statement 
    bool re3 = false;                                 //Re-roll dice three boolean statement 
    bool re4 = false;                                 //Re-roll dice four boolean statement 
    bool re5 = false;                                 //Re-roll dice five boolean statement 
    char choice1,choice2,                        // value for users option to re-roll
            choice3,choice4,choice5;
    
          // Welcome Header
         cout<<"   ____             __                                    ____                         "<<endl;        
         cout<<"  /\\  _`\\          /\\ \\                                /\\  _`\\     __                 "<<endl;      
         cout<<"  \\ \\ \\L\\ \\  ___   \\ \\ \\/'\\       __    _ __           \\ \\ \\/\\ \\  /\\_\\     ___      __ "<<endl;      
         cout<<"   \\ \\ ,__/ / __`\\  \\ \\ , <     /'__`\\ /\\`'__\\          \\ \\ \\ \\ \\ \\/\\ \\   /'___\\  /'__`\\ "<<endl;    
         cout<<"    \\ \\ \\/ /\\ \\L\\ \\  \\ \\ \\\\`\\  /\\  __/ \\ \\ \\/            \\ \\ \\_\\ \\ \\ \\ \\ /\\ \\__/ /\\  __/  "<<endl;    
         cout<<"     \\ \\_\\ \\ \\____/   \\ \\_\\ \\_\\\\ \\____\\ \\ \\_\\             \\ \\____/  \\ \\_\\\\ \\____\\\\ \\____\\ "<<endl;    
         cout<<"      \\/_/  \\/___/     \\/_/\\/_/ \\/____/  \\/_/              \\/___/    \\/_/ \\/____/ \\/____/ "<<endl;    
         cout<<""<<endl;
 
         //Rules
         cout<<"   =========================================================="<<endl;
         cout<<setw(30);
         cout<<" Rules"<<endl;
         cout<<"   =========================================================="<<endl;
         cout<<"       A Player takes 5 dice with the values of "<<endl;
         cout<<"       (Ace, King, Queen, Jack, 10, & 9."<<endl;
         cout<<"       After each roll players can set aside "<<endl;
         cout<<"       one or more dice and then roll remaining dice. "<<endl;
         cout<<"       Players may choose to not set aside any dice "<<endl;
         cout<<"       and roll all five dice in second as well as third roll."<<endl;
         cout<<""<<endl;
         cout<<""<<endl;
         
         //Winning Hands
         cout<<"   =========================================================="<<endl;
         cout<<"   Poker hands sequence from highest to lowest as following:"<<endl;
         cout<<"   =========================================================="<<endl;
         cout<<"       -Five of a kind – All 5 dice showing the same #" <<endl;
         cout<<"       -Four of a kind – 4 dice showing the same #" <<endl;
         cout<<"       -Full house – 3 dice of the same # and 2 dice w/ the same #"<<endl;
         cout<<"       -Straight – Five sequential dice(9-10-J-Q-K or 10-J-Q-K-A)"<<endl;
         cout<<"       -Three of a kind – 4 dice showing the same #"<<endl;
         cout<<"       -Two pairs – 2 dice pairs showing same #"<<endl;
         cout<<"       -Two of a Kind – 2 dice showing same #"<<endl;
         cout<<""<<endl;
         cout<<""<<endl;
 
          //Initiate Game
         cout<<"       Please Enter Your Name To Begin:  ";
         cin>>name;
         cout<<"       Your initial Roll is"<<endl;
         
    //Randomly generated value applied to individual die
    for(int hand=1;hand<=nHands;hand++){
        // declare the dice 
        unsigned char Die1=rand()%6+1;
        unsigned char Die2=rand()%6+1;
        unsigned char Die3=rand()%6+1;
        unsigned char Die4=rand()%6+1;
        unsigned char Die5=rand()%6+1;
     
        //Output the 5 unique dice
        if (Die1 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
          }
        if (Die1 ==2) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
          }
        if (Die1 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die1 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die1 ==5) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die1 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die2 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die2 ==2) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die2 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die2 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die2 ==5) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die2 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die3 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die3 ==2) {                 //symbol applied to die with given value
           cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die3 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die3 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die3 ==5) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die3 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die4 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die4 ==2) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die4 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die4 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die4 ==5) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die4 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die5 ==1) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die5 ==2) {
           cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die5 ==3) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die5 ==4) {                 //symbol applied to die with given value
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die5 ==5) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die5 ==6) {                 //symbol applied to die with given value
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
         
        
    //Option to re-roll Die 1
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"     Do you want to Roll Die 1 again? (y/n)";
    cin>>choice1;
    
   // If user opts in to change die1
   if (choice1 =='y' || choice1=='Y'){
       do {
             Die1 = rand()%6+1;  // generate a new die for die 1
                    
         //Possible outcomes of Die 1           
         if (Die1 ==1) { 
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die1 ==2 ) {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die1 ==3 ) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die1 ==4 ) {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die1 ==5 ) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die1 ==6 ) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }  
         else {re1=false;}
       }while ((re1) && (choice1=='y'));
    }
        
   //Option to re-roll Die 2
   cout<<fixed<<setprecision(2)<<showpoint<<endl;
   cout<<"     Do you want to Roll Die 2 again? (y/n)";
   cin>>choice2;
     
    // If user opts in to change die1
    if (choice2 =='y'|| choice2 =='Y'){
       do {
               Die2 = rand()%6+1;  // generate a new die for die 2
               
         //Possible outcomes of die 2           
         if (Die2 ==1 ) { 
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die2 ==2 ) {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die2 ==3 ) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die2 ==4 ) {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die2 ==5 ) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die2 ==6 ) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }  
         else {re2=false;}
       }while ((re2) && (choice2=='y'));
    }
        
  //Option to re-roll Die 3
  cout<<fixed<<setprecision(2)<<showpoint<<endl;
  cout<<"     Do you want to Roll Die 3 again? (y/n)";
  cin>>choice3;
  
    // If user opts in to change die1
    if (choice3 =='y'|| choice3 =='Y'){
         do {
                Die3 = rand()%6+1;  // generate a new die for die 3
                    
              //possible outcomes of Die 3       
         if (Die3 ==1 ) { 
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
                 }
        if (Die3 ==2 ) {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
                 }
        if (Die3 ==3 ) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
                }
        if (Die3 ==4 ) {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
                }
        if (Die3 ==5 ) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
                }
        if (Die3 ==6 ) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
                  }  
             else {re3=false;}
         }while ((re3) && (choice3=='y'));
     }
        
  //Option to re-roll Die 4
  cout<<fixed<<setprecision(2)<<showpoint<<endl;
  cout<<"     Do you want to Roll Die 4 again? (y/n)";
  cin>>choice4;
   
    // If user opts in to change die1
    if (choice4 =='y' || choice4 =='Y'){
        do {
                Die4 = rand()%6+1;  // generate a new die for die 4
                    
         //Die possible variations           
         if (Die4 ==1 ) { 
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
                  }
        if (Die4 ==2 ) {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die4 ==3 ) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die4 ==4 ) {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die4 ==5 ) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die4 ==6 ) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }  
            else {re4=false;}
     }while ((re4) && (choice4=='y'));
 } 
        
  //Option to re-roll Die 5
  cout<<fixed<<setprecision(2)<<showpoint<<endl;
  cout<<"     Do you want to Roll Die 5 again? (y/n)";
  cin>>choice5;
        
    // If user opts in to change die1
    if (choice5 =='y' || choice5=='Y'){
       do {
              Die5 = rand()%6+1;  // generate a new die for die 5
          //Possible outcomes of Die5         
         if (Die5 ==1 ) { 
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die5 ==2  ) {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die5 ==3) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die5 ==4 ) {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die5 ==5 ) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die5 ==6 ) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }  
          else {re5=false;}
        }while (re5);
     }
        
       
            
         //Determine the possible hands of tossed dice if user did not choose to Re-Roll
         switch (Die1) {                                                // If die 1 was not re-rolled its value would be determined here
            case 1 :  { 
                if (re1==false) NumOF1s+=1; }break;
            case 2 :  {
                if (re1==false) NumOF2s+=1;} break;
            case 3 :  {
                if (re1==false) NumOF3s+=1;} break;
            case 4 :  {
                if (re1==false) NumOF4s+=1; }break;
            case 5 : {
                if (re1==false) NumOF5s+=1;} break;
            case 6 : {
                if (re1==false) NumOF6s+=1;} break;
            }
         switch (Die2) {                                               // If die 2 was not re-rolled its value would be determined here
            case 1 :  { 
                if (re2==false) NumOF1s+=1; }break;
            case 2 :  {
                if (re2==false) NumOF2s+=1;} break;
            case 3 :  {
                if (re2==false) NumOF3s+=1;} break;
            case 4 :  {
                if (re2==false) NumOF4s+=1; }break;
            case 5 : {
                if (re2==false) NumOF5s+=1;} break;
            case 6 : {
                if (re2==false) NumOF6s+=1;} break;
            }
         switch (Die3) {                                               // If die 3 was not re-rolled its value would be determined here
            case 1 :  { 
                if (re3==false) NumOF1s+=1; }break;
            case 2 :  {
                if (re3==false) NumOF2s+=1;} break;
            case 3 :  {
                if (re3==false) NumOF3s+=1;} break;
            case 4 :  {
                if (re3==false) NumOF4s+=1; }break;
            case 5 : {
                if (re3==false) NumOF5s+=1;} break;
            case 6 : {
                if (re3==false) NumOF6s+=1;} break;
            }
         switch (Die4) {                                               // If die 4 was not re-rolled its value would be determined here
            case 1 :  { 
                if (re4==false) NumOF1s+=1; }break;
            case 2 :  {
                if (re4==false) NumOF2s+=1;} break;
            case 3 :  {
                if (re4==false) NumOF3s+=1;} break;
            case 4 :  {
                if (re4==false) NumOF4s+=1; }break;
            case 5 : {
                if (re4==false) NumOF5s+=1;} break;
            case 6 : {
                if (re4==false) NumOF6s+=1;} break;
            }
         switch (Die5) {                                               // If die 5 was not re-rolled its value would be determined here
            case 1 :  { 
                if (re5==false) NumOF1s+=1; }break;
            case 2 :  {
                if (re5==false) NumOF2s+=1;} break;
            case 3 :  {
                if (re5==false) NumOF3s+=1;} break;
            case 4 :  {
                if (re5==false) NumOF4s+=1; }break;
            case 5 : {
                if (re5==false) NumOF5s+=1;} break;
            case 6 : {
                if (re5==false) NumOF6s+=1;} break;
            }
          
     // Roll Results
     cout<<"   ======================================="<<endl;
     cout<<setw(27);
     cout<<"-Dice Results-"<<right<<endl;    
     cout<<"   ======================================="<<endl;
     cout<<"       You Rolled   "<<NumOF1s<<"    9's"<<endl;                         // sum of 9's rolled or Re-rolled
     cout<<"       You Rolled   "<<NumOF2s<<"    10's"<<endl;                       // sum of 10's rolled or Re-rolled
     cout<<"       You Rolled   "<<NumOF3s<<"    Jack's"<<endl;                   // sum of jack's rolled or Re-rolled
     cout<<"       You Rolled   "<<NumOF4s<<"    Queen's"<<endl;                // sum of queen's rolled or Re-rolled
     cout<<"       You Rolled   "<<NumOF5s<<"    King's"<<endl;                   // sum of king's rolled or Re-rolled
     cout<<"       You Rolled   "<<NumOF6s<<"    Ace's"<<endl;                    // sum of ace's rolled or Re-rolled
       
     cout<<"   ======================================="<<endl;
     cout<<setw(27);
     cout<<"-Winning Hand-"<<right<<endl; 
     cout<<"   ======================================="<<endl;
    
     
     //Determine if a five of a kind was rolled  
        if (NumOF1s == 5 || NumOF2s == 5 || NumOF3s == 5 || NumOF4s == 5 || 
            NumOF5s == 5 || NumOF6s == 5 )
           {
             cout<<setw(13);
             cout <<name<< "Rolled five of a kind!!!!!"<<right<< endl;
             FiveOAK =true;
           }
     
    //Determine how many four of a kinds are in given 
        if (((NumOF1s == 4) || (NumOF2s == 4) || (NumOF3s ==4) || (NumOF4s ==4) 
             || (NumOF5s == 4) || (NumOF6s == 4)) && (FiveOAK==false))
            {
              cout<<setw(13);
              cout <<name<< "Rolled four of a kind!!!!" <<right<< endl;
              FourOAK=true;
            }
     
       //Determine if a straight was rolled
        if (((NumOF1s >= 1 && NumOF1s < 6) && (NumOF2s >= 1 && NumOF2s < 6)&& 
            (NumOF3s >= 1 && NumOF3s < 6) && (NumOF4s >= 1 && NumOF4s < 6) && 
            (NumOF5s >= 1 && NumOF5s < 6)) && (NumOF1s != NumOF2s && NumOF2s != 
            NumOF3s && NumOF3s != NumOF4s && NumOF4s != NumOF5s))
                 {
                   cout<<setw(13);
                   cout <<name<< " Rolled a straight!!!" <<right<< endl;
                  }
                 else if (((NumOF1s > 1 && NumOF1s <= 6) && (NumOF2s > 1 && NumOF2s <=6) 
                            && (NumOF3s > 1 && NumOF3s <= 6) && (NumOF4s > 1 && NumOF4s <= 6)&& 
                            (NumOF5s > 1 && NumOF5s <= 6)) && (NumOF1s != NumOF2s && NumOF2s != 
                            NumOF3s && NumOF3s != NumOF4s && NumOF4s != NumOF5s))
                                 {
                                   cout<<setw(13);
                                   cout <<name<< " Rolled a straight!!!!" <<right<< endl;
                                  }
     
        //Determine if a full house was rolled
        if ((TwoOAK == true||TwoPairs == true) && (ThreeOAK == true))
           {
            cout<<setw(13);
              cout <<name<< " Rolled a full house!!!!" <<right<< endl;
              FullH = true;
           } 
     
        //Determine if a three of a kind was rolled 
        if ((NumOF1s == 3 || NumOF2s == 3 || NumOF3s == 3 || NumOF4s == 3 || 
              NumOF5s == 3 || NumOF6s == 3) 
              && (FiveOAK == false && FourOAK == false))      
            {
              cout<<setw(13);
              cout << name<<" Rolled three of a kind!!!"<<right << endl;
              ThreeOAK = true;
            }
     
        //Determine if two pairs was rolled
        if (((NumOF1s == 2) && (NumOF2s ==2 || NumOF3s==2||NumOF4s==2 ||
            NumOF5s==2 ||NumOF6s==2)) && (FourOAK == false 
            && ThreeOAK ==false && FiveOAK == false && FullH == false))
             {
               cout<<setw(13);
               cout<<name<< " Rolled two pairs!!"<<right<<endl;
               TwoPairs = true;
             }
     
        //Determine if two pairs was rolled
        if (((NumOF2s==2) && (NumOF3s==2||NumOF4s==2|| NumOF5s==2 ||NumOF6s==2))
              && (FourOAK == false &&ThreeOAK ==false 
              && FiveOAK == false && FullH == false))
           {
             cout<<setw(13);
             cout<< name<<" Rolled two pairs!!"<<right<<endl;
             TwoPairs = true;
           }
     
        //Determine if two pairs was rolled
        if (((NumOF3s==2) && (NumOF4s==2|| NumOF5s==2 || NumOF6s==2))
            && (FourOAK == false &&ThreeOAK ==false 
            && FiveOAK == false && FullH == false))
           {
             cout<<setw(13);
             cout<<name<< " Rolled two pairs!!!"<<right<<endl;
             TwoPairs = true;
           }
     
         //Determine if two pairs was rolled
        if (((NumOF4s==2) && (NumOF5s==2 || NumOF6s==2))
            && (FourOAK == false &&ThreeOAK ==false 
            && FiveOAK == false && FullH == false))
           {
             cout<<setw(13);
             cout<<name<< " Rolled two pairs!!!"<<right<<endl;
             TwoPairs = true;
           }
        if (((NumOF5s==2) && (NumOF6s==2)) && (FourOAK == false 
            && ThreeOAK ==false && FiveOAK == false && FullH == false))
           {
             cout<<setw(13);
             cout<<name<< " Rolled two pairs!!!"<<right<<endl;
             TwoPairs = true;
           }
        
         //Determine how many two of a kinds are in given hand  
        if ((NumOF1s == 2 || NumOF2s == 2 || NumOF3s == 2 || 
            NumOF4s == 2 || NumOF5s == 2 || NumOF6s == 2) 
            && (TwoPairs==false))
           {
             cout<<setw(13);
             cout<<name<<" Rolled two of a kind!!"<<right<<endl;
             TwoOAK = true;
           }  
        
    }
    
    //Exit
    return 0;
}

//open up fstream to get die variables 
string getDie(int nLines){
    //Declare variables
    fstream in;
    string die;
    //Initialize variables
    in.open("die.dat");
    //Look through file to find the random Die Value
    for(int line=1;line<=nLines;line++){
        in>>die;
    }
    //Close the file
    in.close();
    //Return the random Die
   
    return die;
}
