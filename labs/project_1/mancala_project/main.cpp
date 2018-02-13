

#include <iostream>
#include <string>


using namespace std;

/*
RULES FOR PLAYING 'MANCALA'

* The point of the game is get as much stones in your mancala(or store).
* Player 1's Mancala is on the left and player 2's Mancala is on the right
* Both players have 4 pits, and one Mancala.Each pit has 4 stones which amounts
* to 16 stones for each player, 


* During a turn, a player grabs all of the stones in a pit on their side and 
* drops them, one by one on each pit in a counter-clockwise direction. 
* Players MAY place stones in their OWN mancala(it too counts as a pit), but 
* They MUST skip over their opponent's mancala. Players MAY place stones in
* pits on their opponent's side. This continues until the player has no more 
* stones in his hand. It is then their opponents turn.

* TRICKS: IF, when dropping stones into the pits, & drop a stone into your own 
* mancala, & that is the LAST stone in your hand, then you get to go again.
* IF, when dropping stones into holes, you drop a stone into a hole that was 
* previously empty, AND the hole is on your side, AND that was the last stone 
* in your hand, you take all of the stones in the hole directly above, 
* and place them into your mancala.

* STRATEGIES: On your first turn (and if you're going first), play the 
* hole that is five holes away from your mancala. That way, the last stone you 
* place will land in your mancala, and you get a free turn. After using your 
* second turn, if your opponent plays a hole that is two or one hole(s) away 
* from their mancala, play the hole that is six holes away from your mancala. 
* You get another free turn!
*/

//Array to hold vales in pits, and score
void displayboard(int boardvalue[14], int score[2]);
void makemove(int boardvalue[14],int &player, int score[2]);
void winner(int score[2]);


int main()
{ //Arrays to hold values for pits, and overall board value
int finished[2] = {4,4};
int score[2] = {0};
int boardvalue[14];
int player = 0;
for (int i = 0; i < 14; i ++)
{
boardvalue[i] = 4;
}
boardvalue[0] = 0;
boardvalue[7] = 0;


while (finished[0] > 0 && finished[1] > 0)
{
displayboard(boardvalue, score);
finished[0] = 0;
finished[1] = 0;
//For loop to make a move
for (int i = 1; i < 14; i ++)
{
if((i >0 && i <7) && boardvalue[i] > 0 )
finished[0]++;
if((i >7 && i <13) && boardvalue[i] > 0 )
finished[1]++;
}
makemove(boardvalue, player, score);
player = !player;
}
}

void displayboard(int boardvalue[14], int score[2])
{
cout << "Player 1 : " << score[0] << " " << "Player 2 : " 
<< score[1] << endl;
cout << endl << "\tA\tB\tC\tD\tE\tF\n\t";
for (int i = 1; i < 7; i ++)
cout << boardvalue[i] << "\t";
cout << endl << " " << boardvalue[0] << "\t\t\t\t\t\t " 
<< boardvalue[7] << endl << "\t";
for (int i = 8; i < 14; i ++)
cout << boardvalue[i] << "\t";
cout << endl << "\tG\tH\tI\tJ\tK\tL";

cout << endl << endl << endl;
}

void makemove(int boardvalue[14],int &player, int score[2])
{
string Players[2] = {"Player 1","Player 2"};
bool ok;
char col;
int stones, x, pit, start_pit;
cout << Players[player] << "'s turn!" << endl;


do
{
ok = false;
cout << endl << "Which column do you want to pick from ? (";
cout<<(player==0 ? " A to F " : " G to L ");
cout << ") _\b";
cin >> col;
col = toupper(col);
if(((col >= 'A' && col <= 'F') && player == 0) && 
boardvalue[col-64] > 0 || ((col >= 'G' && col <= 'L') 
&& player == 1) && boardvalue[col-63] > 0)
ok = true;
else
cout << endl << "There are NO stones in that pit."<<endl;

if(((col>='A'&&col<='F')&&player == 1) || ((col >= 'G' && col <= 'L') 
&& player == 0))
cout << "Those stones don't belong to you. Try again.." << endl;
if(col > 'L')
cout << "ERROR: Location does not exist" << endl;
}while (!ok);
//while (((col <'A' || col > 'F') && player == 0) && 
//boardvalue[col-64] == 0 || ((col <'G' || col > 'L') && 
//player == 1) && boardvalue[col-63] == 0)
if(col-64 < 7)
{
stones = boardvalue[col-64];
boardvalue[col-64] = 0;
pit = (col-64)-1;
start_pit = (col-64);
if(pit<0)
pit = 8;
}
else
{
stones = boardvalue[col-63];
boardvalue[col-63] = 0;
pit = (col-63)+1;
start_pit = (col-63);
if(pit>13)
pit = 7;
}
cout << "Stones = " << stones << endl;

for(x = 0; x < stones; x++)
{
if(pit >= 0 && pit < 8 )
{
if(x < stones)
{

if(player == 1)
{
if(pit == 0)
{
pit = 8;
//boardvalue[pit]++;
//continue;

}
}
if(pit >= 0 && pit < 8 )
{
boardvalue[pit]++;
if(x+1 < stones)
{
pit--;
if (pit < 0)
pit = 8;
}
}
}
}

if(pit > 7 && pit < 14 )
{

if(x < stones)
{
if(player == 0)
{
if(pit+1 == 1)
{
pit = 6;
//boardvalue[pit]++;
//continue;
}
}
boardvalue[pit]++;
if(x+1 < stones)
{
pit++;
if(pit > 13)
pit = 7;
}
}
}
}

if(abs(pit-7 == start_pit) && boardvalue[start_pit] == 0 )
{
if(player == 0)
{
score[0]+= boardvalue[pit];
boardvalue[0]+= boardvalue[pit];
boardvalue[pit] = 0;
}
if(player == 1)
{
score[1]+= boardvalue[pit];
boardvalue[7]+= boardvalue[pit];
boardvalue[pit] = 0;
}
}
if(player == 1)
{
if(pit == 7 && x == stones)
{
cout << Players[player] << " has another turn!"<<endl;
player = !player;
}
}
if(player == 0)
{
if(pit == 0 && x == stones)
{
cout << Players[player] << " has another turn!"<<endl;
player = !player;
}
}

}
