#include <bits/stdc++.h>
#include<conio.h>
#include<vector>
#include<limits>
#include<iostream>

using namespace std;

#define IN_MINES_MAX 99
#define IN_MINES_MIN 25
#define IN_MAX_MOVES_POSS 526
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

int DIMENSIONS=9;   //INITIALIZES THE DIMENSION OF THE MINEFIELD
int NO_OF_MINES=10;     //INITIALIZES THE NUMBER OF MINES IN THE MINEFIELD

class MINE{
    public:
    bool CHECK_WHETHER(int NO_OF_ROWS,int NO_OF_COLUMNS)    //CHECKS THE VALIDITY OF THE USER INPUT AS DIMENSION IS 9
	{
		return (NO_OF_ROWS>=0)&&(NO_OF_ROWS<DIMENSIONS)&&(NO_OF_COLUMNS>=0)&&(NO_OF_COLUMNS<DIMENSIONS);
	}

    void PLAY_MOVE_PLAYER(int *U,int *W)    //TAKES THE INPUT OF THE USER TO BE PUT IN MINE FIELD
	{
		while(true)
		{
			cout<<CYAN<<("\nENTER THE COORDINATES OF YOUR MOVE [ROW][COLUMN] ->")<<RESET;
			cin>>*U>>*W;
            // CHECK WHETHER THE INPUT IS IN THE DOMAIN OF THE BOARD
			if ((*U < DIMENSIONS) && (*W < DIMENSIONS))
            {
				return;
            }
		}
	}

    void PRINTING_MINEFIELD(char MINEFIELD[][IN_MINES_MIN])     //PRINTS THE MINEFIELD OVER THE SCREEN AFTER EVERY INPUT
	{
		CLEAR_WINDOW();
		cout<<("\n\n\t\t\t    ");

		for(int i=0;i<DIMENSIONS;i++)
        {
			cout<<(i%10)<<" ";
        }
		cout<<("\n\n");

		for(int i=0;i<DIMENSIONS;i++)
		{
			cout<<("\t\t\t    ");
			for(int j=0;j<DIMENSIONS;j++){
				cout<<(MINEFIELD[i][j])<<" ";
			}
			printf(" %2d",i);
			cout<<("\n");
		}
		return;
	}

    void CLEAR_WINDOW()     //FUNTION TO CLEAR THE WINDOW AFTER A STEP OR INPUT
	{
		cout<<("\33[2J\33[1;1H");
	}

    bool CHECK_MINE(int NO_OF_ROW,int NO_OF_COL,char MINEFIELD[][IN_MINES_MIN])     //CHECK WHETHER THE INPUT HAS A MINE OR NOT
	{
		if(MINEFIELD[NO_OF_ROW][NO_OF_COL]=='*')
			return (true);
		else
			return (false);
	}

    int ADJACENT_MINE_COUNT(int R,int C,int MINES_PRES[][2],char MINEFIELD[][IN_MINES_MIN])    //DISPLAYING ADJACENT COLUMN AFTER THE INPUT OF A NON-MINE COORDINATE
	{
		int MINE_PRESENT=0;

		if(CHECK_WHETHER(R-1,C)==true)
		{
			if(CHECK_MINE(R-1,C,MINEFIELD)==true)
				MINE_PRESENT++;
		}

		if(CHECK_WHETHER(R+1,C)==true)
		{
			if(CHECK_MINE(R+1,C,MINEFIELD)==true)
				MINE_PRESENT++;
		}

		if(CHECK_WHETHER(R,C+1)==true)
		{
			if(CHECK_MINE(R,C+1,MINEFIELD)==true)
				MINE_PRESENT++;
		}

		if(CHECK_WHETHER(R,C-1)==true)
		{
			if(CHECK_MINE(R,C-1,MINEFIELD)==true)
				MINE_PRESENT++;
		}

		if(CHECK_WHETHER(R-1,C-1)==true)
		{
			if(CHECK_MINE(R-1,C-1,MINEFIELD)==true)
				MINE_PRESENT++;
		}

		if(CHECK_WHETHER(R-1,C+1)==true)
		{
			if(CHECK_MINE(R-1,C+1,MINEFIELD)==true)
				MINE_PRESENT++;
		}

		if(CHECK_WHETHER(R+1,C-1)==true)
		{
			if(CHECK_MINE(R+1,C-1,MINEFIELD)==true)
				MINE_PRESENT++;
		}

		if(CHECK_WHETHER(R+1,C+1)==true)
		{
			if(CHECK_MINE(R+1,C+1,MINEFIELD)==true)
				MINE_PRESENT++;
		}

		return (MINE_PRESENT);

	}

    bool UNTIL_MINE_GOES_OFF(char BOARD[][IN_MINES_MIN],char MINEFIELD[][IN_MINES_MIN],int MINE[][2],int R,int C,int *MOVES_LEFT_IN)
	{
		if(BOARD[R][C]!='-')
			return false;

		int i,j;
		if(MINEFIELD[R][C]=='*')
		{
			BOARD[R][C]='*';
			for(i=0;i<NO_OF_MINES;i++)
					BOARD[MINE[i][0]][MINE[i][1]]='*';

			PRINTING_MINEFIELD(BOARD);
			cout<<YELLOW<<("\nYou lost!\n")<<RESET;
			system("PAUSE");
			return (true);
		}

		else
		{
			int count=ADJACENT_MINE_COUNT(R,C,MINE,MINEFIELD);
			(*MOVES_LEFT_IN)--;

			BOARD[R][C]= count+'0';

			if(!count)
			{

				if(CHECK_WHETHER(R-1,C)==true)
				{
					if(CHECK_MINE(R-1,C,MINEFIELD)==false)
						UNTIL_MINE_GOES_OFF(BOARD, MINEFIELD, MINE, R-1, C, MOVES_LEFT_IN);
				}


				if (CHECK_WHETHER (R+1, C) == true)
				{
					if (CHECK_MINE (R+1, C, MINEFIELD) == false)
						UNTIL_MINE_GOES_OFF(BOARD, MINEFIELD, MINE, R+1, C, MOVES_LEFT_IN);
				}


				if (CHECK_WHETHER (R, C+1) == true)
				{
					if (CHECK_MINE (R, C+1, MINEFIELD) == false)
						UNTIL_MINE_GOES_OFF(BOARD, MINEFIELD, MINE, R, C+1, MOVES_LEFT_IN);
				}


				if (CHECK_WHETHER (R, C-1) == true)
				{
					if (CHECK_MINE (R, C-1, MINEFIELD) == false)
						UNTIL_MINE_GOES_OFF(BOARD, MINEFIELD, MINE, R, C-1, MOVES_LEFT_IN);
				}

				if (CHECK_WHETHER (R-1, C+1) == true)
				{
					if (CHECK_MINE (R-1, C+1, MINEFIELD) == false)
						UNTIL_MINE_GOES_OFF(BOARD, MINEFIELD, MINE, R-1, C+1, MOVES_LEFT_IN);
				}


				if (CHECK_WHETHER (R-1, C-1) == true)
				{
					if (CHECK_MINE (R-1, C-1, MINEFIELD) == false)
						UNTIL_MINE_GOES_OFF(BOARD, MINEFIELD, MINE, R-1, C-1, MOVES_LEFT_IN);
				}

				if (CHECK_WHETHER (R+1, C+1) == true)
				{
					if (CHECK_MINE (R+1, C+1, MINEFIELD) == false)
						UNTIL_MINE_GOES_OFF(BOARD, MINEFIELD, MINE, R+1, C+1, MOVES_LEFT_IN);
				}

				if (CHECK_WHETHER (R+1, C-1) == true)
				{
					if (CHECK_MINE (R+1, C-1, MINEFIELD) == false)
						UNTIL_MINE_GOES_OFF(BOARD, MINEFIELD, MINE, R+1, C-1, MOVES_LEFT_IN);
				}

			}
			return (false);
		}
	}

    void DISTRIBUTE_MINES(int MINE[][2],char MINEFIELD[][IN_MINES_MIN])      //DISTRIBUTES THE MINES OVER THE MINEFIELD RANDOMLY
	{
		bool MARK_N[IN_MINES_MIN*IN_MINES_MIN];

		memset(MARK_N,false,sizeof(MARK_N));

		for(int i=0;i<NO_OF_MINES;)
		{
			int RAND_M=rand()%(DIMENSIONS*DIMENSIONS);
			int x=RAND_M/DIMENSIONS;
			int y=RAND_M%DIMENSIONS;

			if(MARK_N[RAND_M]==false) //ADD MINE IF NOT PRESENT AT THE LOCATION
			{
				MINE[i][0]=x;
				MINE[i][1]=y;

				MINEFIELD[MINE[i][0]][MINE[i][1]]='*';
				MARK_N[RAND_M]=true;
				i++;
			}
		}
	}

    void INITIAL(char REAL_BOARD[][IN_MINES_MIN],char MY_BOARD[][IN_MINES_MIN])
	{
		srand(time(NULL)); //INITIALISING BOARDS SO SAME CONFIG DOESN'T ARISE

		int i,j;
		for(i=0;i<DIMENSIONS;i++)
			for(j=0;j<DIMENSIONS;j++)
			{
				MY_BOARD[i][j]=REAL_BOARD[i][j]='-';
			}
			return;
	}

    void MINES_LOCATION (char REALBOARD[][IN_MINES_MIN])    //TELLS THE LOCATION OF THE MINES
    {
        cout<<GREEN<<("The mines locations are-\n")<<RESET;
        PRINTING_MINEFIELD (REALBOARD);
        return;
    }

    void REPLACES_MINES(int R,int C,char FIELD[][IN_MINES_MIN])
		{
			for(int i=0;i<DIMENSIONS;i++)
			{
				for(int j=0;j<DIMENSIONS;j++)
				{
					if(FIELD[i][j]!='*')
					{
						FIELD[i][j]='*';
						FIELD[R][C]='-';
						return;
					}
				}

			}

		}

    void START_GAME()     //STARTS THE GAME
	{
		bool OVER=false;

		char MINEFIELD[IN_MINES_MIN][IN_MINES_MIN],BOARD[IN_MINES_MIN][IN_MINES_MIN];

		int moves_left=DIMENSIONS*DIMENSIONS-NO_OF_MINES;
		int X,Y;
		int MINES[IN_MINES_MAX][2]; //STORES THE COORDINATES OF ALL THE MINES

		INITIAL(MINEFIELD,BOARD);

		DISTRIBUTE_MINES(MINES,MINEFIELD);


		int MOVE_INDEX=0;

		while(OVER==false)
		{
			cout<<GREEN <<("Current Status of Board : \n")<<RESET;
			PRINTING_MINEFIELD(BOARD);
			PLAY_MOVE_PLAYER(&X,&Y);

			//IF THE FIRST MOVE IS A MINE
			if(MOVE_INDEX==0)
			{
				if(CHECK_MINE(X,Y,MINEFIELD)==true) //FIRST MOVE A MINE
					REPLACES_MINES(X,Y,MINEFIELD); //REPLACES THE MINE AT THAT LOCATION
			}

			MOVE_INDEX++;

			OVER = UNTIL_MINE_GOES_OFF(BOARD,MINEFIELD,MINES,X,Y,&moves_left);

			if((OVER==false)&&(moves_left==0))
			{
				cout<<YELLOW<<("\nYou won !\n")<<RESET;
				OVER=true;
				system("PAUSE");
			}
		}


	}

    void RULES()
	{
		CLEAR_WINDOW();

		cout <<MAGENTA<< "t\t\t\t\t\t\t  __  __ _____ _   _ ______  _______          ________ ______ _____  ______ _____  \n"
                 "t\t\t\t\t\t\t |  \\/  |_   _| \\ | |  ____|/ ____\\ \\        / /  ____|  ____|  __ \\|  ____|  __ \\ \n"
                 "t\t\t\t\t\t\t | \\  / | | | |  \\| | |__  | (___  \\ \\  /\\  / /| |__  | |__  | |__) | |__  | |__) |\n"
                 "t\t\t\t\t\t\t | |\\/| | | | | . ` |  __|  \\___ \\  \\ \\/  \\/ / |  __| |  __| |  ___/|  __| |  _  / \n"
                 "t\t\t\t\t\t\t | |  | |_| |_| |\\  | |____ ____) |  \\  /\\  /  | |____| |____| |    | |____| | \\ \\ \n"
                 "t\t\t\t\t\t\t |_|  |_|_____|_| \\_|______|_____/    \\/  \\/   |______|______|_|    |______|_|  \\_\\\n"<<RESET;

		cout<<GREEN<<"\n\n\t\t\t\t\t\tENTER YOUR CHOICE ";
		cout<<"\n\n\t\t\t\t\t\t1.PLAY\n\t\t\t\t\t\t2.EXIT";
		cout<<"\n\n\t\t\t\t\t\tENTER CHOICE (1-2) : "<<RESET;
		int choice;
        cin>>choice;
		if(choice==1)
		{
			START_GAME();
		}
		else
		if(choice==2)
		{
			exit(0);
		}
    }
};



int main()
	{
        MINE mines;
        mines.RULES();
	}
