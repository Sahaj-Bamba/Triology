
using namespace std;
void conw();
char chow()
{
char ch;

do{
cout<<"\nEnter your choice ?(Y/N)";
cin>>ch;
getch();
if(ch=='N'||ch=='n'||ch=='y'||ch=='Y')
return ch;
else
cout<<"Please enter a correct choice . \n";
}
while(6);
}
void quitio()
{
char ch;
cout<<"\nAre you sure you want to stop playig and quit the game ?";
ch=chow();
if(ch=='Y'||ch=='y')
exit(0);
cout<<"\t\t OK ";
conw();
}
inline void conw()
{
cout<<"\n Press enter to continue ";
getch();
}

class fleet
{
public:
int no;
void fill (int tempnum)
{
no=tempnum;
}
};
fleet pc[5] , pb , sc[5] , sb;


int zzp[50],zzz=-1,controller=0,cntm=-1;
char winner;
int Max=0,playerfc=5,playerfb=1,sahajfb=1,sahajfc=5;
fleet scho[50];


void insio()
{
clrscr();
cout<<"\n\t\t\tINSTRUCTIONS\n";
cout<<"1) This is a number guessing game .\n";
cout<<"2) You can play it either in a 5X5 grid (25 numbers) or 5X10 grid (50 numbers) format .\n";
cout<<"3) You need to choose 5 numbers where you will keep your civillian fleets and 1 number where you will keep your battle squad .\n";
cout<<"4) I will do the same .\n";
cout<<"5) Then you will choose different numbers where you think i might have placed my fleet .\n";
cout<<"6) If you destroy either my battle squad or all of my civillian before i could do the same , you will win .\n";
cout<<"7) Be sure to enjoy the game .\n";
conw();
clrscr();
}
int check(int c,int d)
{
int f=1;
if(c>0 && c<=Max)
{
for(int e=0;e<d;e++)
{
if(pc[e].no==c)
{
cout<<"\nPlease enter a correct value .";
f=0;
return f;
}
}
return f;
}
else
{
cout<<"\nPlease enter a correct value .";
return 0;
}
}
void playerorg()
{
char ch;
do
{
clrscr();

cout<<"Now lets organise our fleets , but first choose the grid format-:";
cout<<"\n 1) Y for 5X5 (25 numbers) grid .";
cout<<"\n 2) N for 5X10 (50 numbers) grid .";
ch=chow();
if(ch=='Y'||ch=='y')
Max=25;
else
Max=50;
cout<<"\nNow choose the places where you will keep your civillian fleets -:\n";
cout<<"If you have thoroughly read the instructions and understand what i am talking about then press Y else press N ";
ch=chow();
if(ch=='n'||ch=='N')
insio();
}
while(ch=='n'||ch=='N');
int j;
int i;
for(i=0;i<5;i++)
{
cout<<"Enter the location of civillian fleet "<<i+1<<"\t";
cin>>j;
getch();
if(check (j,i))
pc[i].no=j;
else
i--;
}
do
{
cout<<"Now place your battle squad\t ";
cin>>j;
getch();
if(check(j,i))
{
pb.no=j;
break;
}
else
cout<<"Please enter a correct value or do not repeat the value\n ";
}
while(1);
conw();
}
void sahajorg()
{
randomize();
int k;
for(int i=0;i<5;i++)
{randomize();
k=random(Max)+1;
int f=1;
for(int e=0;e<i;e++)
{
f=1;
if(sc[e].no==k)
{
i--;
f=0;
break;
}
}
if(f==1)
{
sc[i].fill(k);
}
}
int f=1;
do
{
f=1;
k=random(Max)+1;
for(int e=0;e<5;e++)
if(sc[e].no==k)
{
f=0;
break;
}
if(f==1)
{
sb.fill(k);
break;
}
}
while(1);
cout<<"\nNow my formation is also ready .";
do
{
cout<<"\nAre you ready to start the real battle or would you like to see the instructions once again ?";
cout<<"\nFor looking at instructions once again press Y .";
char choi;
choi=chow();
if(choi=='Y'||choi=='y')
{
conw();
clrscr();
insio();
}
else
{
conw();
break;
}
}
while(1);
clrscr();
}
void playerplay(int n1)
{
int j=0;
int i=0;
for(i=0;i<5;i++)
{
if(n1==sc[i].no)
{
sahajfc--;
j=1;
cout<<"\nYou got my civillian fleet .";
}
}
if(n1==sb.no)
{
cout<<"\nMy battle squad is down";
sahajfb--;
j=1;
}
if(j==0)
cout<<"\nBetter luck next time .";
}
void result();
void checkerio()
{
if(sahajfc==0 || sahajfb==0)
{
winner='p';
cout<<"\nYou win";
}
else if (playerfc==0 || playerfb==0)
{
winner='s';
cout<<"\nYou loose";
}
result() ;
}
void display()
{
cout<<"\nMy civillian fleets\tMy battle squads\n\t"<<sahajfc<<"\t\t\t\t"<<sahajfb<<"\nYour civillian fleet"<<"\tYour battle squad\n\t"<<playerfc<<"\t\t\t\t"<<playerfb<<"\n";
}
void result()
{
if(winner=='s')
{
conw();
clrscr();
cout<<"Practice hard and come back latter when you are ready .\nHope next time your luck is with you ";
controller=1;
}
else if (winner=='p')
{
conw();
clrscr();
cout<<"You are great .\nHope i will give you a tougher battle next time ";
controller=1;
}
}
void sahajplay()
{
randomize();
int k=0;
int j;
int f=1 ;
randomize();
cntm++;
do
{
randomize();
j=random(Max)+1;
k++;
for(int i=0;i<cntm;i++)
if(j==scho[i].no)
f=0;
if(f)
break;
}
while(k<50);
scho[cntm].no=j;
cout<<"\nI am going to attack at   "<<j;
f=0;
for(int i=0;i<5;i++)
if(j==pc[i].no)
{
cout<<"\nI got your civilian fleet ";
f=1;
playerfc--;
}
if(j==pb.no)
{
cout<<"\nI got your battle fleet ";
playerfb--;
f=1;
}
if(f==0)
{
cout<<"\nMissed just by an inch ";
}
}
int game()
{
int j;
do
{
int f=0;
do
{
cout<<"\nIt is your turn \nEnter the place ( 1 to "<<Max<<" )to attack    ";
cin>>j;
getch();
f=0;
zzz++;
for(int i=0;i<zzz;i++)
if(j==zzp[i])
{
cout<<j<<" has already been destroyed by you . ";
zzz--;
f=1;
}
}while(f);
zzp[zzz]=j;
playerplay(j);
display();
checkerio();
if(controller)
return 0;
sahajplay();
display();
checkerio();
conw();
clrscr();
if(controller)
return 0;
}
while(1);
}
void endio()
{
clrscr();
cout<<"\nYou were really good .\n\nIt was an awesome game .\n\nLets fight again whenever you want .\n\nThankyou for playing .";
conw();
}
void game_over()
{
for(long int i=0;i<1000;i++)
{
cout<<"\n\n\n\n\n\n\t\tGAME \t OVER\n\n\n\t";
clrscr();
}
}

void SB_PL()
{

/*cout<<"WARING COMMANDER ";
cout<<nn;
delay(2000);
cout<<"The enemy has reached the perimeter and our defences has successfully blocked them for now but ...";
cout<<endl;
delay(4000);
cout<<"Soon a missile fell right next to the commanders fleet escaping just by a mile .";
cout<<endl;
delay(2000);
cout<<"Sir we are still vulnerable to their long ranged attcks .";
cout<<endl;
delay(2000);
cout<<"But we have our own long ranged weapons as well ";
cout<<endl;
delay(2000);
cout<<"Commander create a formation at the earliest .\n Safety of civillians is the top priority .";
cout<<endl;
delay(3000);*/
cout<<"You have successfully started space battle .\n ";
cout<<"Press enter to continue and have a good look at instructions .....";
getch();
clrscr();
insio();
playerorg();
sahajorg();
flash(10,"GAME BEGINS",qqqppp);
game();
flash(9,"GAME OVER",qqqppp);
endio();
}
