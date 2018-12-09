/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const double PI = 3.14159;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
   
    //Display menu
    int choice;
    
    cout<<"Geometry Calculator\n"
            << " 1. calculate the area of a circle\n"
            << " 2. calculate the area of a Rectangle\n"
            << " 3. calculate the area of a Triangle\n"
            << " 4. Quit\n\n"
            << " Enter your chouce (1-4):"; 
    cin>>choice;
    if ( choice < 1|| choice > 4){
            cout<<"Please enter a value from 1 to 4!" <<endl;
    }
    
    
    float area; 
    switch(choice ){
        case 1: //calculate the area of a circle
            float radius;
            cout<<"enter the radius of the circle: ";
            cin>>radius;
            if (radius >=0){
            area = PI * radius*radius;
            cout<<"The area is "<<area<<endl;
            }
            else 
                cout<<"The radius needs to be positive!"<<endl;
            break;
            
        case 2: // area of a rectangle
            float length,width;
            cout<<"enter the length of the rectangle ";
            cin>>length;
            if (length >=0 && width>=0){
            cout<<"enter the width of the rectangle ";
            cin>>width;
            area = length*width;
            cout<<"The area is "<<area<<endl;
            }
            else 
                cout<<"The length and width needs to be positive!"<<endl;
                 break;
                 
         case 3: // area of a triangle
            float base,height;
            cout<<"enter the base of the triangle ";
            cin>>base;
            if (base >=0 && height>=0){
            cout<<"enter the height of the triangle ";
            cin>>height;
            area = base*height*0.5;
            cout<<"The area is "<<area<<endl;
            }
            else
                cout<<"The base and height need to be positive!"<<endl;
            break;
            
        default:
            cout<<"GoodBye!"<<endl;
           
    }

    //Exit
    return 0;
}

