/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 2nd, 2018, 11:45PM 
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
//string getDie();

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Initialize the random number function
    srand(static_cast<unsigned int>(time(0)));
    

    //Test out the Dice Shuffle and pick 5 unique
    //Dice
    string Die1,Die2,Die3,Die4,Die5;
    int nHands=1;
    int NumOF1s = 0, NumOF2s = 0, 
         NumOF3s = 0, NumOF4s = 0, NumOF5s = 0, NumOF6s = 0;
    bool TwoOFakind = false;
    bool ThreeOFakind = false;
    bool FourOFakind = false;
    bool FiveOFakind = false;
    bool TwoPairs = false; 
    bool Str8 = false;
    bool FullH = false;
    bool re1 = false;
    bool re2 = false;
    bool re3 = false;
    bool re4 = false;
    bool re5 = false;
    char choice1,choice2,choice3,choice4,choice5;
    
    //Choose Die
    for(int hand=1;hand<=nHands;hand++){
        unsigned char Die1=rand()%6+1;
        unsigned char Die2=rand()%6+1;
        unsigned char Die3=rand()%6+1;
        unsigned char Die4=rand()%6+1;
        unsigned char Die5=rand()%6+1;
      
        
        
        //Output the 5 unique dice
       
        if (Die1 ==1) {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die1 ==2) {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die1 ==3) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die1 ==4) {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die1 ==5) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die1 ==6) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die2 ==1) {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die2 ==2) {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die2 ==3) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die2 ==4) {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die2 ==5) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die2 ==6) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die3 ==1) {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die3 ==2) {
           cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die3 ==3) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die3 ==4) {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die3 ==5) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die3 ==6) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die4 ==1) {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die4 ==2) {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die4 ==3) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die4 ==4) {
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
        if (Die4 ==6) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        if (Die5 ==1) {
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
        if (Die5 ==3) {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
             }
        if (Die5 ==4) {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die5 ==5) {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
             }
        if (Die5 ==6) {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
         
        
        //Choice to reroll Die 1
        cout<<fixed<<setprecision(2)<<showpoint<<endl;
        cout<<"     Do you want to Roll Die 1 again? (y/n)";
            cin>>choice1;
            
      
        if (choice1=='y')
            bool re1=true;
                do {
                    Die1 = rand()%6+1;  //Randomly generate a new die for die 1
                if (Die1 ==1 && choice1=='y') {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die1 ==2 && choice1=='y') {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die1 ==3 && choice1=='y') {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die1 ==4 && choice1=='y') {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die1 ==5 && choice1=='y') {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die1 ==6 && choice1=='y') {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
                    
                    
        }while (re1);
        
    //Choice to Reroll for Dice 2
    cout<<"     Do you want to Roll Die 2 again? (y/n)";
      cin>>choice2;
       
        if (choice2=='y')
            bool re2=true;
            do {
              Die2 = rand()%6+1; //Randomly generate a new die for die 2
              if (Die2 ==1 && choice2=='y') {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die2 ==2 && choice2=='y') {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die2 ==3 && choice2=='y') {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die2 ==4 && choice2=='y') {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die2 ==5 && choice2=='y') {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die2 ==6 && choice2=='y') {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }
        }while (re2);
        
    //Choice to Reroll for Die 3     
    cout<<"     Do you want to Roll Die 3 again? (y/n)";
    cin>>choice3;

        if (choice3=='y')
          bool re3=true;
            do {
              Die3 = rand()%6+1; //Randomly generate a new die for die 3
                if (Die3 ==1 && choice3=='y') {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die3 ==2 && choice3=='y') {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die3 ==3 && choice3=='y') {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die3 ==4 && choice3=='y') {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die3 ==5 && choice3=='y') {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die3 ==6 && choice3=='y') {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }       
        }while (re3);
        
    //Choice to reroll Die 4   
    cout<<"     Do you want to Roll Die 4 again? (y/n)";
    cin>>choice4;

        if (choice4=='y')
          bool re4=true;
            do {
              Die4 = rand()%6+1; //Randomly generate a new die for die 4
               if (Die4 ==1 && choice4=='y') {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die4 ==2 && choice4=='y') {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die4 ==3 && choice4=='y') {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die4 ==4 && choice4=='y') {
            cout<<"  ***********\n"
                   << "  * ______  *\n"
                   << "  *|      | *\n"
                   << "  *|____\\_| *\n"
                   << "  *      \\  *\n"
                   << "  ***********\n";
            }
        if (Die4 ==5 && choice4=='y') {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die4 ==6 && choice4=='y') {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }      
          }while (re4);
          
     //Choice to reroll Die 5     
    cout<<"     Do you want to Roll Die 5 again? (y/n)";
    cin>>choice5;

        if (choice5=='y')
          bool re5=true;
            do {
              Die5 = rand()%6+1; //Randomly generate a new die for die 5
               if (Die5 ==1 && choice5=='y') {
            cout<<"  ***********\n"
                   << "  * 9     9 *\n"
                   << "  * 9     9 *\n"
                   << "  * 9  9  9 *\n"
                   << "  * 9     9 *\n"
                   << "  ***********\n";
             }
        if (Die5 ==2 && choice5=='y') {
            cout<< "  ***********\n"
                   << "  *  x   x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x x x  *\n"
                   << "  *  x   x  *\n"
                   << "  ***********\n";
             }
        if (Die5 ==3 && choice5=='y') {
            cout<< "  ***********\n"
                   << "  *  ______ *\n"
                   << "  *     |   *\n"
                   << "  *     |   *\n"
                   << "  * |___|   *\n"
                   << "  ***********\n";
            }
        if (Die5 ==4 && choice5=='y') {
            cout<<"***********\n"
                   << "* ______  *\n"
                   << "*|      | *\n"
                   << "*|____\\_| *\n"
                   << "*      \\  *\n"
                   << "***********\n";
            }
        if (Die5 ==5 && choice5=='y') {
            cout<< "  ***********\n"
                   << "  *   |  /  *\n"
                   << "  *   | /   *\n"
                   << "  *   | \\   *\n"
                   << "  *   |  \\  *\n"
                   << "  ***********\n";
            }
        if (Die5 ==6 && choice5=='y') {
            cout<< "  ***********\n"
                   << "  *   / \\   *\n"
                   << "  *  /___\\  *\n"
                   << "  * /     \\ *\n"
                   << "  */       \\*\n"
                   << "  ***********\n";
            }       
            }while (re5); 
    
    //Determine the possible hands of tossed dice
        switch (Die1) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die2) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die3) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4:  NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die4) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }
        switch (Die5) {
            case 1 : NumOF1s +=1; break;
            case 2 : NumOF2s +=1; break;
            case 3 : NumOF3s +=1; break;
            case 4 : NumOF4s +=1; break;
            case 5 : NumOF5s +=1; break;
            case 6 : NumOF6s +=1; break;
            }        
            
    
   
    
    //Determine how many four of a kinds are in given 
        if ((TwoOFakind==true ||TwoPairs==true) && (TwoPairs==true || TwoOFakind==true))
            {
               cout << "You Rolled four of a kind!!!" << endl;
                FourOFakind=true;
            }
    //Determine if a five of a kind was rolled  
        if (NumOF1s == 5 || NumOF2s == 5 || NumOF3s == 5 || NumOF4s == 5 || 
                 NumOF5s == 5 || NumOF6s == 5 )
           {
              cout << "You Rolled five of a kind!!!" << endl;
              FiveOFakind =true;
           }
   
    //Determine if a straight was rolled
            if ((Die1 != Die2) && (Die2 != Die3) && (Die3 != Die4) && (Die4 != Die5))
               {
                  cout << "You Rolled a Straight!!!!" << endl;
                  Straight = true;
               }
  
        
     //Determine how many two of a kinds are in given hand  
        if ((NumOF1s == 2 || NumOF2s == 2 || NumOF3s == 2 || NumOF4s == 2 ||  NumOF5s == 2 || NumOF6s == 2) 
              && (FourOFakind == false && TwoPairs == false&& ThreeeOFakind==false))
            {
            cout<<"You rolled two of a kind"<<endl;
              TwoOFakind = true;
            }
     //Determine if two pairs was rolled
    if (NumOF1s == 2  || NumOF2s == 2 || NumOF3s == 2 || NumOF4s == 2 
        || NumOF5s == 2  || NumOF6s == 2  && NumOF1s == 2 || NumOF2s == 2 
        || NumOF3s == 2  || NumOF4s == 2  || NumOF5s == 2 || NumOF6s == 2 &&
        FourOFakind == false && TwoOFakind == false && ThreeOFakind ==false && )
            {
              cout<< "You Rolled two pairs!!!"<<endl;
              TwoPairs = true;
            }      
     //Determine if a three of a kind was rolled 
        if ((NumOF1s == 3 || NumOF2s == 3 || NumOF3s == 3 || NumOF4s == 3 || 
        NumOF5s == 3 || NumOF6s == 3) &&( FiveOFakind == false && FourOFakind == false))      
            {
              cout << "You Rolled three of a kind!!!" << endl;
              ThreeOFakind = true;
            }    
      //Determine if a full house was rolled
        if ((TwoOFakind == true||TwoPairs == true) && (ThreeOFakind == true))
           {
              cout << "You Rolled a full house!!!!" << endl;
              FullH = true;
           }   
        
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
    //Look through file to find the random Die Value
    for(int line=1;line<=nLines;line++){
        in>>die;
    }
    //Close the file
    in.close();
    //Return the random Die
    
    
    return die;
}
