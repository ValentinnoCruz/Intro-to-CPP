/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on October 29, 2018 11:14AM
 * Purpose:  Median function
 */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes
double getMedian(int *, int);

//Execution Begins Here!
int main()
{
	const int SIZE = 5;
	int List[SIZE] = {1, 4, 6, 12, 17};
	int *pList = List;
	cout << "Median: " << getMedian(pList, SIZE) << endl;
	return 0;
}
double getMedian(int *array, int size)
{
	int mid = (size - 1) / 2;
	double med;
	if (size % 2 == 0)
	{
		med = (*(array + mid) + *(array + (mid + 1))) / 2;
	}
	else
		med = *(array + mid);
	return med;
}