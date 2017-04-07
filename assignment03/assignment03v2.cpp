// Billy Garner
// 4/6/2017
// Paper Scissors Rock Lizard Spock

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char ComputerHand (int computerNum){
    switch (computerNum) {
        case 1;
            computerChar = paper;
        case 2;
            computerChar = scissors;
        case 3;
            computerChar = rock;
        case 4;
            computerChar = lizard;
        case 5;
            computerChar = spock;
    }
    return computerChar;
}
    
int main(){
    srand(time(0)); // seeds the random number generator
    char paper = 'p'; // neccesary variables are defined
    char scissors = 's';
    char rock = 'r';
    char lizard = 'l';
    char spock = 'k';
    char userSelect = '-';
    char computerChar = '-';
    int computerNum = 0;
    int gameType = 0;
    int i = 0;
    int compScore = 0;
    int userScore = 0;
    int roundsComplete = 0;
    
    cout << "Welcome to Paper Scissors Rock Lizard Spock!" << endl;
    cout << "Please choose the Game Type that you prefer." << endl; 
    cout << "for best of 3 type '3', for best of 5 type '5', and for best of 7 type '7' then hit Enter." << endl;
    cin >> gameType;
    
    for (i = 0; i < gameType; i++){
        if (gameType == 3){ // The game will execute 3 rounds here
            while (roundsComplete < 3){
                if (userSelect != computerSelect){
                    
                    roundsComplete = roundsComplete + 1;
                }else{
                    cout << "Computer: " << computerSelect << "User: " << userSelect << "it was a tie." endl << 
                    "try again!" << endl;
                    cin >> userSelect;
                }
                
            }
            //cout << "3 rounds are run!" << endl;
        }else if (gameType == 5){ // The game will execute 5 rounds here
            while (roundsComplete < 5){
                if (userSelect != computerSelect){
                    
                    roundsComplete = roundsComplete + 1;
                }else{
                    cout << "Computer: " << computerSelect << "User: " << userSelect << "it was a tie." endl << 
                    "try again!" << endl;
                    cin >> userSelect;
                }
                
            }
            //cout << "5 rounds are run!" << endl;
        }else if (gameType == 7){ // The game will execute 7 rounds here
            while (roundsComplete < 7){
                if (userSelect != computerSelect){
                    
                    roundsComplete = roundsComplete + 1;
                }else{
                    cout << "Computer: " << computerSelect << "User: " << userSelect << "it was a tie." endl << 
                    "try again!" << endl;
                    cin >> userSelect;
                }
                
            }
            //cout << "7 rounds are run!" << endl;
        }else{ // The gameType selection is redone here
            cout << "Your input was invalid." << endl << "Please select how many rounds you would like to play."
            << "You can select 3, 5, or 7. Then press Enter." << endl;
            cin >> gameType;
        }
    }
}