#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void)
{
    //the game setup
    string specialWord = "KANGAROO";
    string playerBoard(specialWord.length(), '_');
    int playerLive = 6;
    char charguess;                                    

    cout << "\nThe word is an animal with a pouch for its babies and strong legs for hopping" << endl;

    //the logic and loop of the game
    while (playerLive > 0 && playerBoard != specialWord)
    {
        cout << "\nWORD: ";

        for (char c : playerBoard){cout << c << " ";}  //shows current status of the game
        cout << "\nLives remaining: " << playerLive << "\n";

        //get user input from the keyboard
        cout << "Enter a letter: ";
        cin >> charguess;
        charguess = toupper(charguess); //this changes input match the uppercase word if user inputs a lowercase letter

        //checks if the letter given is the letters in the secret word of the game
        bool foundMatch = false;

        for(size_t i = 0; i < specialWord.length(); ++i){
            if (specialWord[i] == charguess){
                playerBoard[i] = charguess; 
                foundMatch = true;
            }
        }
        if (foundMatch){
            cout << "Correct Choice!\n";
        }
        else{
            cout << "Wrong choice! You lost a life.\n";
            playerLive--;
        }

    }
    
    cout << "\n--------------------------------------------------" << endl;
    if (playerBoard == specialWord){
        cout << "Congratulations on finding the word: " << specialWord << "\n";
        cout << "You win!\n";
    }
    else {
        cout << "Game over, you wasted your lives.\n";
        cout << "the correct word was: " << specialWord << "\n";
    }
    cout << "---------------------------------------------------\n";

    cout << "Hit the enter key to continue";

cin.ignore();
cin.get();


}