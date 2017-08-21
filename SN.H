
using namespace std;
void conq()
{
cout<<"\nPress any key to continue... \n";
getch();
clrscr();
}
inline void choq()
{
cout<<"\nEnter your choice .\n";
}
int la(int A[],int &a)
{
int k;
for(k=0;k<5;k++)
{if(a==A[k])
a+=10;}
return a;
}
int sn(int B[],int &b)
{
int j;
for(j=0;j<5;j++)
if(b==B[j])
b-=10;
return b;
}
void SN_PL()
{
char *name,c;
name=namen;
int s[5],i,l[5],p=0,t=0,pr=0,cr=0,rp=0,rc=0,z;
cout<<"\nLets start the game of snake and ladder .";
conq();
clrscr();
cout<<"You are given 5 places where you can keep ladders . \nIf you step on these you will move up by 10 places ";
cout<<"\nPlease choose your numbers between 1 and 90 ";
choq();
for(i=0;i<5;i++)
cin>>l[i];
getch();
cout<<"Now enter 5 places for snakes .\nIf you step on these you will decend by 10 places. \nPlease choose the places between 11 and 99 .";
choq();
for(i=0;i<5;i++)
cin>>s[i];
getch();
cout<<"That's great now lets begin the real game .";
conq();
cout<<"\t\t\t\t";
puts(name);
cout<<"\n\t\tYOU GOT \t\tnow you are at";
randomize();
for(i=1;rp!=100;i++)
{
p=random(6)+1;
pr+=p;
cout<<"\n\t\t"<<"    "<<p;
if(pr<100)
{
rp=la(l,pr);
rp=sn(s,rp);
}
else if(pr>100)
{
rp=pr-p;
pr-=p;
}
else
rp=pr;
cout<<"\t\t\t"<<rp;
if(rp>47 && rp<54)
{
cout<<"\nYou are almost half way \nPress any key to continue";
getch();
}
}
cout<<"\nYou took "<<i<<" tries to reach 100\nNow its my turn ";
conq();
cout<<"\t\t\t\tSAHAJ\n\t\tI GOT \t\tNOW I AM AT ";
randomize();
for(z=1;rc!=100;z++)
{
t=random(6)+1;
cr+=t;
cout<<"\n\t\t   "<<t;
if(cr<100)
{
rc=la(l,cr);
rc=sn(s,rc);
}
else if(cr>100)
{
rc=cr-t;
cr-=t;
}
else
rc=cr;
cout<<"\t\t\t"<<rc;
if (rc>47&&rc<54)
{
cout<<"\nI am almost half way \nPress any key to continue";
getch();
}
}
cout<<"\nI took "<<z<<" tries to reach 100";
conq();
cout<<"\t\t";
if(i>z)
cout<<"Better luck next time ";
else if(i==z)
cout<<"We both are equally good ";
else
cout<<"You are amazing ";
cout<<"\n\n\n\t\t\t THANKYOU FOR PLAYING  \n\n\n\t LETS MEET AGAIN WHENEVER YOU WANT " ;
conq();
}
