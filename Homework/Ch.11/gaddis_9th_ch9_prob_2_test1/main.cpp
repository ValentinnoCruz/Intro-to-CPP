/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on December 07, 2018 11:14AM
 * Purpose:  test score 1
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; 

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
// Function prototypes
void getData(double *, int);
void selectionSort(double *, int);
double getAverage(double *, int);
void displayData(double *, int, double);

//Execution Begins Here!
int main(int argc, char** argv) {()
{
	double *Test,	// To dynamically allocate an array
                    Average;		// To hold the average of the scores
	int Scores;		// To hold number of scores


	// Get number of scores
	cout << "How many scores do you have to average? ";
	cin  >> Scores;

	// Dynamically allocate an array larger enough
	// to hold the user-defined number of scores
	Test = new double[Scores];	// Allocate mem
	getData(Test, Scores);
	selectionSort(Test, Scores);
	Average = getAverage(Test, Scores);
	displayData(Test, Scores, Average);
	return 0;
}

void getData(double *Test, int Scores)
{
	cout << "Enter each of the scores.\n";
	for (int i = 0; i < Scores; i++)
                        {
                             do
                              {
                              cout << "Score #" << (i + 1) << ": ";
                               cin  >> *(Test + i);
                                    if (*(Test + i) < 0)
		    {
		     cout << "Scores must be greater than 0.\n"
		     << "Re-enter ";
		     }
	} while (*(Test + i) < 0);
        }
}

void selectionSort(double *Test, int Scores)
{
	int startscan, minIndex;
	double minValue;

	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;
		minValue = *(Test + startscan);
		for (int i = startscan + 1; i < Scores; i++)
		{
		      if (*(Test + i) < minValue)
			{
			minValue = *(Test + i);
			minIndex = i;
			}
		}
		*(Test + minIndex) = *(Test + startscan);
		*(Test + startscan) = minValue;
	}
} 

double getAverage(double *Test, int Scores)
{
	double Total;
	for (int i = 0; i < Scores; i++)
	{
	Total += *(Test + i);
	}
	return Total / Scores;
} 

void displayData(double *Test, int Scores, double Avg) 
{
	cout << "\n    Test scores\n";
	cout << "Number of scores: " << Scores << endl;
	cout << "Scores in ascending-order:\n";
	for (int i = 0; i < Scores; i++)
	{
	 cout << "#" << (i + 1) << ": " << *(Test + i) << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Average score: " << Avg << endl; 
}
