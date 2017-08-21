#include<iostream>
//#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
#include<stdio.h>
#include<time.h>

using namespace std;

int random(int y)
{
    return(rand()%y);
}
void randomize()
{
    srand(time(0));
}
void clrscr(void)
{
        system("CLS");
}

char getche()
{
    getchar();
    return(getchar());

}

void getch()
{
    //getchar();
    getchar();
}




void flash(int aa,char a[],int xqw)
{
//xqw=qqqppp;
if(xqw)
for(int j=0;j<aa;j++)
{{
for(long int i=0;i<500;i+=3)
{
cout<<"\n\n\n\n\n\n\t\t\t";
for(int k=0;k<=j;k++)
{
cout<<a[k];
}
cout<<"\t\t\n\n\n\n";
for(int c=(aa-2);c<j;c++)
for(int d=0;d<50;d+=2)
{
cout<<" ";
}
clrscr();
}    	}	}
else
{for(int j=0;j<aa;j++)
{{
for(long int i=0;i<1000;i++)
{
cout<<"\n\n\n\n\n\n\t\t\t";
for(int k=0;k<=j;k++)
{
cout<<a[k];
}
cout<<"\t\t\n\n\n\n";
for(int c=(aa-2);c<j;c++)
for(int d=0;d<500;d++)
{
cout<<" ";
}
clrscr();
}	}	}	}	}



