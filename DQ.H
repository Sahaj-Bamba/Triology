//#include<iostream.h>
//#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
#include<string.h>
#include<fstream>

using namespace std;
void getches()
{
cout<<endl;
getch();
}

int mkoio;
int xqw=1;
int xyz=0;
int cnt=1;
int move;
int a=0;
int CNT=0;
int NE=4;
int NA=4;
int PA;
int i;
char* n;
int PQ=4;



void con();

char cho()
{
char ch;
do{
cout<<"\nEnter your choice ?(Y/N)";
cin>>ch;
getch();
getchar();
if(ch=='N'||ch=='n'||ch=='y'||ch=='Y')
return ch;
else
cout<<"Please enter a correct choice . \n";
}
while(6);
}

void quit()
{
char ch;
cout<<"\nAre you sure you want to stop playing and quit the game ?";
ch=cho();
if(ch=='Y'||ch=='y')
exit(0);
cout<<"\t\t OK ";
con();
}

inline void con()
{
cout<<endl;
getch();
}

void menu();
void charcs();

void DQ_PL(int mkio)
{
mkoio=mkio;
randomize();
n=namen;
clrscr();

flash(13,"Dragon Quest",qqqppp);
charcs();
menu();
}

class SP
{
public:
char name[20];
int cost;
int damage;
char target;
char type;
int heal;
void L(char na[],int co,int da,char ta,char tc,int h)
{
strcpy(name,na);
cost=co;
damage=da;
target=ta;
type=tc;
heal=h;
}
};

class ally
{
public:
int maxno[4];
int currno[4];
char name[20];
int spellno;
SP mspl[3];
void status()
{
cout<<endl;
puts(name);
cout<<"\t"<<currno[0]<<"   "<<currno[1]<<"   "<<currno[2]<<"   "<<currno[3];
}
void charname(char namep[20])
{
strcpy(name,namep);
}
void mn(int a,int b,int c,int d=0)
{
maxno[0]=currno[0]=a;
maxno[1]=currno[1]=b;
maxno[2]=currno[2]=c;
maxno[3]=currno[3]=d;
}
void spls();
};
void ally::spls()
{
cout<<"\nName\tCost";
for(int i=0;i<spellno;i++)
{
cout<<"\n ";
cout<<i+1;
cout<<") ";
puts(mspl[i].name);
cout<<"\t\t"<<mspl[i].cost;
}}


ally allies[4];
ally enemies[16];

class ENC
{
public:
int attack;
int health;
int defence;
void str(int t)
{
health=enemies[t].maxno[0];
attack=enemies[t].maxno[1];
defence=enemies[t].maxno[2];
}};
ENC enemenc[4];

void EST(int t)
{
getches();
cout<<"\nName\t Health ";
if(PQ==4)
for(int i=0;i<PQ;i++)
{
cout<<endl;
cout<<enemies[t].name<<++i<<"\t"<<enemenc[i].health;
i--;
}
else
{
cout<<endl<<enemies[t].name<<enemies[t].currno[0];
}}

void charcs()
{{
allies[0].spellno=1;
allies[1].spellno=1;
allies[2].spellno=0;
allies[3].spellno=1;
allies[0].charname(n);
allies[0].mn(100,100,90,70);
allies[1].charname("Anubius");
allies[1].mn(85,50,85,100);
allies[2].charname("Aris");
allies[2].mn(150,175,80,0);
allies[3].charname("Alice");
allies[3].mn(100,75,80,175);
}
{
allies[0].mspl[0].L("Revive",70,0,'b','h',500);
allies[0].mspl[1].L("Thunder Bolt",50,90,'a','z',0);
allies[0].mspl[2].L("Heal us all",80,0,'a','h',500);
allies[1].mspl[0].L("Snow storm",25,60,'a','z',0);
allies[1].mspl[1].L("Explodet",70,150,'a','z',0);
allies[1].mspl[2].L("Fire volt",200,600,'b','z',0);
allies[3].mspl[0].L("Heal us",30,0,'a','h',50);
allies[3].mspl[1].L("Sacrifice",150,1000,'q','z',0);
allies[3].mspl[2].L("Bikill",250,700,'a','z',0);
}
{
enemies[0].charname("Darth_Bear");
enemies[0].mn(200,70,25);
enemies[1].charname("Wear_wolf");
enemies[1].mn(250,100,30);
enemies[2].charname("Zombie");
enemies[2].mn(250,150,75);
enemies[3].charname("Mummy");
enemies[3].mn(300,160,80);
enemies[4].charname("Coral_snake");
enemies[4].mn(300,250,100);
enemies[5].charname("Electric_eel");
enemies[5].mn(500,210,110);
enemies[6].charname("Dragon");
enemies[6].mn(400,280,125);
enemies[7].charname("Phoenix");
enemies[7].mn(600,250,140);
enemies[8].charname("Harvester");
enemies[8].mn(400,300,150);
enemies[9].charname("Stone_hulk");
enemies[9].mn(500,250,200);
enemies[10].charname("Unbetable_Master");
enemies[10].mn(1500,150,50);
enemies[11].charname("Zurg");
enemies[11].mn(1600,200,100);
enemies[12].charname("Darkness");
enemies[12].mn(1800,300,200);
enemies[13].charname("Orochi");
enemies[13].mn(3000,300,200);
enemies[14].charname("Zoma");
enemies[14].mn(3000,500,200);
enemies[15].charname("Nemesis");
enemies[15].mn(30000,500,200);
}
}

void stat()
{
cout<<"\n        HEALTH   ATTACK   DEFENCE   MAGIC";
for(int i=0;i<4;i++)
allies[i].status();
con();
}

void all()
{
cout<<"\n        HEALTH   ATTACK   DEFENCE   MAGIC";
allies[0].status();
cout<<"\n";
puts(n);
cout<<" is the successor of ZEUS , the greatest hero of all time \nNow he must go on a quest to find his father , fight evil and save the world     with his friends ";
con();
clrscr();
cout<<"\n        HEALTH   ATTACK   DEFENCE   MAGIC";
allies[1].status();
cout<<"\n";
puts(allies[1].name);
cout<<" is the God of Mercury , Knowledge God. There is hardly anything which he doesn't know . His source of power is his knowledge . He can use various destructive spells on enemy but be sure his normal attack and defence is low .";
con();
clrscr();
cout<<"\n        HEALTH   ATTACK   DEFENCE   MAGIC";
allies[2].status();
cout<<"\n";
puts(allies[2].name);
cout<<" is your shield and sword . He is the God of Mars , War God . He is having great attack and defence power . His high health make him a worthy worrior and a useful friend .";
con();
clrscr();
cout<<"\n        HEALTH   ATTACK   DEFENCE   MAGIC";
allies[3].status();
cout<<"\n";
puts(allies[3].name);
cout<<" is the healer of your team . She is the goddess of Neptune , symbol of Purity and Light . Every time you or your team-mate is damaged she will be there to help you , but be sure she must be the most protected unit as without her your team is just like a canon with just one shot ";
con();
clrscr();
}

void enn()
{
cout<<"\n     HEALTH   ATTACK   DEFENCE   MAGIC";
enemies[10].status();
cout<<endl;
cout<<" She used to be ";
cout<<n;
cout<<"'s teacher but one day darkness consumed her and she was never seen again . \n NOTE:- She has never lost a single battle she had fought ";
getch();
clrscr();
cout<<"\n     HEALTH   ATTACK   DEFENCE   MAGIC";
enemies[11].status();
cout<<endl;
cout<<" Zurg the evil skeleton king resides in the darkest areas of the death zone .";
cout<<" He is the lord of undead .";
cout<<" \n STATUS:- Extremely dangerous , Kill on sight ";
getch();
clrscr();
cout<<"\n     HEALTH   ATTACK   DEFENCE   MAGIC";
enemies[13].status();
cout<<endl;
cout<<" Orochi the legendary eight headed serpent is the monster you would like to fight the least .";
cout<<" There are rumors that even one sight of him can turn you into statue .";
cout<<" He reside in the hottest part of fire zone .";
cout<<" \n STATUS:- Extremely dangerous , Kill on sight .";
getch();
clrscr();
cout<<"\n     HEALTH   ATTACK   DEFENCE   MAGIC";
enemies[14].status();
cout<<endl;
cout<<" Zoma is the son of legendary Nemesis and the leader of monsters .";
cout<<" He is believed to have captured your father and imprisoned him in his tower in the centre of hell .";
cout<<" \n STATUS:- Extremely dangerous , Kill on sight ";
cout<<endl;
getch();
clrscr();
cout<<"\t\t\tNEMESIS";
cout<<"\n\tSpeed = unknown \n\tSize = unknown \n\tHealth = Unknown \n\tAttack = unknown";
cout<<endl;
cout<<" Nemesis is the legendary God of Destruction himself .";
cout<<" He is the offspring of death and destruction .";
cout<<"\n Status:- Never engage in battle . Your only chance is hide and pray that it doesn't find you .";
getch();
clrscr();
}

void ins()
{
clrscr();
cout<<"\n\n\t\tINSTRUCTIONS";
cout<<"\n\n 1) This is an adventure game in which you must rescue your father and destroy  evil in order to restore peace to your kingdom .";
cout<<"\n 2) The game is designed on a 10 X 10 grid i.e. 1-100 .";
cout<<"\n 3) You will start from 0 and move randomly 1 to 4 steps .";
cout<<"\n 4) Each time you stop there is a 80% chance that you will be attacked by some  monsters , you must destroy them in order to proceed .";
cout<<"\n 5) While fighting you can choose to attack , use spell or to guard .";
cout<<"\n 6) In case of guard the character will recover some part of his health .";
cout<<"\n 7) The game has an auto save feature i.e. whenever you step on a multiple of 20 , your progress will be automatically saved .";
cout<<"\n 8) Be sure to enjoy the game ." ;
cout<<"\n 9) If screen halts press enter .";
con();
menu();
}

void almnac()
{
int ch;
do
{
cout<<"\n\n\t\t\tALMNAC";
cout<<"\n\n\t 1) ALLIES";
cout<<"\n\n\t 2) ENEMIES";
cout<<"\n\n\t 3) Go back to menu ";
cout<<"\n\t\t Enter your choice (1-3)  ";
cin>>ch;
getch();
clrscr();
}while(ch!=1 && ch!=2 && ch!=3);
if(ch==1)
all();
if(ch==2)
enn();
menu();
con();
}

void end();
void choiceoa(int ,int ,char);
void SB(int z)
{
PQ=1;
do
{
cout<<endl;
puts(enemies[z].name);
cout<<" attacked ";
do
{
PA=rand()%4;
}
while(allies[PA].currno[0]==0);
puts(allies[PA].name);
cout<<" and gave ";
int att=enemies[z].currno[1]-allies[PA].currno[2];
if(att<0)
att=0;
cout<<att;
cout<<" damage .";
cout<<"\n";
con();
allies[PA].currno[0]-=att;
if(allies[PA].currno[0]<0)
allies[PA].currno[0]=0;
clrscr();
if(allies[0].currno[0]==0)
{
clrscr();
flash(9,"You lost",qqqppp);
end();
}
EST(z);
getch();
clrscr();
for(i=0;i<NA;i++)
{
if(!(allies[i].currno[0]))
continue;
choiceoa(i,z,'l');
con();
clrscr();
}
stat();
getch();
clrscr();
}
while(allies[0].currno[0]!=0&&enemies[z].currno[0]!=0);
if(allies[0].currno[0]==0)
{
clrscr();
flash(9,"You lost",qqqppp);
end();
}
else
{
cout<<"\n Congratulation you  defeated ";
puts(enemies[z].name);
getch();
ofstream outfile("DQU.dat",ios::binary);
outfile<<cnt<<' '<<n;
}
}

void special1()
{
cnt++;
clrscr();
cout<<"\n\n ";
cout<<n;
cout<<":- Who is that ?  ,  Master ? ";
getch();
cout<<"\n Anubius:- What! The unbeatable master ? Yes she really is the one but something appears to be wrong .";
getch();
cout<<"\n Alice  :- Ya there is an evil aura surrounding her .";
getch();
cout<<"\n\n Unbeatable Master:- You will never get past me . Your quest ends here .";
con();
flash(6,"FIGHT",qqqppp);
SB(10);
{
cout<<"\nYou entered the death zone .";
cout<<endl;
getch();
cout<<n;
cout<<" found the stone of life .";
getch();
cout<<endl;
cout<<"Your team is healed and levelled up .";
getch();
clrscr();
allies[0].mn(150,150,120,100);
allies[1].mn(125,75,100,150);
allies[2].mn(200,250,150,0);
allies[3].mn(150,100,100,250);
stat();
cout<<endl;
cout<<" Neptune learnt sacrifice spell .";
allies[3].spellno++;
getch();
}
}

void special2()
{
cnt++;
clrscr();
cout<<"\n\n ";
cout<<n;
cout<<":- This place looks creepy where are we right now Anubius ?";
getch();
cout<<"\n Zurg:- You are right where you should be . This is the perfect place for your   death .";
getch();
cout<<"\n Anubius:- He is the Lord of Undead the legendary Skeleton King Zurg ";
con();
flash(6,"FIGHT",qqqppp);
SB(11);
cout<<"\nYou entered the water zone .";
cout<<endl;
getch();
cout<<n;
cout<<" found the Sage's Stone .";
getch();
cout<<endl;
cout<<n;
cout<<":- Anubius...";
cout<<endl;
getch();
cout<<"Anubius:- Yes , its the legendary stone which has ability to grant its weilder   the ultimate wish but no-one knows how to use it .";
getches();
cout<<n;
cout<<":- We will know soon enough .";
getches();
cout<<"Your team is healed and levelled up";
con();
clrscr();
allies[0].mn(250,225,150,120);
allies[1].mn(150,125,130,300);
allies[2].mn(250,300,200,0);
allies[3].mn(200,120,120,300);
stat();
allies[0].spellno++;
allies[1].spellno++;
cout<<"\n ";
cout<<n;
cout<<" learnt thunder bolt spell .";
getches();
cout<<"\n Anubius learnt explodet spell .";
getches();
}

void special3()
{
cnt++;
clrscr();
cout<<"\n\n ";
cout<<n;
cout<<":- What is that , a mirror .";
getch();
cout<<"\n ";
cout<<n;
cout<<" moved towards it .";
getches();
cout<<" Anubius:- Do not touch it , its the darkness mirrrr... ";
getch();
cout<<"\n Suddenly the mirror break and an evil aura emerged from it and took form of the greatest hero of midgard -  ";
getch();
cout<<n;
getch();
cout<<"  but an evil one .";
con();
flash(6,"FIGHT",qqqppp);
SB(12);
{
cout<<"\nYou entered the Fire zone .";
getches();
cout<<n;
cout<<" found the staff of rain .";
getches();
puts(n);
cout<<":- Anubius...";
getches();
cout<<"Anubius:- It is a part of the ancient 2 piece weapon used to destroy Nemesis ,   the god of destruction long ago .";
getches();
cout<<n;
cout<<":- Great but we will need the other piece as well ";
getches();
cout<<"Your team is healed and levelled up";
con();
clrscr();
allies[0].mn(350,300,180,140);
allies[1].mn(200,150,150,350);
allies[2].mn(300,350,225,0);
allies[3].mn(250,150,140,400);
stat();
cout<<n;
allies[0].spellno++;
cout<<" learnt Heal us all spell .";
getches();
cout<<" Anubius learnt firevolt spell .";
allies[1].spellno++;
getches();
cout<<" Neptune learnt bikill spell .";
allies[3].spellno++;
getches();
}}

void special4()
{
cnt++;
clrscr();
cout<<"\n\n ";
cout<<n;
cout<<":- What is that , a .....";
getches();
cout<<"Anubius:- Its the legendary 8 headed serpent Orochi .";
getches();
cout<<"Orochi:- Sshh  shssh sshsshs  shsshshshss  . Sshhhs s sshs sshh....";
getches();
cout<<n;
cout<<":- Sorry but none of us is a Parsel-mouth like Harry Potter .";
getches();
cout<<"Orochi:- This way leads only to my stomach go fast .";
getches();
cout<<n;
cout<<":- We will make another way from here .";
getches();
cout<<"Orochi:- We will see ";
con();
clrscr();
flash(6,"FIGHT",qqqppp);
SB(13);
getch();
clrscr();
puts(n);
cout<<" found the stones of sunlight .";
getches();
cout<<"Anubius:- Yes , its the second piece we now have both the pieces of the Rainbow Staff .";
getches();
cout<<n;
cout<<":- So now what happens . How to combine these .";
getches();
cout<<"Anubius:- The procedure has been lost a long time ago .";
cout<<" Only an old prophecy remains .";
con();
clrscr();
cout<<"When the invincible rise again ,\n And darkness befall .";
getches();
cout<<"When the good fall ,\n And light is lost .";
getches();
cout<<"Then a hero will stand ,\n  above all .";
getches();
cout<<"Combined with the powers ,\n of light and storm .";
getches();
cout<<"A rainbow staff ,\n will be formed .\n";
con();
clrscr();
cout<<n;
cout<<" what does that mean .";
getches();
cout<<"Anubius:- No one knows .";
getches();
cout<<n;
cout<<":- So we found a weapon which no one knows how to use ?";
getches();
cout<<"Anubius:- Well atleast we have something .";
getches();
cout<<n;
cout<<":- But its not enough .";
getches();
cout<<n;
cout<<":- We must act faster we are running out of time .";
getches();
cout<<"Your team is healed and levelled up";
con();
clrscr();
allies[0].mn(450,400,220,200);
allies[1].mn(250,200,175,400);
allies[2].mn(400,450,275,0);
allies[3].mn(340,175,150,500);
stat();
con();
clrscr();
}

void gded();

void special5()
{
cnt++;
cout<<"Anubius:- Now this is it . We have reached the demon tower and tomorrow we will fight Zoma and save your father . But you must rest for now .";
getches();
cout<<n;
cout<<":- I will not rest till my father has been saved .";
getches();
cout<<"Anubius:- But you need a clear mind to battle .";
getches();
cout<<n;
cout<<":- Okay i am resting take care of everything around here .";
getches();
cout<<"Anubius:- Will sacrifice my life for it .";
getches();
cout<<n;
cout<<":- No , Not your life . I will need you in tomorrow's battle .";
getches();
cout<<n;
cout<<" went to sleep .";
con();
clrscr();
cout<<n;
cout<<":- What is this , am i dreaming .";
getches();
cout<<"Voice :- May be , may be not .";
getches();
cout<<"Voice :- What is more important is what you think , what you know and what you   came here for ?";
getches();
cout<<n;
cout<<":- I came here to save my father and restore peace to the kingdom .";
getches();
cout<<"Voice :- Oh really will you do it even if after it the kingdom won't be with you ?";
getches();
cout<<n;
cout<<":- Yes ! I will do anything to save my kingdom .";
getches();
cout<<"Voice :- We will soon see . But right now your friends need you .";
con();
clrscr();
cout<<n;
cout<<":- What happened here ?";
getches();
cout<<"Alice:- We were being attacked . A group of Harvesters . Aris and Anubius fought them but Anubius was seriously injured .";
getches();
cout<<n;
cout<<":- Anubius ,after this all is over we all will eat together at my favourite restaurant in the town and if you are not there due to some appointment in hell or heaven , I will not leave you .";
getches();
cout<<"Anubius:- I will surely be there you wait and watch .";
getches();
cout<<n;
cout<<":- Alice heal him quickly we will not wait anymore . The more we wait the  more innocent lives are smashed .";
getches();
cout<<"Alice:- I will try my level best .";
getches();
cout<<n;
cout<<":- We will need more then that .";
con();
clrscr();
cout<<"After some time Anubius was healed and they went into the Tower .";
getches();
cout<<"They suddenly saw a mysterious figure emerging from the darkness .";
getches();
cout<<"Aunbius:- Its the demon king Zoma .";
getches();
cout<<n;
cout<<":- What its a Robot ?";
getches();
cout<<"Anubius:- Who knows what lies ahead for us in the world of darkness .";
getches();
cout<<n;
cout<<":- Ya ! Truely .";
getches();
cout<<"Zoma:- 111000110 101000110 11100110 111111111 110000000 1100001010 .";
getches();
cout<<n;
cout<<":- Sorry Zoma but we can't speak binary .";
getches();
cout<<"Zoma:- 89AB 38AEB 13AB1 643917 ABEF5438 .";
getches();
cout<<n;
cout<<":- Hexadecimal neither .";
getches();
cout<<"Zoma:- You guys have come right on time to see your father die .";
getches();
cout<<"Zoma:- And don't worry , your turn will be next .";
getches();
cout<<n;
cout<<":- I liked you when we were not able to understand what you were saying .";
getches();
cout<<n;
cout<<":- We will never allow that to happen .";
getches();
cout<<"Zoma:- We will see ..";
con();
clrscr();
flash(6,"FIGHT",qqqppp);
SB(14);
getches();
clrscr();
gded();
}

void gded()
{
cout<<endl;
cout<<n;
cout<<":- We really did it . Its all over . The world is safe now .";
con();
clrscr();
cout<<"Suddenly a strange voice came and a mysterious figure emerged .";
getches();
cout<<"Nemesis:- Not Yet .....";
getches();
cout<<"After that suddenly an arrow of darkness was shot towards Zeus and he died .";
getches();
cout<<n;
cout<<" in anger charged at him at once but nemesis defended easily and attacked  using his sword .";
getches();
cout<<"Alice , Anubius and Aris intercepted but they were killed in an intant .";
getches();
cout<<"Nemesis:- Now its your turn ";
cout<<n;
cout<<" .Die ,Die ,Die ,Die ,Die ,Die ,Die ,Die ,Die .........";
con();
clrscr();
cout<<"Wake up ";
cout<<n;
cout<<" Wake up .";
getches();
cout<<n;
cout<<":- What ? Where am I? Who are you? Am i alive ?";
getches();
cout<<"Spirit :- I am the spirit of sage's stone . You had died but the stone of life  has chose you for another life .";
getches();
cout<<n;
cout<<":- So what happens now ?";
getches();
cout<<"Spirit:- It depends on you . I am granting you a wish . You can choose from the 3 choices but you must choose carefully .";
int dec;
allies[0].mn(450,400,220,200);
allies[1].mn(250,200,175,400);
allies[2].mn(400,450,275,0);
allies[3].mn(340,175,150,500);
do
{
con();
clrscr();
cout<<"\n\t\t\tCHOICES ";
cout<<"\n1)Kill Nemesis and restore peace .(You and Zeus will also die)\n";
cout<<"2)Revive Zeus so that he can fight Nemesis .(You will die)";
cout<<"\n3)Revive you and your party so that you can try to fight Nemesis .(Zeus will remain dead )";
cout<<"\nEnter your choice .(1-3)";
cin>>dec;
getch();
}
while(dec!=1&&dec!=2&&dec!=3);
switch(dec)
{
case 1:cout<<"The spirit killed Nemesis but his devil's powers continued to rise .";
       getches();
       cout<<"Soon they attacked your village and destroyed it .";
       getches();
       cout<<"Your wish for peace was right but you choose the wrong path .";
       getches();
    //   cout<<"You choosed to be lazy and this resulted in chaose and destruction .";
      // getches();
       cout<<"You wasted your wish .";
       getches();
       cout<<"You lost ." ;
       getches();
       cout<<"Its game over ";
       flash(10,"Game Over",qqqppp);
       exit(0);
case 2:cout<<"Zeus was revived .";
       getches();
       cout<<"Zeus did an amazing battle with Nemesis but he was too powerful and in the end both of them lost their lives .";
       getches();
       cout<<"Though Nemesis died but his devil's powers continued to rise .";
       getches();
       cout<<"Soon they attacked your village and destroyed it .";
       getches();
       cout<<"Your wish for peace was right but you choose the wrong path .";
       getches();
//       cout<<"You choosed to be lazy and this resulted in chaose and destruction .";
  //     getches();
       cout<<"You wasted your wish .";
       getches();
       cout<<"You lost .";
       getches();
       cout<<"Its game over ";
       flash(10,"Game Over",qqqppp);
       exit(0);
case 3:cout<<n;
       cout<<"'s team has been revived .";
       getches();
       cout<<"Nemesis:- How can you still stand ? oh! right you were having the stone of life .";
       getches();
       cout<<"Nemesis:- But you will need a million like those in order to even stand in front of me .";
       getches();
       cout<<n;
       cout<<":- We will take our chances . Now lets battle .";
       getches();
       int z=15;
       int dbsb=0;
       PQ=1;
       do
{
dbsb++;
cout<<endl;
cout<<(enemies[z].name);
cout<<" attacked ";
do
{
PA=rand()%4;
}
while(allies[PA].currno[0]==0);
puts(allies[PA].name);
cout<<" and gave ";
int att=enemies[z].currno[1]-allies[PA].currno[2];
cout<<att;
cout<<" damage .";
cout<<"\n";
con();
allies[PA].currno[0]-=att;
if(allies[PA].currno[0]<0)
allies[PA].currno[0]=0;
clrscr();
stat();
clrscr();
EST(z);
getch();
clrscr();
if(allies[0].currno[0]==0)
{
clrscr();
flash(9,"You lost",qqqppp);
end();
}
for(i=0;i<NA;i++)
{
if(!(allies[i].currno[0]))
continue;
choiceoa(i,15,'l');
con();
clrscr();
}}
while(allies[0].currno[0]!=0&&dbsb!=6);
if(allies[0].currno[0]==0)
{
clrscr();
flash(9,"You lost",qqqppp);
end();
}
else
clrscr();
cout<<"Suddenly the stones of sunlight and staff of rain started glowing and turned into the Rainbow Staff .\n";
getches();
cout<<n;
cout<<" swing the staff and a destructive ray emerged from it which killed Nemesis as well as all his devils .";
getches();
cout<<"Anubius:- Now its finally over .";
getches();
cout<<"Anubius:- After the invincible fall ,\n           the staff must be lost .";
getches();
cout<<"		 Waiting for the next weilder ,\n            worthy of all .";
getches();
cout<<n;
cout<<":- What was that ?";
getches();
cout<<"Anubius:- Who knows ?";
getches();
cout<<"Aris:- Now as every thing is over i want to say something .";
getches();
cout<<"Aris:- Anubius , I don't understand a single word of what you say .";
getches();
cout<<"Anubius:- Its because you are the sword of team not brain .";
getches();
cout<<n;
cout<<":- Right (laughing)";
getches();
cout<<"After that the team returned to the village .";
getches();
cout<<"There was peace everywhere .";
getches();
cout<<"The team went to a restaurant for dinner .";
getches();
cout<<"Anubius:- Just as you thought .";
getches();
cout<<n;
cout<<":- Even better .";
end();
}}

void ng();

void menu()
{
clrscr();
cout<<"\n\t\t\tMENU";
cout<<"\n\n  1) New Game\n\n  2) Load Game\n\n  3) How To Play\n\n  4) Almnac\n\n  5) Quit";
int ch;
do
{
cout<<"\n Enter your choice (1-5)\t";
cin>>ch;
getch();
}while(ch!=1&&ch!=2&&ch!=3&&ch!=4&&ch!=5);
clrscr();
switch(ch)
{
case 1:ng();
       break;
case 2:{ifstream infile("DQU.dat",ios::binary|ios::in);
       infile>>cnt;
	     if(cnt==6)
      {allies[0].spellno=3;
       allies[1].spellno=3;
       allies[2].spellno=3;
       allies[3].spellno=3;
      allies[0].mn(450,400,220,200);
allies[1].mn(250,200,175,400);
allies[2].mn(400,450,275,0);
allies[3].mn(340,175,150,500);
       gded();
       }
       if(cnt==2)
       {a=20;
	allies[0].spellno=1;
       allies[1].spellno=1;
       allies[2].spellno=0;
       allies[3].spellno=2;
       allies[0].mn(150,150,120,100);
allies[1].mn(125,75,100,150);
allies[2].mn(200,250,150,0);
allies[3].mn(150,100,100,250);
	}
       if(cnt==3)
       {allies[0].spellno=2;
       allies[1].spellno=2;
       allies[2].spellno=0;
       allies[3].spellno=2;
       a=40;
       allies[0].mn(250,225,150,120);
allies[1].mn(150,125,130,300);
allies[2].mn(250,300,200,0);
allies[3].mn(200,120,120,300);
	}
       if(cnt==4)
      {allies[0].spellno=3;
       allies[1].spellno=3;
       allies[2].spellno=0;
       allies[3].spellno=3;
      a=60;
       allies[0].mn(350,300,180,140);
allies[1].mn(200,150,150,350);
allies[2].mn(300,350,225,0);
allies[3].mn(250,150,140,400);
       }
       if(cnt==5)
      {allies[0].spellno=3;
       allies[1].spellno=3;
       allies[2].spellno=0;
       allies[3].spellno=3;
      a=80;
       allies[0].mn(450,400,220,200);
allies[1].mn(250,200,175,400);
allies[2].mn(400,450,275,0);
allies[3].mn(340,175,150,500);
       }
       ng();

       }break;
case 3:ins();
       break;
case 4:almnac();
       break;
case 5:{
    cout<<"Thankyou for playing ";
       con();
       exit(0);
    }
       break;
}}

checker()
{
if(20*cnt>=a+move)
return(0);
else
return(1);
}

void end()
{
con();
clrscr();
cout<<"\nYou were really good .\n\nIt was an awesome game .";
getch();
cout<<"\n\nLets play again whenever you want .\n\nThankyou for playing .";
con();
flash(10,"GAME OVER",qqqppp);
exit(0);
}

int battle();

void ng()
{
clrscr();
if(cnt==1&&a==0)
{
cout<<" Once a king went in search of a legendary staff but never returned ";
con();
cout<<"\nNo more Bla , Bla , Bla .";
getch();
cout<<"\nEveryone know what happens next .";
getch();
flash(6,"FIGHT",qqqppp);
}
do
{
do
{
move=random(4)+1;
}while(checker());
if(mkoio==1)
move=20;
a+=move;
clrscr();
puts(n);
cout<<" moved ";
cout<<move;
cout<<" steps and reached ";
cout<<a;
getch();
if(a%20==0)
{
switch(cnt)
{
case 1 : special1();
break;
case 2 : special2();
break;
case 3 : special3();
break;
case 4 : special4();
break;
case 5 : special5();
break;
}}
else
battle();
}
while(allies[0].currno[0] !=0);
if(allies[0].currno[0]==0)
{
clrscr();
flash(9,"You lost",qqqppp);
end();
}}

void choiceoa(int s,int d,char D);

int battle()
{
int I;
I=random(4);
clrscr();
if(!(I))
{
cout<<"\nYou are safe and can proceed further ";
getch();
return(1);
}
int z;
z=(random(2)+((cnt-1)*2));
cout<<"\nYou encountered "<<NE<<" ";
puts(enemies[z].name);
enemenc[0].str(z);
enemenc[1].str(z);
enemenc[2].str(z);
enemenc[3].str(z);
do
{
EST(z);
for(int i=0;i<NE;i++)
{
if(enemenc[i].health<=0)
continue;
cout<<endl;
cout<<(enemies[z].name);
cout<<" "<<i+1<<" attacked ";
do
{
PA=random(4);
}
while(allies[PA].currno[0]==0);
puts(allies[PA].name);
cout<<" and gave ";
int att=enemies[z].currno[1]-allies[PA].currno[2];
if(att<0)
att=10;
cout<<att;
cout<<" damage .";
cout<<"\n";
getch();
allies[PA].currno[0]-=att;
if(allies[PA].currno[0]<0)
allies[PA].currno[0]=0;
if(allies[0].currno[0]==0)
return(1);
}
getch();
clrscr();
stat();
getch();
clrscr();
for(i=0;i<NA;i++)
{
if(!(allies[i].currno[0]))
continue;
choiceoa(i,z,'n');
con();
clrscr();
}}
while(allies[i].currno[0]!=0&&(enemenc[0].health!=0||enemenc[1].health!=0||enemenc[2].health!=0||enemenc[3].health!=0));
return(1);
}

void attack(int u,int b, char B);
void Mag(int b,int w,char P);

void choiceoa(int s,int d ,char D)
{
int ch;
do
{
cout<<"				";
puts(allies[s].name);
cout<<"\n\n\t\t\tChoice of Attack .";
cout<<"\n\n1) Attack\n2) Spell\n3) Protect\n4) Go back to menu ";
cout<<"\nEnter your choice (1-4)";
cin>>ch;
getch();
}while(ch!=1&&ch!=2&&ch!=3&&ch!=4);
switch(ch)
{
case 1:attack(d,s,D);
break;
case 3:puts(allies[s].name);
cout<<" protected and recovered 50 health points ";
allies[s].currno[0]+=50;
if(allies[s].currno[0]>allies[s].maxno[0])
allies[s].currno[0]=allies[s].maxno[0];
break;
case 4:cout<<"Preserving your deeds in the scroll of honour ";
con();
menu();
case 2:Mag(s,d,D);
}}

void attack(int u,int b, char B)
{
if(B=='n')
{
cout<<"\nWhom would you like to attack ?";
EST(u);
cout<<endl;
int ch;
do
{
cout<<"Enter your choice ?\t";
cin>>ch;
getch();
}
while(ch!=1&&ch!=2&&ch!=3&&ch!=4);
ch--;
int att=(allies[b].currno[1]-enemenc[ch].defence);
if(att<0)
att=10;
enemenc[ch].health-=att;
if(enemenc[ch].health<0)
enemenc[ch].health=0;
cout<<allies[b].name<<" attacked "<<enemies[u].name<<" and gave "<<att<<" damage points .";
getch();
}
else
{
EST(u);
int att=(allies[b].currno[1]-enemies[u].currno[2]);
if(att<0)
att=10;
cout<<endl;
cout<<allies[b].name<<" attacked "<<enemies[u].name<<" and gave "<<att<<" damage points .";
enemies[u].currno[0]-=att;
if(enemies[u].currno[0]<0)
enemies[u].currno[0]=0;
getch();
}}

void Mag(int b,int w,char P)
{
if(allies[b].spellno==0)
{
cout<<"You don't know any spells .";
choiceoa(b,w,P);
}
else
{
int zz;
do
{
clrscr();
cout<<"\t\tSpells";
cout<<endl<<allies[b].name<<" has "<<allies[b].currno[3]<<" Magic points .";
allies[b].spls();
cout<<endl<<"Press 4 to go back to choice of attack .";
cout<<"\nEnter your choice(1-"<<allies[b].spellno<<") or 4	";
cin>>zz;
getch();
zz--;
if(allies[b].mspl[zz].cost>allies[b].currno[3])
{
zz=4;
continue;
}
zz++;
}while((zz<1||zz>allies[b].spellno)&&zz!=4);
if(zz==4)
{clrscr();
choiceoa(b,w,P);
}
zz--;
if(zz!=3)
{
cout<<allies[b].name<<" used "<<allies[b].mspl[zz].name<<" ";
if(zz<allies[b].spellno)
allies[b].currno[3]-=allies[b].mspl[zz].cost;
if(allies[b].mspl[zz].type=='h')
{
if(allies[b].mspl[zz].target=='a')
{
cout<<"and healed the team .";
for(int i=0;i<4;i++)
{
if(allies[i].currno[0]==0)
continue;
allies[i].currno[0]+=allies[b].mspl[zz].heal;
if(allies[i].currno[0]>allies[i].maxno[0])
allies[i].currno[0]=allies[i].maxno[0];
}}
else
{
cout<<"Choose the player :-\n1) "<<n<<"\t"<<allies[0].currno[0]<<"\n2) Anubius"<<"\t"<<allies[1].currno[0]<<"\n3) Aris    "<<"\t"<<allies[2].currno[0]<<"\n4) Alice"<<"\t"<<allies[3].currno[0];
int q;
cout<<"\nEnter your choice (1-4)\t";
cin>>q;
getch();
q--;
cout<<"and healed "<<allies[q].name;
allies[q].currno[0]=allies[q].maxno[0];
}}
else
{
if(P=='n')
{
if(allies[b].mspl[zz].target=='a')
{
cout<<"and gave all enemies "<<allies[b].mspl[zz].damage<<" damage .";
for(int ch=0;ch<4;ch++)
{
enemenc[ch].health-=(allies[b].mspl[zz].damage);
if(enemenc[ch].health<0)
enemenc[ch].health=0;
}
EST(w);
}
else if(allies[b].mspl[zz].target=='q')
{
allies[b].currno[0]=0;
cout<<"and sacrificed herself giving 1000 damage points to all enemies .";
allies[b].currno[0]=0;
for(int ch=0;ch<4;ch++)
{
enemenc[ch].health-=(allies[b].mspl[zz].damage);
if(enemenc[ch].health<0)
enemenc[ch].health=0;
}
EST(w);
}
else
{
cout<<" \nChoose your target .";
int t;
do
{
EST(w);
cout<<"\nEnter your choice (1-4)\t";
cin>>t;

getch();
}
while(t!=1&&t!=2&&t!=3&&t!=4);
t--;
enemenc[t].health-=(allies[b].mspl[zz].damage);
cout<<allies[b].name<<" gave "<<enemies[w].name<<t+1<<" "<<allies[b].mspl[zz].damage<<" damage points .";
if(enemenc[t].health<0)
enemenc[t].health=0;
}
}
else
{
cout<<" and gave "<<allies[b].mspl[zz].damage<<" damage points ."<<endl;
getch();
if(allies[b].mspl[zz].target=='q')
allies[b].currno[0]=0;
enemies[w].currno[0]-=(allies[b].mspl[zz].damage);
if(enemies[w].currno[0]<0)
enemies[w].currno[0]=0;
}}}}}
