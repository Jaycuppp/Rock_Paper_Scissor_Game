 #include <iostream>
 #include <ctime>
 #include <string>

 using namespace std;

// Lets Computer make a random guess between numbers 1 and 3
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

// The Game Menu for the user
int getPlayerChoice () {
    cout << "Rock, Paper, or Scissors?" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cout << "Please enter your choice:" << endl;
    int PlayerChoice;
    cin >> PlayerChoice;

//  Exception Handling in case User does not select the correct choice
    while (PlayerChoice!= 1 && PlayerChoice != 2 && PlayerChoice != 3)
    {
        cout << "Incorrect choice. Please enter 1) rock , 2) paper, or 3) scissors ";
        cin >> PlayerChoice;
    }

    return PlayerChoice;
}

// Confirming User Choice of either Rock, Paper, or Scissors
void ShowPlayerChoices (int playerchoice) {
    if (playerchoice == 1) cout << "You Choose: Rock" << endl;
    if (playerchoice == 2) cout << "You Choose: Paper" << endl;
    if (playerchoice == 3) cout << "You Choose: Scissors" << endl;
}

// Confirming Computer Choice of either Rock, Paper, or Scissors
void ShowComputerChoices (int computerchoice) {
    if (computerchoice == 1) cout << "The Computer Chose: Rock" << endl;
    if (computerchoice == 2) cout << "The Computer Chose: Paper" << endl;
    if (computerchoice == 3) cout << "The Computer Chose: Scissors" << endl;
}

// Game Logic for the case where both User and Computer choose the same number
int isTie (int playerchoice, int computerchoice) {
    if (playerchoice == computerchoice) {
         cout << "It's a TIE" << endl;
    }

    return 0;
}

// Game Logic for cases in which either the Computer or User won the game
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
//  Game Start Menu
    cout << "Rock Paper Scissors Menu" << endl;
    cout << "-------------------------"<< endl;
    char MenuChoice;
    cout << "p)Play Game" << endl;
    cout << "q)Quit" << endl;
    cin >> MenuChoice;
 
//  Exception Handling for incorrect Start Menu Choices
    while (MenuChoice != 'p' && MenuChoice !='q') {
        cout << "Choice is Invalid. Please choose (p) for play or (q) for quit ";
        cin >> MenuChoice;
    }
 
// Chosen "Road" If User wants to Play the game  
    if (MenuChoice == 'p') {
        int PlayerChoice = getPlayerChoice();
        int ComputerChoice = getComputerChoice();
        ShowPlayerChoices(PlayerChoice);
        ShowComputerChoices(ComputerChoice);
        isTie(PlayerChoice, ComputerChoice);
        isPlayerWinner (PlayerChoice, ComputerChoice);
     
//  Chosen "Road" If User wants to Quit the game
    } else if (MenuChoice == 'q') {
        cout << "You have quit the program. Have a nice day :)" << endl;
    }
}
