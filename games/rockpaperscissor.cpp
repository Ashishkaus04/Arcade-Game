
#include<iostream>
#include<string>
#include<ctime>
#include<stdlib.h>
#include<windows.h>
#define RESET         "\033[0m"
#define BLACK         "\033[30m"
#define RED           "\033[31m"
#define GREEN         "\033[32m"
#define YELLOW        "\033[33m"
#define BLUE          "\033[34m"
#define MAGENTA       "\033[35m"
#define CYAN          "\033[36m"
#define WHITE         "\033[37m"
#define BOLD_BLACK    "\033[1m\033[30m"
#define BOLD_RED      "\033[1m\033[31m"
#define BOLD_GREEN    "\033[1m\033[32m"
#define BOLD_YELLOW   "\033[1m\033[33m"
#define BOLD_BLUE     "\033[1m\033[34m"
#define BOLD_MAGENTA  "\033[1m\033[35m"
#define BOLD_CYAN     "\033[1m\033[36m"
#define BOLD_WHITE    "\033[1m\033[37m"
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

          std::cout <<MAGENTA<< "\t\t\t  _____   ____   _____ _  __  _____        _____  ______ _____     _____  _____ _____  _____ _____  ____  _____   _____ \n"
                 "\t\t\t |  __ \\ / __ \\ / ____| |/ / |  __ \\ /\\   |  __ \\|  ____|  __ \\   / ____|/ ____|_   _|/ ____/ ____|/ __ \\|  __ \\ / ____|\n"
                 "\t\t\t | |__) | |  | | |    | ' /  | |__) /  \\  | |__) | |__  | |__) | | (___ | |      | | | (___| (___ | |  | | |__) | (___  \n"
                 "\t\t\t |  _  /| |  | | |    |  <   |  ___/ /\\ \\ |  ___/|  __| |  _  /   \\___ \\| |      | |  \\___ \\___ \\| |  | |  _  / \\___ \\ \n"
                 "\t\t\t | | \\ \\| |__| | |____| . \\  | |  / ____ \\| |    | |____| | \\ \\   ____) | |____ _| |_ ____) |___) | |__| | | \\ \\ ____) |\n"
                 "\t\t\t |_|  \\_\\____/  \\_____|_|\\_\\ |_| /_/    \\_\\_|    |______|_|  \\_\\ |_____/ \\_____|_____|_____/_____/ \\____/|_|  \\_\\_____/ \n"<<RESET;

        cout<<BOLD_CYAN<<"\t\t\t\t\t\tTHERE WILL BE 5 CHANCES TO DECIDE THE FATE OF THE GAME"<<("\n\n\t\t\t    ");
        cout<<"\t\t\t\t\t\tSO LETS'S BEGIN"<<("\n\n\t\t\t    ")<<RESET;

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
        cout<<CYAN<<("\n\n\t\t\t    ")<<"Enter rock or paper or scissors:"<<RESET;
        getline(cin,player);
        if(player=="rock")
        {
            std::cout <<GREEN<< "\t\t\t\t\t\t,--.--._" << std::endl;
            std::cout << "\t\t\t\t\t\t\ _, \\___)" << std::endl;
            std::cout << "\t\t\t\t\t\t  / _/____)" << std::endl;
            std::cout << "\t\t\t\t\t\t \\//(____)" << std::endl;
            std::cout << "\t\t\t\t\t\t\\     (__)" << std::endl;
            std::cout << "\t\t\t\t\t\t `-----\"" <<RESET<< std::endl;
        }
        else if(player=="scissors")
        {
    std::cout<<GREEN << "\t\t\t\t\t\t    _       ,/'" << std::endl;
    std::cout << "\t\t\t\t\t\t   (_).  ,/'" << std::endl;
    std::cout << "\t\t\t\t\t\t   __  ::" << std::endl;
    std::cout << "\t\t\t\t\t\t  (__)'  `\\." << std::endl;
    std::cout << "\t\t\t\t\t\t            `\\." <<RESET<< std::endl;


}
else if(player=="paper")
{
    std::cout<<GREEN << "\t\t\t\t\t\t  _.-._" << std::endl;
    std::cout << "\t\t\t\t\t\t | | | |_ " << std::endl;
    std::cout << "\t\t\t\t\t\t | | | | |" << std::endl;
    std::cout << "\t\t\t\t\t\t | | | | |" << std::endl;
    std::cout << "\t\t\t\t\t\t_|  '-._ |" << std::endl;
    std::cout << "\t\t\t\t\t\t\\`\\`-.'-._;" << std::endl;
    std::cout << "\t\t\t\t\t\t \\    '   |" << std::endl;
    std::cout << "\t\t\t\t\t\t  \\  .`  /" << std::endl;
    std::cout << "\t\t\t\t\t\t   |    |" << RESET<<std::endl;


}


        if(player!="rock" && player!="paper" && player!="scissors")
        {
            goto jump;
        }
        computer=rps[rand()%3];
        cout<<YELLOW<<("\n\n\t\t\t    ")<<"Computer chooses:"<<computer<<RESET<<endl;

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
    cout<<BOLD_WHITE<<"SCORE"<<endl;
    cout<<"Player:   "<<playerscore<<endl;
    cout<<"Computer: "<<computerscore<<RESET<<endl;
    }
    void result(){
    if(playerscore>computerscore){

        cout<<YELLOW<<"PLAYER WINS!"<<("\n\n\t\t\t    ")<<RESET;
        system("PAUSE");}
    else if(playerscore<computerscore){

        cout<<YELLOW<<"COMPUTER WINS!"<<("\n\n\t\t\t    ")<<RESET;
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
