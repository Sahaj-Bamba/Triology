
#include "MAP5.h"
using namespace std;
class Mine : public MAP
{
public:
    int f=0;
    void MOVE1()
    {
        int p,o;                                                        //row and col
        do
        {
        cout<<"\n\tEnter the row    number (1-3)   ";
        cin>>p;
        cout<<"\tEnter the column number (1-3)   ";
        cin>>o;
        }while(!((p>0&&p<4&&c>0&&c<4&&!((rt(p,o)=='X')||rt(p,o)=='O'))));
        Reposition('X',p,o);

    }

    void MOVE2()
    {
        int p,o;                                                        //row and col
        do
        {
        cout<<"\n\tEnter the row    number (1-3)   ";
        cin>>p;
        cout<<"\tEnter the column number (1-3)   ";
        cin>>o;
        }while(!((p>0&&p<4&&c>0&&c<4&&!((rt(p,o)=='X')||rt(p,o)=='O'))));
        Reposition('O',p,o);
    }
    int check()
    {
        if(rt(1,1)==rt(1,2)&&rt(1,2)==rt(1,3)&&rt(1,3)=='X')
            f=1;
        else if(rt(2,1)==rt(2,2)&&rt(2,2)==rt(2,3)&&rt(2,3)=='X')
            f=1;
        else if(rt(3,1)==rt(3,2)&&rt(3,2)==rt(3,3)&&rt(3,3)=='X')
            f=1;
        else if(rt(1,1)==rt(2,2)&&rt(2,2)==rt(3,3)&&rt(3,3)=='X')
            f=1;
        else if(rt(1,3)==rt(2,2)&&rt(2,2)==rt(3,1)&&rt(1,3)=='X')
            f=1;
        else if(rt(1,1)==rt(2,1)&&rt(2,1)==rt(3,1)&&rt(3,1)=='X')
            f=1;
        else if(rt(1,2)==rt(2,2)&&rt(1,2)==rt(3,2)&&rt(3,2)=='X')
            f=1;
        else if(rt(1,3)==rt(2,3)&&rt(3,3)==rt(3,2)&&rt(3,3)=='X')
            f=1;
       /*/////////////////(1,2)&&rt(1,2)==rt(1,3)&&rt(1,3)=='X')
            f=1;
        else if(rt(1,1)==rt(1,2)&&rt(1,2)==rt(1,3)&&rt(1,3)=='X')
            f=1;
        else if(rt(1,1)==rt(1,2)&&rt(1,2)==rt(1,3)&&rt(1,3)=='X')
            f=1;
        else if(rt(1,1)==rt(1,2)&&rt(1,2)==rt(1,3)&&rt(1,3)=='X')
            f=1;*/
        if(rt(1,1)==rt(1,2)&&rt(1,2)==rt(1,3)&&rt(1,3)=='O')
            f=2;
        else if(rt(2,1)==rt(2,2)&&rt(2,2)==rt(2,3)&&rt(2,3)=='O')
            f=2;
        else if(rt(3,1)==rt(3,2)&&rt(3,2)==rt(3,3)&&rt(3,3)=='O')
            f=2;
        else if(rt(1,1)==rt(2,2)&&rt(2,2)==rt(3,3)&&rt(3,3)=='O')
            f=2;
        else if(rt(1,3)==rt(2,2)&&rt(2,2)==rt(3,1)&&rt(1,3)=='O')
            f=2;
        else if(rt(1,1)==rt(2,1)&&rt(2,1)==rt(3,1)&&rt(3,1)=='O')
            f=2;
        else if(rt(1,2)==rt(2,2)&&rt(1,2)==rt(3,2)&&rt(3,2)=='O')
            f=2;
        else if(rt(1,3)==rt(2,3)&&rt(3,3)==rt(3,2)&&rt(3,3)=='O')
            f=2;
            return f;


    }
    Mine()
    {

        f=0;
        PH=1;
        r=1;
        c=1;
        char *grid = new char[(r*2+1)*(c*2+1)];
        Create();
        cr=1;
        cc=1;
        //*(grid+(cr*2-1)*(c*2+1)+cc*2-1)='Û';

    }
    Mine(int R,int C)
    {

        f=0;
        PH=1;
        r=R;
        c=C;
        char *grid = new char[(r*2+1)*(c*2+1)];
        Create();
        cr=1;
        cc=1;
        //*(grid+(cr*2-1)*(c*2+1)+cc*2-1)='Û';

    }
    void clear()
    {
        Create();
    }

    ~Mine()
    {
        delete []grid;
    }

};
int MINE_RUN()
{   int cty=0;
    clrscr();
    cout<<"Hello Friend .\n Lets play tic tac toe .";
    getch();
    cout<<"\nI apologise but currently I am not capable of playing with you .\n So hope you have brought a friend to play .";
    getch();
    clrscr();
    char ch='y';
    //int r,c;                                             //current row and column .
    Mine map1(3,3);
    //int f=0;
    do
    {
        cty=0;
    map1.f=0;
    map1.clear();
    do
    {
        clrscr();
        map1.Display();
        cout<<"\n\t\t\tPlayer 1(X)";
        map1.MOVE1();
        cty++;
        map1.check();
        if(cty==9)
            map1.f=3;
        if(map1.f)
            continue;
        map1.Display();
        cout<<"\n\t\t\tPlayer 2(O)";
        map1.MOVE2();
        map1.check();
        cty++;
        if(cty==9)
            map1.f=3;
    }while(!map1.f);
    if(map1.f==1)
        {
            clrscr();
            cout<<"\nPlayer 1 wins .";
            //getch();
        }
    else if(map1.f==2)
    {
        clrscr();
        cout<<"\nPlayer 2 wins .";
    }
    else
    {
        clrscr();
        cout<<"\nThe game is DRAW .";
    }
    getch();
    cout<<"\n\nWant to play again ?(y/n) ";
    cin>>ch;
    }while(ch=='y'||ch=='Y');
    return 0;
}
