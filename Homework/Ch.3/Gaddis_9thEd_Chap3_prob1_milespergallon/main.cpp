/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on September 18th, 2018, 11:25 AM
 * Purpose:  Movie Tickets
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
                 // const int SIZE =26; 
                 //char cMovie[SIZE]; //cstring
    string sMovie; //string 
    unsigned short nAdult, nChild; // number of adult and childs tickets
    float pAdult, // price of the adult ticket in $
          pChild, // price of the child ticket in $
          ptkDist, //percentage distributor gets
          ptkBus, // percentage theater takes    
          tkDist, //$'s from ticket sales for dist.
          tkBus,  //$'s from ticket sales for the theater
          totTk;  // $'s total ticket sales 
    
    
    //Input or initialize values Here
    pAdult = 10.0f; // $10's
    pChild = 6.0f; //$6's
    
    cout<<"This program Calculated the take"<<endl;
    cout<<"a theater derives for showing a movie"<<endl;
    cout<<"Input the name of the movie"<<endl;
    getline(cin, sMovie);
    cout<<"Input number of Adult tickets sold"<<endl;
    cin>>nAdult;
    cout<<"Input number of Child tickets sold"<<endl;
    cin>>nChild;
    
   // sMovie = "Independence Day";
      // cin.getline(sMovie.c_str(),SIZE);
    
    //Process/Calculations Here
    ptkDist=0.8f;// distributoe takes 80% of sales
    ptkBus=0.2f;// theater takes 20% of sales
    totTk=(nAdult*pAdult)+nChild*pChild;
    tkDist=totTk*ptkDist; //take home revenue for distributor
    tkBus = totTk*ptkBus; // take home revenue for theater
    
    //Output Located Here
            //cout<<cmovie<<endl;
   
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Amount received and to be distributed"<<endl;
    cout<<"Movie title: "<<setw(19)<<sMovie<<endl;
    cout<<"Adult tickets sold: "<<setw(9)<<nAdult<<endl;
    cout<<"Child tickets sold:"<<setw(10)<<nChild<<endl;
    cout<<"Total Take: "<<setw(15)<<"$"<<totTk<<endl;
    cout<<"Distributor receives: "<<setw(5)<<"$"<<tkDist<<endl;
    cout<<"Theater receives: "<<setw(9)<<"$"<<tkBus<<endl;

    //Exit
    return 0;
}
