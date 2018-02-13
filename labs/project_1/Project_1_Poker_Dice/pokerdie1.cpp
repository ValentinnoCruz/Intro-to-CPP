#include <iostream>  //Input/Output Library
#include <ctime>     //Time Library
#include <cstdlib>   //Random number Library
#include <iomanip>   //Formatting Library
#include <cstring>   //Strin Library
#include <cmath>     //Math Library
#include <fstream>   //File Stream Operator

int main()
{
    int x;
    int y;
    int count = 0;
    string com = "nope";
    int apply = 0;
    int points = 0;
    int round = 0;
    
    int roll1 = 1;
    int roll2 = 1;
    int roll3 = 1;
    int roll4 = 1;
    int roll5 = 1;
    
    int one;
    int two;
    int three;
    int four;
    int five;
    
    int ones=0;
    int twos=0;
    int threes=0;
    int fours=0;
    int fives=0;
    int sixes=0;
    int toak=0;
    int foak=0;
    int fullhouse=0;
    int small=0;
    int large=0;
    int extra=0;
    int yahtzee=0;
    int total=0;
    
    string onepic = "\n ------- \n|       |\n|       |\n|   o   |\n|       |\n|       |\n ------- \t";
    string twopic = "\n ------- \n|       |\n|    o  |\n|       |\n|  o    |\n|       |\n ------- \t";
    string thrpic = "\n ------- \n|       |\n|    o  |\n|   o   |\n|  o    |\n|       |\n ------- \t";
    string foupic = "\n ------- \n|       |\n|  o o  |\n|       |\n|  o o  |\n|       |\n ------- \t";
    string fivpic = "\n ------- \n|       |\n|  o o  |\n|   o   |\n|  o o  |\n|       |\n ------- \t";
    string sixpic = "\n ------- \n|       |\n|  o o  |\n|  o o  |\n|  o o  |\n|       |\n ------- \t";
    
    
    while(round!=13)
    {
        count++;
    srand (time(NULL));
        
        if(roll1==1)
        {
            for(int i=0;i<30;i++)
            {
                x=rand();
                if(i==25)
                {
                    one=x%6+1;
                }    
            }
        }
        
        if(roll2==1)
        {
            for(int i=0;i<30;i++)
            {
                x=rand();
                if(i==25)
                {
                    two=x%6+1;
                }    
            }
        }
        
        if(roll3==1)
        {
            for(int i=0;i<30;i++)
            {
                x=rand();
                if(i==25)
                {
                    three=x%6+1;
                }    
            }
        }
        
        if(roll4==1)
        {
            for(int i=0;i<30;i++)
            {
                x=rand();
                if(i==25)
                {
                    four=x%6+1;
                }    
            }
        }
        
        if(roll5==1)
        {
            for(int i=0;i<30;i++)
            {
                x=rand();
                if(i==25)
                {
                    five=x%6+1;
                }    
            }
        }
    
        
        
        if(one==1)
            cout<<onepic;
        else if(one==2)
            cout<<twopic;
        else if(one==3)
            cout<<thrpic;
        else if(one==4)
            cout<<foupic;
        else if(one==5)
            cout<<fivpic;
        else if(one==6)
            cout<<sixpic;
        if(roll1==0)
            cout<<"HELD";
        cout<<endl;
        if(two==1)
            cout<<onepic;
        else if(two==2)
            cout<<twopic;
        else if(two==3)
            cout<<thrpic;
        else if(two==4)
            cout<<foupic;
        else if(two==5)
            cout<<fivpic;
        else if(two==6)
            cout<<sixpic;
        if(roll2==0)
            cout<<"HELD";
        cout<<endl;
        if(three==1)
            cout<<onepic;
        else if(three==2)
            cout<<twopic;
        else if(three==3)
            cout<<thrpic;
        else if(three==4)
            cout<<foupic;
        else if(three==5)
            cout<<fivpic;
        else if(three==6)
            cout<<sixpic;
        if(roll3==0)
            cout<<"HELD";
        cout<<endl;
        if(four==1)
            cout<<onepic;
        else if(four==2)
            cout<<twopic;
        else if(four==3)
            cout<<thrpic;
        else if(four==4)
            cout<<foupic;
        else if(four==5)
            cout<<fivpic;
        else if(four==6)
            cout<<sixpic;
        if(roll4==0)
            cout<<"HELD";
        cout<<endl;
        if(five==1)
            cout<<onepic;
        else if(five==2)
            cout<<twopic;
        else if(five==3)
            cout<<thrpic;
        else if(five==4)
            cout<<foupic;
        else if(five==5)
            cout<<fivpic;
        else if(five==6)
            cout<<sixpic;
        if(roll5==0)
            cout<<"HELD";
        cout<<endl;   
        
        if(count==3)
            com="roll";
        cout<<endl;
        while(com!="roll")
        {
            cout<<"Command: ";
            cin>>com;
            if(com=="hold1")
                roll1=0;
            if(com=="hold2")
                roll2=0;
            if(com=="hold3")
                roll3=0;
            if(com=="hold4")
                roll4=0;
            if(com=="hold5")
                roll5=0;
            if(com=="unhold1")
                roll1=1;
            if(com=="unhold2")
                roll2=1;
            if(com=="unhold3")
                roll3=1;
            if(com=="unhold4")
                roll4=1;
            if(com=="unhold5")
                roll5=1;
            if(com=="holdall")
            {
                roll1=0;
                roll2=0;
                roll3=0;
                roll4=0;
                roll5=0;
            }
            if(com=="unholdall")
            {
                roll1=1;
                roll2=1;
                roll3=1;
                roll4=1;
                roll5=1;
            }
        }
        com="nope";
        
        
        if(count==3)
        {
            count=0;
            cout<<"\n1) 1s: "<<ones<<"\n2) 2s: "<<twos<<"\n3) 3s: "<<threes<<"\n4) 4s: "<<fours<<"\n5) 5s: "<<fives<<"\n6) 6s: "<<sixes<<"\n7) 3-of-a-kind: "<<toak<<"\n8) 4-of-a-kind: "<<foak<<"\n9) full house: "<<fullhouse<<"\n10) small straight: "<<small<<"\n11) large straight: "<<large<<"\n12) extra: "<<extra<<"\n13) YAHTZEE: "<<yahtzee<<"\n\nTotal: "<<total;
            cout<<"\n\nChoose where to apply your points: ";
            cin>>apply;
            cout<<"Count points: ";
            cin>>points;
            
            if(apply==1)
                ones+=points;
            if(apply==2)
                twos+=points;
            if(apply==3)
                threes+=points;
            if(apply==4)
                fours+=points;
            if(apply==5)
                fives+=points;
            if(apply==6)
                sixes+=points;
            if(apply==7)
                toak+=points;
            if(apply==8)
                foak+=points;
            if(apply==9)
                fullhouse+=points;
            if(apply==10)
                small+=points;
            if(apply==11)
                large+=points;
            if(apply==12)
                extra+=points;
            if(apply==13)
                yahtzee+=points;
            
            
            
            
            roll1=1;
            roll2=1;
            roll3=1;
            roll4=1;
            roll5=1;
            
            round++;
            
            total=ones+twos+threes+fours+fives+sixes+toak+foak+fullhouse+small+large+extra+yahtzee;
        }
          
    }
    
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n1) 1s: "
            <<ones<<"\n2) 2s: "<<twos<<"\n3) 3s: "<<threes<<"\n4) 4s: "<<fours<<"\n5) 5s: "<<fives<<"\n6) 6s: "
            <<sixes<<"\n7) 3-of-a-kind: "<<toak<<"\n8) 4-of-a-kind: "<<foak<<"\n9) full house: "<<fullhouse
            <<"\n10) small straight: "<<small<<"\n11) large straight: "<<large<<"\n12) extra: "<<extra
            <<"\n13) YAHTZEE: "<<yahtzee<<"\n\nTotal: "<<total<<"\n\nGame Over!!! :D\n\n";     
    keep_window_open();

}