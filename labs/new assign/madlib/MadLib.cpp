/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 18th, 2018, 12:10 PM
 * Purpose:  MadLibs
 */

//System Libraries Here
#include <iostream>
#include <iomanip> // format library
#include <cmath>
#include <cstring> // string library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string sMadLib;
    string in1, in2, in3, in4;
    
    //Input or initialize values Here
    cout<<"This program acts like a Madlib"<<endl;
    cout<<"What is your name?"<<endl;
    getline(cin,in1);
    cout<<"What is your favorite color?"<<endl;
    getline(cin,in2);
    cout<<"What is your favorite food?"<<endl;
    getline(cin,in3);       
    cout<<"What is your animal?"<<endl;
    getline(cin,in4);     
      
    
    //Process/Calculations Here
    sMadLib=in1+" ate the "+in2+" "+in4;
    sMadLib+= " After the "+in4+" ate ";
    sMadLib+="his "+in3;
            
    
    //Output Located Here
   cout<<sMadLib<<endl;         
   
   

    //Exit
    return 0;
}
