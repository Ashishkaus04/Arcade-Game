#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include<conio.h>


using namespace std;
class Riddle{
    private:
        string questionText;
        string correctAnswer;
    public:
        Riddle():questionText(""),correctAnswer(""){};
        Riddle(string ques,string ans){
            questionText=ques;
            correctAnswer=ans;
        }
        void displayQuestion() {
        cout << "\n\n" << questionText << "\n\n";

        cout << "\nEnter your answer: ";
    }
    string prin_ans(){
        return correctAnswer;
    }
    bool checkAnswer(string choice) {
        return choice == correctAnswer;
    }
};
//THIS IS THE QUESTION CLASS FOR THE GAME
class Question {
private:
    string questionText;
    string options[4];
    int correctAnswer;

public:
    Question() : questionText(""), correctAnswer(0) {
        options[0] = "";
        options[1] = "";
        options[2] = "";
        options[3] = "";
    }

    Question(string text, string opt1, string opt2, string opt3, string opt4, int correct) {
        questionText = text;
        options[0] = opt1;
        options[1] = opt2;
        options[2] = opt3;
        options[3] = opt4;
        correctAnswer = correct;
    }

    void displayQuestion() {
        cout << "\n\n" << questionText << "\n\n";
        for (int i = 0; i < 4; ++i) {
            cout << i+1 << ". " << options[i] << endl;
        }
        cout << "\nEnter Option: ";
    }

    bool checkAnswer(int choice) {
        return choice == correctAnswer;
    }
};

//this is KBCGame class for checking the answer given.
//and for calculatng the amount of money won in dollars.
class KBCGame {
private:
    string PLAYERNAME;
    int WIN;
    Question QUES[21];
    Riddle rid[11];

public:
    KBCGame(string name) : PLAYERNAME(name), WIN(0) {
        // Initialize questions

        QUES[0] = Question("Which of the three banks will be merged with the other two to create India’s third-largest bank?",
                                "Punjab National Bank",
                                "Indian Bank",
                                "Bank of Baroda",
                                "Dena Bank",
                                2);

        QUES[1] = Question("Who is Iron Man of INDIA?",
                                "Sardar Vallabhbhai Patel",
                                "Mahatma Gandhi",
                                "Nathuram Godse",
                                "Narendra Modi",
                                1);

        QUES[2] = Question("Where was India’s first national Museum opened?",
                                "Delhi",
                                "Hyderabad",
                                "Rajasthan",
                                "Mumbai",
                                4);

        QUES[3] = Question("Who made the fastest 100 in cricket?",
                                "A.B. de Villiers",
                                "Corey Anderson",
                                "Chris Gayle",
                                "Rohit Sharma",
                                1);

        QUES[4] = Question("Which country produces the most bananas?",
                                "Brazil",
                                "Africa",
                                "India",
                                "Australia",
                                3);

        QUES[5] = Question("In 2019, Which popular singer was awarded the Bharat Ratna award?",
                                "Lata Mangeshkar",
                                "Asha Bhosle",
                                "Bhupen Hazarika",
                                "Manna Dey",
                                3);

        QUES[6] = Question("What is the capital of France?",
                                "New York",
                                "Paris",
                                "Beijing",
                                "Yen",
                                2);

        QUES[7] = Question("The green planet in the solar system is?",
                                "Mars",
                                "Uranus",
                                "Earth",
                                "Venus",
                                2);

        QUES[8] = Question("Which is the most ancient religion in the world?",
                                "Christianity",
                                "Hinduism",
                                "Islam",
                                "Buddhism",
                                2);

        QUES[9] = Question("Who invented the Hovercraft?",
                                "Stefenson",
                                "Gutenberg",
                                "C. Sorel",
                                "Christopher Cockerell",
                                4);

        QUES[10] = Question("Who is the first woman I.A.S of INDIA?",
                                "Kiran Bedi",
                                "Smt. Anna Jorge",
                                "Ashapurwa Devi",
                                "Rita Fariya",
                                2);

        QUES[11] = Question("What is the name of the first Indian woman who wins the Man Booker Prize?",
                                "Salman Rushdie",
                                "Arundhati Roy",
                                "V.S. Naipaul",
                                "Kiran Desai",
                                2);

        QUES[12] = Question("In which year was SAARC established?",
                                "1989",
                                "1970",
                                "1985",
                                "1995",
                                3);

        QUES[13] = Question("In which country is Income Tax not taken by the Government?",
                                "Monaco (Europe)",
                                "Bissau (South Africa)",
                                "Nadawa (UK)",
                                "Kango (Africa)",
                                1);

        QUES[14] = Question("Which country won the cricket worldcup 2023?",
                                "AUSTRALIA",
                                "SOUTH AFRICA",
                                "ENGLAND",
                                "INDIA",
                                1);

        QUES[15] = Question("Which team won Indian Premier League frist edition in 2007?",
                                "Chennai Super Kings",
                                "Kolkata Knight Riders",
                                "Rajasthan Royals",
                                "Delhi Capitals",
                                3);

        QUES[16] = Question("Who is the current Home Minister of India?",
                                "Narendar Modi",
                                "Amit Shah",
                                "Rahul Ganghi",
                                "Nitin Gadkari",
                                2);

        QUES[17] = Question("who composed the national anthem of INDIA?",
                                "Jonh Keats",
                                "Bankim Chabdra",
                                "Willam Sakshphire",
                                "Rabindra Nath Tagore",
                                4);

        QUES[18] = Question("Which god is also known as 'GAURI NANDAN'?",
                                "Lord Ganesha",
                                "Guru Nanak Dev Ji",
                                "Shri Krishan Ji",
                                "Jesus Christ",
                                1);

        QUES[19] = Question("Who was the first woman to climb K2,the world's second highest mountain peak?",
                                "Junko Tabei",
                                "Wanda Rutkiewicz",
                                "Tamae Watande",
                                "Chantal Maudit",
                                2);

        rid[0] = Riddle("The more you take, the more you leave behind. What am I?",
                                "footsteps");
        rid[1] = Riddle("What goes up, but never comes down?",
                                "age");
        rid[2] = Riddle("What has a neck but no head?",
                                "bottle");
        rid[3] = Riddle("I add 5 to 9 and get 2. The answer is correct, so what am I?",
                                "clock");
        rid[4] = Riddle("Forward, I am heavy; backward, I am not. What am I?",
                                "ton");
        rid[5] = Riddle("What can you catch but cannot throw?",
                                "cold");
        rid[6] = Riddle("If you have me, you want to share me. If you share me, you havenot kept me. What am I?",
                                "secret");
        rid[7] = Riddle("I am an odd number. Take away a letter and I become even. What am I?",
                                "seven");
        rid[8] = Riddle("I have four fingers and a thumb, but I am not alive. What am I?",
                                "glove");
        rid[9]= Riddle("I can be bigger than you but weigh nothing at all. What am I?","shadow");
        rid[10]= Riddle("What goes away as soon as you talk about it?","silence");
        // Initialize srand
        srand(time(NULL));
    }

    //this the function playgame to enter name of user
    //and asking the answer given by user
    //and calculating the prize won.
    void playGame() {
        cout<<("\n\n\t\t\t    ");
        cout<<"WELCOME TO THE GAME OF QUIZ AND RIDDLES-:"<<("\n\n\t\t\t    ");
        cout<<"THERE IS NO ROOM FOR ERROR"<<("\n\n\t\t\t    ");
        cout<<"SO LETS'S BEGIN"<<("\n\n\t\t\t    ");
        int chq;
        system("PAUSE");
        cout<<("\t\t\t    ")<<"ENTER YOU CHOICE-:\n1.quiz\n2.riddle-:"<<endl;
        cin>>chq;
        if(chq==1){
        for (int i = 0; i < 20; ++i) {
            QUES[i].displayQuestion();
            int choice;
            cin >> choice;

            if (QUES[i].checkAnswer(choice)) {
                cout << "\n\n\t\tSCORE: " << (i+1)  << " \n";
                WIN = (i+1) ;
            } else {
                cout << "\n\nWrong Answer (You win nothing$)\nRight Answer {";
                cout << QUES[i].checkAnswer(1) ? "1. " : "2. ";
                cout << QUES[i].checkAnswer(2) ? "2. " : "2. ";
                cout << QUES[i].checkAnswer(3) ? "3. " : "3. ";
                cout << QUES[i].checkAnswer(4) ? "4. " : "4. ";
                cout << "}\n";
                break;
            }
        }}
        else{
            for (int i = 0; i <= 10; ++i) {
            rid[i].displayQuestion();
            string choice;
            cin >> choice;

            if (rid[i].checkAnswer(choice)) {
                cout << "\n\n\t\tScore: " << (i+1)  << " \n";
                WIN = i+1;
            } else {
                cout << "\n\nWrong Answer \nYOU LOST \nRight Answer {";
                cout<<rid[i].prin_ans()<<"}\n";
                system("PAUSE");
                break;
            }
        }
        }
    }
};

int main() {
    std::cout << "   ____  _    _ _____ ______           _   _ _____    _____  _____ _____  _____  _      ______  _____ \n"
                 "  / __ \\| |  | |_   _|___  /     /\\   | \\ | |  __ \\  |  __ \\|_   _|  __ \\|  __ \\| |    |  ____|/ ____|\n"
                 " | |  | | |  | | | |    / /     /  \\  |  \\| | |  | | | |__) | | | | |  | | |  | | |    | |__  | (___  \n"
                 " | |  | | |  | | | |   / /     / /\\ \\ | . ` | |  | | |  _  /  | | | |  | | |  | | |    |  __|  \\___ \\ \n"
                 " | |__| | |__| |_| |_ / /__   / ____ \\| |\\  | |__| | | | \\ \\ _| |_| |__| | |__| | |____| |____ ____) |\n"
                 "  \\___\\_\\\\____/|_____/_____| /_/    \\_\\_| \\_|_____/  |_|  \\_\\_____|_____/|_____/|______|______|_____/ \n";

    KBCGame game("Player");
    game.playGame();
    return 0;
}
