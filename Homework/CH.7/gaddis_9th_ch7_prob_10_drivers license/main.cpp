/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on November 25, 2018 09:25AM
 * Purpose:  drivers license test
 */


//System Libraries
#include <iostream>

using namespace std; 

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
  char Corect_Ansr[20] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
  char user_Ansr[20];
  int num_Cor = 0;

  cout << "Enter answer A/B/C/D for each 20 questions. Case Sensetive" << endl;
  for (int i = 0; i < 20; i++) 
  {
    cout << (i+1) << ".";
    cin >> user_Ansr[i];
     while ( user_Ansr[i] != 'A' || user_Ansr[i] != 'B' || user_Ansr[i] != 'C' || user_Ansr[i] != 'D')
               {
                 cout << "Please enter A, B, C, or D as answers please try again.\n"
                     << (i+1) << ". ";
                      cin >> user_Ansr[i];
                }
  }

  for (int i = 0; i < 20; i++) {
    if (user_Ansr[i] == Corect_Ansr[i]) 
    {
      num_Cor++;
    }
  }

  num_Cor >= 15 ? cout << "You pass!" : cout << "You failed";

  return 0;
}
    
    //Initial Variables
   
    //Map/Process Inputs to Outputs

    //Display Outputs
    
    //Exit program!
