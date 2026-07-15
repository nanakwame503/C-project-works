#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (void)
{
    int playerC;
    int playerScore = 0;
    int compScore = 0;
    int drawScore = 0;
    char playAgain;

    do
    {
        cout << "----------------------------------------" << endl;
        cout << "         ROCK PAPER SCISSORS            " << endl;
        cout << "----------------------------------------" << endl;


    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
     
    do
    {
    cout << "\nEnter your choice? " << endl;
    cin >> playerC;

    if (playerC < 1 || playerC > 3)
    {cout << "Error! Try again (choose 1, 2 or 3)" << endl;}
    
    } while (playerC < 1 || playerC > 3);   
    

    srand(time(0));  
    int compC = rand() % 3 + 1; 
    
    switch (playerC)
    {
    case 1:
        cout << "You chose : Rock " << endl;
        break;
    case 2:
        cout << "You chose : Paper " << endl;
        break;
    case 3:
        cout << "You chose : Scissors " << endl;
        break;      
    
    default: cout << "error!";
        break;
    }
    switch (compC)
    {
    case 1:
        cout << "Computer chose : Rock " << endl;
        break;
    case 2:
        cout << "Computer chose : Paper " << endl;
        break;
    case 3:
        cout << "Computer chose : Scissors " << endl;
        break;
    
    default: cout << "error";
        break;
    }
  
    if (playerC == compC )
    {
        cout << "\nGame is a draw." << endl;
        drawScore++;
    }        
    else if (playerC == 2 && compC == 1 || playerC == 1 && compC == 3 || playerC == 3 && compC == 2)
    {
        cout << "\nYou win!" << endl;
        playerScore++;
    }
    else
    {
        cout << "\nComputer Wins! " << endl;
        compScore++;
    }


        cout << "\nWould you like to play again?(Y/N) ";
        cin >> playAgain;
        playAgain = toupper(playAgain);

    } 
    
    while (playAgain == 'Y');

    int totalGame = playerScore + drawScore + compScore; 

    cout << "\nGame Scores " << endl;
    cout << " \nYou       : " << playerScore << endl;
    cout <<" Computer  : "<< compScore << endl;
    cout << " Draw      : " << drawScore << endl;
    cout << "\nTotal Games Played: " << totalGame << endl;

    cout << "\nHit the the enter key to continue";
    cin.ignore();
    cin.get();    
    
}