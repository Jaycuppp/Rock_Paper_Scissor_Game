 #include <iostream>
 #include <ctime>
 #include <string>

 using namespace std;


int getComputerChoice()
{
    srand(time(NULL));
    int random = rand() % 3 + 1;
    int ComputerChoice = random;
    if (ComputerChoice == 1) {
        return 1;
    } else if (ComputerChoice == 2) {
        return 2;
    } else if (ComputerChoice == 3) {
        return 3;
    }
    return 0;
}

int getPlayerChoice () {
    cout << "Rock, Paper, or Scissors?" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cout << "Please enter your choice:" << endl;
    int PlayerChoice;
    cin >> PlayerChoice;

    while (PlayerChoice!= 1 && PlayerChoice != 2 && PlayerChoice != 3)
    {
        cout << "Incorrect choice. Please enter 1) rock , 2) paper, or 3) scissors ";
        cin >> PlayerChoice;
    }

    return PlayerChoice;
}

void ShowPlayerChoices (int playerchoice) {
    if (playerchoice == 1) cout << "You Choose: Rock" << endl;
    if (playerchoice == 2) cout << "You Choose: Paper" << endl;
    if (playerchoice == 3) cout << "You Choose: Scissors" << endl;
}

void ShowComputerChoices (int computerchoice) {
    if (computerchoice == 1) cout << "The Computer Chose: Rock" << endl;
    if (computerchoice == 2) cout << "The Computer Chose: Paper" << endl;
    if (computerchoice == 3) cout << "The Computer Chose: Scissors" << endl;
}

int isTie (int playerchoice, int computerchoice) {
    if (playerchoice == computerchoice) {
         cout << "It's a TIE" << endl;
    }

    return 0;
}

void isPlayerWinner (int playerchoice, int computerchoice) {
    if (playerchoice == 1 && computerchoice == 2) {
        cout << "You Lose! Paper beats Rock" << endl;
    } else if (playerchoice == 2 && computerchoice == 3) {
        cout << "You Lose! Scissors beats Paper" << endl;
    } else if (playerchoice == 3 && computerchoice == 1) {
        cout << "You Lose! Rock beats Scissors" << endl;
    } else if (playerchoice == 1 && computerchoice == 3) {
        cout << "You Win! Rock beats Scissors" << endl;
    } else if (playerchoice == 2 && computerchoice == 1) {
        cout << "You Win! Paper beats Rock" << endl;
    } else if (playerchoice == 3 && computerchoice == 2) {
        cout << "You Win! Scissors beats Paper" << endl;
    }
}
int main ()
{
    cout << "Rock Paper Scissors Menu" << endl;
    cout << "-------------------------"<< endl;
    char MenuChoice;
    cout << "p)Play Game" << endl;
    cout << "q)Quit" << endl;
    cin >> MenuChoice;
    while (MenuChoice != 'p' && MenuChoice !='q') {
        cout << "Choice is Invalid. Please choose (p) for play or (q) for quit ";
        cin >> MenuChoice;
    }
    if (MenuChoice == 'p') {
        int PlayerChoice = getPlayerChoice();
        int ComputerChoice = getComputerChoice();
        ShowPlayerChoices(PlayerChoice);
        ShowComputerChoices(ComputerChoice);
        isTie(PlayerChoice, ComputerChoice);
        isPlayerWinner (PlayerChoice, ComputerChoice);

    } else if (MenuChoice == 'q') {
        cout << "You have quit the program. Have a nice day :)" << endl;
    }
}
