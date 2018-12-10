/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on december 08, 2018 12:14PM
 * Purpose:  test 2
 */


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Data
{
string Name;
double Grade;
};

// Function prototypes
void getData(Data *, int);
void selectionSort(Data *, int);
double getAverage(Data *, int);
void displayData(Data *, int, double);

//Execution Begins Here!
int main()
{
	Data *Test;			// To dynamically allocate an array
	double Average;		// To hold the average of the scores
	int Scores;			// To hold number of scores

	// Get number of scores
	cout << "How many scores do you have to average? ";
	cin  >> Scores;
	// Dynamically allocate an array larger enough
	// to hold the user-defined number of scores
	Test = new Data[Scores];// Allocate memory
	getData(Test, Scores);
	selectionSort(Test, Scores);
	Average = getAverage(Test, Scores);
	displayData(Test, Scores, Average);
	delete [] Test;
	Test = 0;
	return 0;
}
void getData(Data *Test, int Scores)
{
	cout << "Enter the names and scores for each student.\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << "Student #" << (i + 1) << endl;
		cout << "   Name: ";
		cin.ignore();
		getline(cin, (Test + i)->Name);
		do
		{
			cout << "   Score :"; 
			cin  >> (Test + i)->Grade;

			if ((Test + i)->Grade < 0)
			{
				cout << "Scores must be greater than 0.\n"
				 << "Re-enter ";
			}
			cout << endl;
		} while ((Test + i)->Grade < 0);
	}
}

void selectionSort(Data *Test, int Scores)
{
	int startscan, minIndex;
	Data *minValue;
	for (startscan = 0; startscan < (Scores - 1); startscan++)
	{
		minIndex = startscan;
		*minValue = Test[startscan];
		for (int i = startscan + 1; i < Scores; i++)
		{
			if ((Test + i)->Grade < minValue->Grade)
			{
				*minValue = Test[i];
				minIndex = i;
			}

		}
		Test[minIndex] = Test[startscan];
		Test[startscan] = * minValue;
	}
} 

double getAverage(Data *Test, int Scores){
	double Total;
	for (int i = 0; i < Scores; i++)
	{
		Total += (Test + i)->Grade;
	}
	return Total / Scores;
} 
void displayData(Data *Test, int Scores, double Avg) 
{
	cout << "    Test scores\n";
	cout << "Number of scores: " << Scores << endl;
	cout << "Scores in ascending-order:\n";
	for (int i = 0; i < Scores; i++)
	{
		cout << (Test + i)->Name << ": " << (Test + i)->Grade << endl;
	}
	cout << fixed << showpoint << setprecision(2);
	cout << "Average of scores: " << Avg << endl; 
}