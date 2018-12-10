/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on October 29, 2018 11:14AM
 * Purpose:  Poker Dice
 */


//System Libraries
#include <iostream>
using namespace std;

struct MovieData{
    // This structure used to hold data about movies
    
    string title;       // Title of the movie
    string director;    // name of the Director
    int yrRelease;      // the Year of Release
    int mnRunTime;      // Running time in minutes
    
    // represents the cost of production in million USD
    double productionCost;
    // represents the revenue during first year 
    // in million USD
    double firstYrRevenue;
};

void showMovieInfo(const MovieData);
int main(){
    cout<< "============================================\n";
    cout<<"\t\t:: Information ::\n";
    cout<<"This program stores information about movies\n";
    cout<<"using structure and print them for user in\n";
    cout<<"a formatted manner.\n";
    cout<<"============================================\n";
    // create the two samples of movies
    // use an initialization list to initialize the data
    MovieData m1 = {"Casablanca","Michael Curtiz",1942,102,.9,4.10};
    MovieData m2 = {"Interstellar","Christopher Nolan ",2014,110,165,188.1};
    // Now show the information,
    showMovieInfo(m1);
    showMovieInfo(m2);
    return 0;
}
// ======================================================
void showMovieInfo(const MovieData m){
    // This function prints the information about
    // specific movie record in a formatted manner
    // for the user.
    cout<<"    Movie Title : " << m.title<<endl;
    cout<<" Movie Director : " <<m.director<<endl;
    cout<<"Year of Release : " <<m.yrRelease<<endl;
    cout<<"   Running Time : " <<m.mnRunTime
        <<" (Minutes)" <<endl;
        
    // Now print the first year profit or loss
    // profit = revenue - production costs
    double profit = m.firstYrRevenue - m.productionCost;
    
    if(profit > 0 ){
        cout<<"         Profit : $"<<profit
            <<" (Millions)"<<endl;
    }else{
        cout<<"           Loss : $"<<(-1 * profit)
            <<" (Millions)"<<endl;
    }
    cout<<"============================================\n";
};