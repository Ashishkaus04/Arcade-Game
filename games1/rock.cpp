#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>
#include<windows.h>

using namespace std;

class rock_paper_scissors          // a class that 
{
    public:
    int n=1;
    string player;
    string computer;
    int playerscore=0;
    int computerscore=0;
    void welcome(){
        cout<<("\n\n\t\t\t    ");
        cout<<"WELCOME TO THE GAME OF ROCK-PAPER-SCISSOR-:"<<("\n\n\t\t\t    ");
        cout<<"THERE WILL BE 5 CHANCES TO DECIDE THE FATE OF THE GAME"<<("\n\n\t\t\t    ");
        cout<<"SO LETS'S BEGIN"<<("\n\n\t\t\t    "); 

        // cout<<".....";  // adds a delay in the printing of the program
        create();
    }

    void create()
    {
    string rps[]={"rock","paper","scissors"};

    srand((unsigned int) time(NULL));

    while(computerscore+playerscore<5){
    {
        
        jump:
        cout<<("\n\n\t\t\t    ")<<"Enter rock or paper or scissors:";
        getline(cin,player);
        if(player!="rock" && player!="paper" && player!="scissors")
        {
            goto jump;
        }
        computer=rps[rand()%3];
        cout<<("\n\n\t\t\t    ")<<"Computer chooses:"<<computer<<endl;

        // if(player==computer)
        // {
        //     playerscore++;
        //     computerscore++;
        // }
        if(player=="rock")
        {
            if(computer=="paper")
                computerscore++;
            else if(computer=="scissors")
                playerscore++;
        }
        else if(player=="paper")
        {
            if(computer=="scissors")
                computerscore++;
            else if(computer=="rock")
                playerscore++;
        }
       else if(player=="scissors")
        {
            if(computer=="rock")
                computerscore++;
            else if(computer=="paper")
                playerscore++;
        }
        display();
        cout<<endl;
        
    }}
    cout<<endl;
    cout<<endl;
    result();
}

    void display()
    {
    cout<<"SCORE"<<endl;
    cout<<"Player:   "<<playerscore<<endl;
    cout<<"Computer: "<<computerscore<<endl;
    }
    void result(){
    if(playerscore>computerscore){
        
        cout<<"PLAYER WINS!"<<("\n\n\t\t\t    ");
        system("PAUSE");}
    else if(playerscore<computerscore){
        
        cout<<"COMPUTER WINS!"<<("\n\n\t\t\t    ");
        system("PAUSE");}
    else{
        
        cout<<"DRAW!";
        system("PAUSE");}
    }
};

int main()
{
    rock_paper_scissors ob;
    

     ob.welcome();
    
}
