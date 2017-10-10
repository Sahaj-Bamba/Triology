//#include <unistd.h>   //_getch
//#include <termios.h>  //_getch


using namespace std;


    

class MAP
{
public:
char e[10];
int PH;          //player health
int f;

protected:

int EN;           //event number
int r;                                                   // number of rows
int c;                                              // number of columns
int cr;                                            // current row
int cc;                                            // current column
char *grid;
char W,A,S,D;
char player;

void Create()
{
int i=0,j=0;
for(i=0;i<r*2+1;i++)
for(j=0;j<c*2+1;j++)
{
if(i%2==0)
{
if(j%2==0)
*(grid+(i*(c*2+1)+j))=197;                //197;
else
*(grid+(i*(c*2+1)+j))=196;                //196;
}
else
{
if(j%2!=0)
*(grid+(i*(c*2+1)+j))=' ';
else
*(grid+(i*(c*2+1)+j))=179;                    //179;
}
}
for(j=2;j<c*2+1;j+=2)
{
*(grid+(j))=194;                              //194;
*(grid+(r*2*(c*2+1))+j)=193;              //193;
}
for(i=2;i<r*2+1;i+=2)
{
*(grid+i*(c*2+1))=195;                     //195;
*(grid+((i+1)*(c*2+1)-1))=180;                //180;
}
*(grid+c*2)='¿';                          //191;
*(grid+(r*2)*(c*2+1))=192;              //192;
*(grid+(r*2+1)*(c*2+1)-1)=217;            //217;
*grid=218;
}

/*
void e1(){}        //goal
void e2(){;}        //invisible
void e3(){;}        //invisible
void e4(){;}        //invisible
void e5(){;}        //invisible
void e6(){;}
void e7(){;}
void e8(){;}
void e9(){;}
void e10(){}          //end
*/

public:

char rt(int a,int b)
{
    return(*(grid+(a*2-1)*(c*2+1)+b*2-1));
}
MAP():PH(1),r(1),c(1),W('w'),A('a'),S('s'),D('d')
{
f=0;
char *grid = new char[(r*2+1)*(c*2+1)];
Create();
cr=1;
cc=1;
//*(grid+(cr*2-1)*(c*2+1)+cc*2-1)='Û';
}

MAP(int R,int C):PH(1),r(R),c(C),W('w'),A('a'),S('s'),D('d')
{
f=0;
char *grid = new char[(r*2+1)*(c*2+1)];
Create();
cr=1;
cc=1;
//*(grid+(cr*2-1)*(c*2+1)+cc*2-1)='Û';
}

void Event_number(int y)
{
int EN=y;
}

void Player_health(int h)
{
PH=h;
}

void Special(char l[])
{
for(int i=0;i<EN;i++)
e[i]=l[i];
}

void Player(char P)
{
player=P;
}

void Position_player(int R,int C)
{
cr=R;
cc=C;
*(grid+(cr*2-1)*(c*2+1)+cc*2-1)=219;
}

void Display()
{
clrscr();
cout<<"\t\t\t";
for(int i=0;i<(r*2+1)*(c*2+1);i++)
{

if(*(grid+i)==e[0]||*(grid+i)==e[5]||*(grid+i)==e[2]||*(grid+i)==e[3]||*(grid+i)==e[4])
{
cout<<' ';
continue;
}
cout<<*(grid+i);
if(((i+1)%(c*2+1))==0)
cout<<"\n\t\t\t";
}
}

void HELP()
{
clrscr();
cout<<"\n\t\t\t\tNAVIGATION\n\n";
cout<<" Press "<<W<<" to move up .\n";
cout<<" Press "<<A<<" to move left .\n";
cout<<" Press "<<S<<" to move down .\n";
cout<<" Press "<<D<<" to move right .\n";
getch();
}

void Recontrols()
{
clrscr();
cout<<"\n";
cout<<"WARNING :- Please use only alphabets to set for navigation keys .";
cout<<" Press the key you would like to set to move up ";
W=getche();
cout<<"\n Now press the key to move down ";
S=getche();
cout<<"\n Now the key to move left ";
A=getche();
cout<<"\n Finally right ! right ! ";
D=getche();
clrscr();
}

void Resize(int R,int C)
{
/*clrscr();
cout<<" Enter the number of rows .";
cin>>r;
cout<<"\n Now enter the number of columns .";
cin>>c;*/
r=R;
c=C;
delete []grid;
grid=new char[(r*2+1)*(c*2+1)];
Create();
}

void Reposition(char ch,int R,int C)
{
*(grid+(R*2-1)*(c*2+1)+C*2-1)=ch;
}

void move()
{
*(grid+(cr*2-1)*(c*2+1)+cc*2-1)=' ';
char MOVE;
cin>>MOVE;
if(MOVE==W)
{
if(cr!=1)
cr-=1;
}
else if(MOVE==A)
{
if(cc!=1)
cc--;
}
else if(MOVE==S)
{
if(cr!=r)
cr++;
}
else if(MOVE==D)
{
if(cc!=c)
cc++;
}
else if(MOVE=='5')
HELP();
if(*((grid+(cr*2-1)*(c*2+1)+cc*2-1))!=' ')
{
//Event(*(grid+(cr*2-1)*(c*2+1)+cc*2-1));
if(*(grid+(cr*2-1)*(c*2+1)+cc*2-1)==e[1])
f=1;
else if(*(grid+(cr*2-1)*(c*2+1)+cc*2-1)==e[0])
f=10;
}
if(PH==0)
f=10;
*(grid+(cr*2-1)*(c*2+1)+cc*2-1)=219;           //219;
}

~MAP()
{
delete []grid;
}
};

