/* 
 * File:   main.cpp
 * Author: Valentinno
 * Created on September 25, 2018, 11:26 AM
 * Purpose: who won the race
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    //Names of the 3 runners and their times
    string name1, name2, name3;
    float time1,time2,time3;
    
    cout<<"Enter the name of runner #1:"<<endl;
    cin>>name1;
    cout<<"Enter the time of runner #1:"<<endl;
    cin>>time1;
    if (time1<0) {
        cout<<"Error! Time must be Positive"<<endl;
        exit(1);
    }
    cout<<"Enter the name of runner #2:"<<endl;
    cin>>name2;
    cout<<"Enter the time of runner #2:"<<endl;
    cin>>time2;
    if (time2<0) {
        cout<<"Error! Time must be Positive"<<endl;
        exit(1);
    }
    
    cout<<"Enter the name of runner #3:"<<endl;
    cin>>name3;
    cout<<"Enter the time of runner #3:"<<endl;
    cin>>time3;
    if (time3<0) {
        cout<<"Error! Time must be Positive"<<endl;
        exit(1);
    }
    
    
    //determine which place each runner took
    string place1,place2,place3;
    
    if (time1 < time2&& time1 < time3)
        place1 = "first";
    else if ((time1 < time2&& time1 > time3) ||
             (time1 > time2&& time1 < time3))
        place1 = "second";
    else place1 = "third";
    
    
    if (time2 < time1 && time2 < time3)
        place2 = "first";
    else if ((time2 < time1 && time2 > time3)||
            (time2 > time1 && time2 < time3))
        place2 = "second";
    else place2 = "third";
    
    
    if (time3 < time1 && time3 < time2)
        place3 = "first";
    else if ((time3 < time1 && time3 > time2) ||
            (time3 > time1 && time3 < time2))
        place3 = "second";
    else place3 = "third";
    

    //Output Located Here
    cout<< name1<<" came in "<<place1<<"."<<endl;
    cout<< name2<<" came in "<<place2<<"."<<endl;
    cout<< name3<<" came in "<<place3<<"."<<endl;
    //Exit
    return 0;
}

