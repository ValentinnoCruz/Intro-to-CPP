/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * Created on December 10th, 2018, 10:30 PM 
 * Purpose:  Poker Dice Project 2
 */

//System Libraries Here
#include <iostream>  //Input/Output Library
#include <ctime>     //Time Library
#include <cstdlib>   //Random number Library
#include <iomanip>   //Formatting Library
#include <cstring>   //Strin Library
#include <cmath>     //Math Library
#include <fstream>   //File Stream Operator
#include <string>	 // String library
using namespace std;

void print_J() {
	cout << "  ***********\n"
		<< "  *  ______ *\n"
		<< "  *     |   *\n"
		<< "  *     |   *\n"
		<< "  * |___|   *\n"
		<< "  ***********\n";
}
void print_Q() {
	cout << "  ***********\n"
		<< "  * ______  *\n"
		<< "  *|      | *\n"
		<< "  *|____\\_| *\n"
		<< "  *      \\  *\n"
		<< "  ***********\n";
}
void print_K() {
	cout << "  ***********\n"
		<< "  *   |  /  *\n"
		<< "  *   | /   *\n"
		<< "  *   | \\   *\n"
		<< "  *   |  \\  *\n"
		<< "  ***********\n";
}
void print_A() {
	cout << "  ***********\n"
		<< "  *   / \\   *\n"
		<< "  *  /___\\  *\n"
		<< "  * /     \\ *\n"
		<< "  */       \\*\n"
		<< "  ***********\n";
}
void print_H() {
	cout << "  ***********\n"
		<< "  * 9     9 *\n"
		<< "  * 9     9 *\n"
		<< "  * 9  9  9 *\n"
		<< "  * 9     9 *\n"
		<< "  ***********\n";
}
void print_M() {
	cout << "  ***********\n"
		<< "  *  x   x  *\n"
		<< "  *  x x x  *\n"
		<< "  *  x x x  *\n"
		<< "  *  x   x  *\n"
		<< "  ***********\n";
}
string getDie(int nLines) {
	//Declare variables
	fstream in;
	string die;
	//Initialize variables
	in.open("die.dat");
	//Look through file to find the random Die Value
	for (int line = 1; line <= nLines; line++) {
		in >> die;
	}
	//Close the file
	in.close();
	//Return the random Die

	return die;
}
void dice_again(char Die, char choice, bool re) {
	cin >> choice;

	// If user opts in to change die
	if (choice == 'y' || choice == 'Y') {
		do {
			Die = rand() % 6 + 1;  // generate a new die for die

			//Possible outcomes of Die     
			if (Die == 1) {
				print_H();
			}
			if (Die == 2) {
				print_M();
			}
			if (Die == 3) {
				print_J();
			}
			if (Die == 4) {
				print_Q();
			}
			if (Die == 5) {
				print_K();
			}
			if (Die == 6) {
				print_A();
			}
			else { re = false; }
		} while ((re) && (choice == 'y'));
	}
}
void input_choice(int no) {
	cout << fixed << setprecision(2) << showpoint << endl;
	cout << "     Do you want to Roll Die " << no;
	cout << "again? (y/n)";
}
void determine_possible(char Die, char re, int Num[]) {
	switch (Die) {                                                // If die 1 was not re-rolled its value would be determined here
	case 1: {
		if (re == false) Num[0] += 1; }break;
	case 2: {
		if (re == false) Num[1] += 1; } break;
	case 3: {
		if (re == false) Num[2] += 1; } break;
	case 4: {
		if (re == false) Num[3] += 1; }break;
	case 5: {
		if (re == false) Num[4] += 1; } break;
	case 6: {
		if (re == false) Num[5] += 1; } break;
	}
}

//Program Execution Begins Here
int main() {
	//Initialize the random number function
	srand(static_cast<unsigned int>(time(0)));

	//Test out the Dice Shuffle and pick 5 unique Die & Declare variables
	string name;            //String names for Die
	float nHands = 1;                                    //Number of tosses
	int NumOF[6];
	unsigned char Die[5];
	bool TwoOAK = false;                            //Two of a kind boolean statement
	bool ThreeOAK = false;                         //Three of a kind boolean statement
	bool FourOAK = false;                          //Four of a kind boolean statement
	bool FiveOAK = false;                           //Five of a kind boolean statement
	bool TwoPairs = false;                          //Two pairs boolean statement
	bool Str8 = false;                                 //Straight boolean statement
	bool FullH = false;                                //Full House boolean statement 
	bool re[5];
	char choice[5];

	for (int i = 0; i < 5; i++)	{
		re[i] = false;
	}
	for (int i = 0; i < 6; i++) {
		NumOF[i] = 0;
	}

	// Welcome Header
	cout << "   ____             __                                    ____                         " << endl;
	cout << "  /\\  _`\\          /\\ \\                                /\\  _`\\     __                 " << endl;
	cout << "  \\ \\ \\L\\ \\  ___   \\ \\ \\/'\\       __    _ __           \\ \\ \\/\\ \\  /\\_\\     ___      __ " << endl;
	cout << "   \\ \\ ,__/ / __`\\  \\ \\ , <     /'__`\\ /\\`'__\\          \\ \\ \\ \\ \\ \\/\\ \\   /'___\\  /'__`\\ " << endl;
	cout << "    \\ \\ \\/ /\\ \\L\\ \\  \\ \\ \\\\`\\  /\\  __/ \\ \\ \\/            \\ \\ \\_\\ \\ \\ \\ \\ /\\ \\__/ /\\  __/  " << endl;
	cout << "     \\ \\_\\ \\ \\____/   \\ \\_\\ \\_\\\\ \\____\\ \\ \\_\\             \\ \\____/  \\ \\_\\\\ \\____\\\\ \\____\\ " << endl;
	cout << "      \\/_/  \\/___/     \\/_/\\/_/ \\/____/  \\/_/              \\/___/    \\/_/ \\/____/ \\/____/ " << endl;
	cout << "" << endl;

	//Rules
	cout << "   ==========================================================" << endl;
	cout << setw(30);
	cout << " Rules" << endl;
	cout << "   ==========================================================" << endl;
	cout << "       A Player takes 5 dice with the values of " << endl;
	cout << "       (Ace, King, Queen, Jack, 10, & 9." << endl;
	cout << "       After each roll players can set aside " << endl;
	cout << "       one or more dice and then roll remaining dice. " << endl;
	cout << "       Players may choose to not set aside any dice " << endl;
	cout << "       and roll all five dice in second as well as third roll." << endl;
	cout << "" << endl;
	cout << "" << endl;

	//Winning Hands
	cout << "   ==========================================================" << endl;
	cout << "   Poker hands sequence from highest to lowest as following:" << endl;
	cout << "   ==========================================================" << endl;
	cout << "       -Five of a kind – All 5 dice showing the same #" << endl;
	cout << "       -Four of a kind – 4 dice showing the same #" << endl;
	cout << "       -Full house – 3 dice of the same # and 2 dice w/ the same #" << endl;
	cout << "       -Straight – Five sequential dice(9-10-J-Q-K or 10-J-Q-K-A)" << endl;
	cout << "       -Three of a kind – 4 dice showing the same #" << endl;
	cout << "       -Two pairs – 2 dice pairs showing same #" << endl;
	cout << "       -Two of a Kind – 2 dice showing same #" << endl;
	cout << "" << endl;
	cout << "" << endl;

	//Initiate Game
	cout << "       Please Enter Your Name To Begin:  ";
	cin >> name;
	cout << "       Your initial Roll is" << endl;

	//Randomly generated value applied to individual die
	for (int hand = 1; hand <= nHands; hand++) {
		// declare the dice 
		for (int i = 0; i < 5; i++)
		{
			Die[i] = rand() % 6 + 1;
		}

		for (int i = 0; i<5; i++)
		{
			//Output the 5 unique dice
			if (Die[i] == 1) {                 //symbol applied to die with given value
				print_H();
			}
			if (Die[i] == 2) {                 //symbol applied to die with given value
				print_M();
			}
			if (Die[i] == 3) {                 //symbol applied to die with given value
				print_J();
			}
			if (Die[i] == 4) {                 //symbol applied to die with given value
				print_Q();
			}
			if (Die[i] == 5) {                 //symbol applied to die with given value
				print_K();
			}
			if (Die[i] == 6) {                 //symbol applied to die with given value
				print_A();
			}
		}

		for (int i = 0; i < 5; i++)
		{
			input_choice(i + 1);
			dice_again(Die[i], choice[i], re[i]);
		}

		//Determine the possible hands of tossed dice if user did not choose to Re-Roll
		for (int i = 0; i < 5; i++)
		{
			determine_possible(Die[i], re[i], NumOF);
		}

		// Roll Results
		cout << "   =======================================" << endl;
		cout << setw(27);
		cout << "-Dice Results-" << right << endl;
		cout << "   =======================================" << endl;
		cout << "       You Rolled   " << NumOF[0] << "    9's" << endl;                         // sum of 9's rolled or Re-rolled
		cout << "       You Rolled   " << NumOF[1] << "    10's" << endl;                       // sum of 10's rolled or Re-rolled
		cout << "       You Rolled   " << NumOF[2] << "    Jack's" << endl;                   // sum of jack's rolled or Re-rolled
		cout << "       You Rolled   " << NumOF[3] << "    Queen's" << endl;                // sum of queen's rolled or Re-rolled
		cout << "       You Rolled   " << NumOF[4] << "    King's" << endl;                   // sum of king's rolled or Re-rolled
		cout << "       You Rolled   " << NumOF[5] << "    Ace's" << endl;                    // sum of ace's rolled or Re-rolled
		cout << "   =======================================" << endl;
		cout << setw(27);
		cout << "-Winning Hand-" << right << endl;
		cout << "   =======================================" << endl;


		//Determine if a five of a kind was rolled  
		if (NumOF[0] == 5 || NumOF[1] == 5 || NumOF[2] == 5 || NumOF[3] == 5 ||
			NumOF[4] == 5 || NumOF[5] == 5)
		{
			cout << setw(13);
			cout << name << "Rolled five of a kind!!!!!" << right << endl;
			FiveOAK = true;
		}

		//Determine how many four of a kinds are in given 
		if (((NumOF[0] == 4) || (NumOF[1] == 4) || (NumOF[2] == 4) || (NumOF[3] == 4)
			|| (NumOF[4] == 4) || (NumOF[5] == 4)) && (FiveOAK == false))
		{
			cout << setw(13);
			cout << name << "Rolled four of a kind!!!!" << right << endl;
			FourOAK = true;
		}

		//Determine if a straight was rolled
		if (((NumOF[0] >= 1 && NumOF[0] < 6) && (NumOF[1] >= 1 && NumOF[1] < 6) &&
			(NumOF[2] >= 1 && NumOF[2] < 6) && (NumOF[3] >= 1 && NumOF[3] < 6) &&
			(NumOF[4] >= 1 && NumOF[4] < 6)) && (NumOF[0] != NumOF[1] && NumOF[1] !=
			NumOF[2] && NumOF[2] != NumOF[3] && NumOF[3] != NumOF[4]))
		{
			cout << setw(13);
			cout << name << " Rolled a straight!!!" << right << endl;
		}
		else if (((NumOF[0] > 1 && NumOF[0] <= 6) && (NumOF[1] > 1 && NumOF[1] <= 6)
			&& (NumOF[2] > 1 && NumOF[2] <= 6) && (NumOF[3] > 1 && NumOF[3] <= 6) &&
			(NumOF[4] > 1 && NumOF[4] <= 6)) && (NumOF[0] != NumOF[1] && NumOF[1] !=
			NumOF[2] && NumOF[2] != NumOF[3] && NumOF[3] != NumOF[4]))
		{
			cout << setw(13);
			cout << name << " Rolled a straight!!!!" << right << endl;
		}

		//Determine if a full house was rolled
		if ((TwoOAK == true || TwoPairs == true) && (ThreeOAK == true))
		{
			cout << setw(13);
			cout << name << " Rolled a full house!!!!" << right << endl;
			FullH = true;
		}

		//Determine if a three of a kind was rolled 
		if ((NumOF[0] == 3 || NumOF[1] == 3 || NumOF[2] == 3 || NumOF[3] == 3 ||
			NumOF[4] == 3 || NumOF[5] == 3)
			&& (FiveOAK == false && FourOAK == false))
		{
			cout << setw(13);
			cout << name << " Rolled three of a kind!!!" << right << endl;
			ThreeOAK = true;
		}

		//Determine if two pairs was rolled
		if (((NumOF[0] == 2) && (NumOF[1] == 2 || NumOF[2] == 2 || NumOF[3] == 2 ||
			NumOF[4] == 2 || NumOF[5] == 2)) && (FourOAK == false
			&& ThreeOAK == false && FiveOAK == false && FullH == false))
		{
			cout << setw(13);
			cout << name << " Rolled two pairs!!" << right << endl;
			TwoPairs = true;
		}

		//Determine if two pairs was rolled
		if (((NumOF[1] == 2) && (NumOF[2] == 2 || NumOF[3] == 2 || NumOF[4] == 2 || NumOF[5] == 2))
			&& (FourOAK == false && ThreeOAK == false
			&& FiveOAK == false && FullH == false))
		{
			cout << setw(13);
			cout << name << " Rolled two pairs!!" << right << endl;
			TwoPairs = true;
		}

		//Determine if two pairs was rolled
		if (((NumOF[2] == 2) && (NumOF[3] == 2 || NumOF[4] == 2 || NumOF[5] == 2))
			&& (FourOAK == false && ThreeOAK == false
			&& FiveOAK == false && FullH == false))
		{
			cout << setw(13);
			cout << name << " Rolled two pairs!!!" << right << endl;
			TwoPairs = true;
		}

		//Determine if two pairs was rolled
		if (((NumOF[3] == 2) && (NumOF[4] == 2 || NumOF[5] == 2))
			&& (FourOAK == false && ThreeOAK == false
			&& FiveOAK == false && FullH == false))
		{
			cout << setw(13);
			cout << name << " Rolled two pairs!!!" << right << endl;
			TwoPairs = true;
		}
		if (((NumOF[4] == 2) && (NumOF[5] == 2)) && (FourOAK == false
			&& ThreeOAK == false && FiveOAK == false && FullH == false))
		{
			cout << setw(13);
			cout << name << " Rolled two pairs!!!" << right << endl;
			TwoPairs = true;
		}

		//Determine how many two of a kinds are in given hand  
		if ((NumOF[0] == 2 || NumOF[1] == 2 || NumOF[2] == 2 ||
			NumOF[3] == 2 || NumOF[4] == 2 || NumOF[5] == 2)
			&& (TwoPairs == false))
		{
			cout << setw(13);
			cout << name << " Rolled two of a kind!!" << right << endl;
			TwoOAK = true;
		}
	}
       return 0;
	system("pause>null");
}

