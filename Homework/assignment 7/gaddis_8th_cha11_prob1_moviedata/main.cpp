/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on dec 09, 2018 05:20PM
 * Purpose:  movie data
 * 
 */


//System Libraries
#include <iostream>
using namespace std;

struct Moviedata
{
char title[20];
char director[20];
int year_release;
int running_time;
};

void showdata(Moviedata);

int main()
{
	Moviedata movie1 = {"Casablanca", "Michael Curtiz", 1942, 102};
	Moviedata movie2 = {"Interstellar", "Christopher Nolan", 2014, 169};

	showdata(movie1);
	showdata(movie2);

return 0;
}

//definition of func.
void showdata (Moviedata filme)
{
	cout<<"the name of film is		:"<<filme.title<<endl;
	cout<<"the film director is		:"<<filme.director<<endl;
	cout<<"the film year released is       :"<<filme.year_release<<endl;
	cout<<"the film running time is        :"<<filme.running_time<<endl;
	cout<<"============================"<<endl;
}