#include<iostream>
using namespace std;

class tic_tac_toe
{
public:
char s[3][3]={{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
int r,c;
char ch='x';
bool draw=false;

void create()
{
cout<<("\33[2J\33[1;1H");
 cout<<("\t\t\t    ")<<"    |    |  \n";
 cout<<("\t\t\t    ")<<" "<<s[0][0]<<"  | "<<s[0][1]<<"  | "<<s[0][2]<<"  \n";
 cout<<("\t\t\t    ")<<"    |    |  \n";
 cout<<("\t\t\t    ")<<"---- ----- ----\n";
 cout<<("\t\t\t    ")<<"    |    |  \n";
 cout<<("\t\t\t    ")<<" "<<s[1][0]<<"  | "<<s[1][1]<<"  | "<<s[1][2]<<"  \n";
 cout<<("\t\t\t    ")<<"    |    |  \n";
 cout<<("\t\t\t    ")<<"---- ----- ----\n";
 cout<<("\t\t\t    ")<<"    |    |  \n";
 cout<<("\t\t\t    ")<<" "<<s[2][0]<<"  | "<<s[2][1]<<"  | "<<s[2][2]<<"  \n";
 cout<<("\t\t\t    ")<<"    |    |  \n";
 
}

void method()
{
  int value;

  if(ch=='x')
  {
      cout<<("\n\n\t\t\t    ")<<"Player1 enter the value:";
      cin>>value;
  }
  if(ch=='0')
  {
      cout<<("\n\n\t\t\t    ")<<"Player2 enter the value:";
      cin>>value;
  }

  if(value==1)
  {
      r=0;
      c=0;
  }
  if(value==2)
  {
      r=0;
      c=1;
  }
  if(value==3)
  {
      r=0;
      c=2;
  }
  if(value==4)
  {
      r=1;
      c=0;
  }
  if(value==5)
  {
      r=1;
      c=1;
  }
  if(value==6)
  {
      r=1;
      c=2;
  }
  if(value==7)
  {
      r=2;
      c=0;
  }
  if(value==8)
  {
      r=2;
      c=1;
  }
  if(value==9)
  {
      r=2;
      c=2;
  }
  else if(value<1 || value>9)
  {
      cout<<("\n\n\t\t\t    ")<<"INVALID VALUE!"<<endl;
  }

  if(ch=='x' && s[r][c]!='x' && s[r][c]!='0')
  {
      s[r][c]='x';
      ch='0';
  }
  else if(ch=='0' && s[r][c]!='x' && s[r][c]!='0')
  {
      s[r][c]='0';
      ch='x';
  }
  else
  {
      cout<<("\n\n\t\t\t    ")<<"NO EMPTY SPACE!"<<endl;
      draw=true;
      exit(0);
    
  }
}

bool check()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        if(s[i][0]==s[i][1] && s[i][0]==s[i][2] || s[0][i]==s[1][i] && s[0][i]==s[2][i])
        return true;
    }
    if(s[0][0]==s[1][1] && s[1][1]==s[2][2] || s[0][2]==s[1][1] && s[1][1]==s[2][0])
    {
        return true;
    }

   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if(s[i][j]!='x' && s[i][j]!='0')
           {
               return false;
           }
       }
   }
   draw=true;
   return false;
}
void display()
{
  if(ch=='x' && draw==false)
    {
        cout<<"PLAYER2 WINS!"<<endl;
        system("PAUSE");
        
    }
    if(ch=='0' && draw==false)
    {
        cout<<"PLAYER1 WINS!"<<endl;
        system("PAUSE");
    }
    else if(draw==true)
    {
        cout<<"DRAW!"<<endl;
        system("PAUSE");
    }
}
};

int main()
{
    tic_tac_toe ob;
    while(!ob.check())
    {
        ob.create();
        ob.method();
        ob.check();
    }
   ob.display();
}
