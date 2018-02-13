//Code Review is for reviewing existing code and not to discuss what additional 
//features to add so I'm going to focus on reviewing what is there. 
//This should reduce the amount of existing code somewhat and make it less 
//daunting to add new functionality.
//Your functions and variables not always very well named. The name of a 
//variable or function should convey its purpose in a concise manner so that
//when reading the code it is immediately obvious what the intended purpose is.
//So for example:
//getNum should probably be named getRandomDieRoll
//The diceX methods should be named drawDieX
//You have tremendous amounts of code repetition. Programming is about
//efficiently solving //a problem in an automated way and you should also try 
//to apply this to the code your write. //One of the most important principles 
//is: DRY - Don't Repeat Yourself.
//Now let's see how we can start refactoring things
//First of all the switch blocks all have the same code so we can easily 
//extract those into a function:
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

void drawDieForRoll (int roll) 
    switch (roll) {
    
        case 1: drawDie1(); break;
        case 2: drawDie2(); break;
        case 3: drawDie3(); break;
        case 4: drawDie4(); break;
        case 5: drawDie5(); break;
        case 6: drawDie6(); break;
    }

}

//==========================================//
//Now we can simplify diceRoll to:
void diceRoll() {

int roll1=0;
int roll2=0;
int roll3=0;
int roll4=0;
int roll5=0;
char selection='y';
bool re1=' ';
bool re2=' ';
bool re3=' ';
bool re4=' ';
bool re5=' ';
char choice1=' ';
char choice2=' ';
char choice3=' ';
char choice4=' ';
char choice5=' ';
do{
cout<<"roll dice"<<endl;
roll1=getNum();
roll2=getNum();
roll3=getNum();
roll4=getNum();
roll5=getNum();

drawDieForRoll(roll1);
drawDieForRoll(roll2);
drawDieForRoll(roll3);
drawDieForRoll(roll4);
drawDieForRoll(roll5);

    cout<<"would you like to re-roll die 1 (y/n)"<<endl;
    cin>>choice1;
}
    if(choice1=='y')
    {
        re1=true;
    }
    if(re1=true)
    {
        roll1=getDie();     
    }//endif
    if(choice1=='n')
    {
        cout<<roll1;
    }


cout<<"would you like to re-roll die 2 (y/n)"<<endl;
cin>>choice2;
if(choice2=='y')
{
    re2=true;
}
    if(re2=true)
    {
    roll2=getNum();
    drawDieForRoll(roll2);
    }//endif

cout<<"would you like to re-roll die 3 (y/n)"<<endl;
cin>>choice3;
if(choice3=='y')
{
    re3=true;
}
    if(re3=true)
    {
    roll3=getNum();
    drawDieForRoll(roll3);
    }//endif

cout<<"would you like to re-roll die 4 (y/n)"<<endl;
cin>>choice4;
if(choice4=='y')
{
    re4=true;
}
    if(re4=true)
    {
    roll4=getNum();
    drawDieForRoll(roll4);
    }//endif

cout<<"would you like to re-roll die 5 (y/n)"<<endl;
cin>>choice5;
if(choice5=='y')
{
    re5=true;
}
    if(re5=true)
    {
    roll5=getNum();

    drawDieForRoll(roll5);
    }//endif

cin>>selection;
system("cls");
}while(selection=='y');

}

//==========================================//

//This reduced the function from 365 lines down to 100 lines, not bad.

//Now we can see that the block asking to re-roll die X are basically also all 
//the same except for the die number.
//Now let's store the value of the rolls in an array which holds one entry per
//die. And because 
//this is C++ we are going to use a std::vector<int>
//const int NumberOfDice = 5;
//std::vector<int> rolls(NumberOfDice);
//Now you can use a nice loop to roll your dice and diceRoll can be further 
//simplified into:
void diceRoll()
{
    char selection='y';

    const int NumberOfDice = 5;
    std::vector<int> rolls(NumberOfDice);

    do {
        cout << "roll dice" << endl;

        for (int dieIndex = 0; dieIndex < NumberOfDice; ++dieIndex)
        {
            int currentRoll = getRandomDieRoll();
            rolls[dieIndex] = currentRoll;

            drawDieForRoll(currentRoll);
        }

        for (int dieIndex = 0; dieIndex < NumberOfDice; ++dieIndex)
        {
            char choice = ' ';
            cout << "would you like to re-roll die " << (dieIndex + 1) 
                    << " (y/n)"<<endl;
            cin >> choice;
            if (choice == 'y')
            {
                int currentRoll = getRandomDieRoll();
                rolls[dieIndex] = currentRoll;
                drawDieForRoll(currentRoll);
            }
        }

        cin >> selection;
        system("cls");
    } while (selection == 'y');        
}

//==========================================//
//We just got rid of another 65 lines of code so we have removed 90% of all c
//ode from that //function retaining the same functionality.
//The next step is to simplify your drawing functions. If you want to draw 
//ASCII art then well, just draw it:
void drawDie1()
{
    cout << "*********\n";
           << "*       *\n";
           << "*   X   *\n";
           << "*       *\n";
           << "*********\n";
}

void drawDie2()
{
    cout << "*********\n";
         <<" *   X   *\n";
         << "*       *\n";
         <<" *   X   *\n";
         <<" *********\n";
}

void drawDie3()
{
    cout << "*********\n";
         << "*   X   *\n";
         <<" *   X   *\n";
         << "*   X   *\n";
         << "*********\n";
}

void drawDie4()
{
    cout << "*********\n";
         << "* X   X *\n";
         << "*       *\n";
         << "* X   X *\n";
         <<" *********\n";
}

void drawDie5()
{
    cout <<"*********\n";
         << "* X   X *\n";
         << "*   X   *\n";
         << "* X   X *\n";
         << "*********\n";
}

void drawDie6()
{
    cout << "*********\n";
         <<" * X    X *\n";
         <<" * X    X *\n";
         << "* X X X *\n";
         << "* X    X *\n";
         << "*********\n";
}

return 0;




//==========================================//
//These changes will be removing another 130 lines of code and make it much 
//nicer to read as //well
//Will all of the above the code is now about 80-90% shorter than before and 
//it should be much //easier to handle and add new functionality.
//Disclaimer: I haven't compiled it so there might be the one or other typo 
//hidden but hopefully //you should be able to get it to work.