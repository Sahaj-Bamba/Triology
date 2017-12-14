
using namespace std;
void zcode1()
{
clrscr();
cout<<"\t\t\t\t\tCode Words ";
cout<<"\n\n  Leo       :-  You entered a correct digit but in wrong place ";
cout<<"\n\n  Phoenix   :-  You entered a correct digit in right place ";
cout<<"\n\n  Nemesis   :-  All digits are wrong ";
cout<<"\n\n  Zeus      :-  You got the right number ";
getch();
clrscr();
}
void NG_PL()
{
    int mainnum;
char chz;
int yn;
int guess=0;
int win=0;
int n;
int cr;
int a[3],b[3];
char c[3];
int i,j;
randomize();
clrscr();
cout<<"  Hello \n\n";
getch();
cout<<" Lets play a number guessing game in which i will think of a 3 digit number and you will try to guess it within 10 attempts .";
getch();
cout<<"\n\n Don't worry it ain't gonna be that tough as you are thinking .";
getch();
clrscr();
cout<<"\n\n After every incorrect attempt i will provide you some hint in code words .";
getch();
cout<<"\n\n So lets first learn about the meaning of these code words .";
getch();
zcode1();
do
{
guess=0;
win=0;
clrscr();
cout<<"\n I have thought of a number .";
n=random(900)+100;
a[0]=n%10;
a[1]=((n%100)-a[0])/10;
a[2]=n/100;
guess=0;
while(guess!=10&&win!=1)
{
clrscr();
yn=0;
cout<<"\n Now try guessing it :- ";
guess++;
cin>>mainnum;
//getch();
i=0;
while(i!=3)
{
c[i]=mainnum%10;
mainnum/=10;
b[i]=c[i];
i++;
}
cout<<endl;
yn=b[0]+b[1]*10+b[2]*100;
cr=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
if(b[i]==a[j])
{
cr++;
if(i==j)
cout<<" Phoenix ";
else
cout<<" Leo ";
}
if(cr==0)
cout<<" Nemesis ";
cout<<endl;
if(yn==n)
{
cout<<" Zeus ";
win=1;
}
char ch;
cout<<endl;
while(1)
{
getch();
if(guess<3)
{
cout<<" Hope you remember the meaning of our code words if not then press n else press y .";
do
{
cout<<"\nEnter your choice(y/n)";
cin>>ch;
getch();
}while(ch!='n'&&ch!='N'&&ch!='Y'&&ch!='y');
}
if(guess>3)
ch='y';
if(ch=='n'||ch=='N')
{
zcode1();
cr=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
if(b[i]==a[j])
{
cr++;
if(i==j)
cout<<" Phoenix ";
else
cout<<" Leo ";
}
if(cr==0)
cout<<" Nemesis ";
cout<<endl;
if(yn==n)
cout<<" Zeus ";
cout<<endl;
}
else
break;
}
}
if(win==1)
{
cout<<"\n Congratulation ";
getch();
cout<<"\n You completed the task in "<<guess<<" tries .";
getch();
cout<<"\n Would you like to play again with me to prove that it was not just luck .";
win=0;
}
else
cout<<"Nice try "<<"\n I had thought of "<<n<<"\n Would you like to play once again ? ";
cout<<endl;
do
{
cout<<"\n Enter your choice (y/n):- ";
cin>>chz;
getch();
}while(chz!='n'&&chz!='N'&&chz!='y'&&chz!='Y');
}while(chz=='y'||chz=='Y');
}
