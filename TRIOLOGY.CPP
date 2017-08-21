char *namen;
int qqqppp;
#include"FLASH.h"
#include"DQ.h"
#include"SB.h"
#include"SN.h"
#include"NG.h"


using namespace std;

int main()
{ char name[50];
//char ch='y';
int cg;
int play;
clrscr();
cout<<"Press enter if you dont't know or are unable to understand what to do next .";
cout<<"\nPress enter to continue .";
getch();
cout<<"\nPlease do not enter a character where I expect a number and vice versa . \n\n ";//Also in many places you might need to press enter twice for some action to be performed .
cout<<" \n\nSorry for current inconveniences might improve them in next versions .";
getch();
clrscr();
cout<<"HELLO \n \tWho are you ? ";
gets(name);
namen=name;
cout<<"That's a nice name ";
cout<<"\n";
getch();
cout<<"Hi , I am Animus ,a fully interactive VI designed to guide you to the right game .";
getch();
clrscr();
cout<<"Please tell me about your system .";
getch();
cout<<endl;
cout<<"\nPress 1 for slower devices ,0 for faster ones .";
qqqppp=getche();
//do
//{
do
{
cout<<endl;
cout<<"Please enter the correct choice:- \n1) Snake and Ladder\n2)Space Battle\n3)Dragon Quest\n4)Master Mind\t";
cin>>play;
getch();
}
while(play>4||play<1);
if(play==1)
{clrscr();SN_PL();}
if(play==2)
{clrscr();SB_PL();}
if(play==4)
{clrscr();NG_PL();}
if(play==3)
{
do
{
cout<<"Would you like to play a hack version with just boss battles and main sceenes or the complete game ?";
cout<<"\n1)Short version with just main battles .\n2)Complete version \nEnter your choice (1/2)\t";
cin>>cg;
getch();
}
while(cg!=1&&cg!=2);
clrscr();DQ_PL(cg);
}
/*clrscr();
cout<<"Would you like to play some thing else ?(y/n)";
cin>>ch;
}while(ch=='Y'||ch=='y');*/
return(0);
}



