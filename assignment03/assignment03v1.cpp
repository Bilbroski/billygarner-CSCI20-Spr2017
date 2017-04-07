// Billy Garner
// 4/6/2017
// Paper Scissors Rock Lizard Spock

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
    srand(time(0)); // seeds the random number generator
    int userHand = 0;
    int computerHand = 0;
    int score = 0
    int userScore = 0;
    int computerScore = 0;
    int numRounds = 0;
    int i = 0;
    
    cout << "Welcome to Paper Scissors Rock Lizard Spock!" << endl;
    cout << "Please choose the Game Type that you prefer." << endl; 
    cout << "for best of 3 type '3', for best of 5 type '5', and for best of 7 type '7' then hit Enter." << endl;
    cin >> numRounds;
    
    for (i = 0; i < numRounds; i++){
        if (numRounds == 3){ // The game will execute 3 rounds here
            while (score < 3){
                if (userSelect != computerSelect){
                    
                    score = score + 1;
                }else{
                    cout << "Computer: " << computerSelect << "User: " << userSelect << "it was a tie." << endl << "try again!" << endl;
                    cin >> userSelect;
                }
                
            }
            cout << "3 rounds are run!" << endl;
        }else if (numRounds == 5){ // The game will execute 5 rounds here
            while (score < 5){
                if (userSelect != computerSelect){
                    
                    score = score + 1;
                }else{
                    cout << "Computer: " << computerSelect << "User: " << userSelect << "it was a tie." << endl << "try again!" << endl;
                    cin >> userSelect;
                }
                
            }
            cout << "5 rounds are run!" << endl;
        }else if (numRounds == 7){ // The game will execute 7 rounds here
            while (score < 7){
                if (userSelect != computerSelect){
                    
                    score = score + 1;
                }else{
                    cout << "Computer: " << computerSelect << "User: " << userSelect << "it was a tie." << endl << "try again!" << endl;
                    cin >> userSelect;
                }
                
            }
            cout << "7 rounds are run!" << endl;
        }else{ // The numRounds selection is redone here
            cout << "Your input was invalid." << endl << "Please select how many rounds you would like to play."
            << "You can select 3, 5, or 7. Then press Enter." << endl;
            cin >> numRounds;
            i = i - 1;
        }
    }
}