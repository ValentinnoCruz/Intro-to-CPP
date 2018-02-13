/* 
 * File:   main.cpp
 * Author: valentinno cruz
 * Created on september 29, 2018, 12:10 PM
 * Purpose:  Area of rectangles 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
   
    //Display menu
    int  area1, area2, // area of the rectangles
         lnth1, lnth2, width1, width2; // length and width of the rectangles
    
    //Determining factors of the rectangles
    cout<<"What is the length of rectangle 1? "<<endl;
    cin>>lnth1; 
    cout<<"What is the Width of rectangle 1? "<<endl;
    cin>>width1; 
    cout<<"What is the length of rectangle 2? "<<endl;
    cin>>lnth2; 
    cout<<"What is the width of rectangle 2? "<<endl;
    cin>>width2; 
    
    //area inputs
    area1= lnth1 * width1;
    area2 = lnth2 * width2;
    
    //output
    if (area1 > area2){
        cout<<"Rectangle 1 has a greater area than rectangle 2"<<endl;
    }
    else if (area1 < area2) {
        cout<<"Rectangle 2 has a greater area than rectangle 1 "<<endl;
    }
    else if (area1 = area2){
        cout<<"The areas of the rectangles are the same"<<endl;
    }
    
    
           
    

    //Exit
    return 0;
}

