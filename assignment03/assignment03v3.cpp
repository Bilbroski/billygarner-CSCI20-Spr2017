// Billy Garner
// 4/6/2017
// Rock Paper Scissors Lizard Spock

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~rock=1,paper=2,scissors=3,lizard=4,spock=5
void loss(){ //~~function if a round is lost
    cout << "Computers Point" << endl;
}

void win(){ //~~ function if a round is won
    cout << "Your Point" << endl;
}

void tie(){ //~~ function if a round is tied
    cout << " its a tie" << endl;
}

int main(){//~~~~~~~~~~~~~~~~~~~~~~~~main begins here <---
    int userHand = 0; //variables are declared
    int computerHand = 0;
    int userScore = 0;
    int computerScore = 0;
    int scoreCount = 0;
    int numRounds = 0;
    
    srand(time(0)); // random numbers are taken from computer clock
//introductory statements are output~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    cout << "Welcome to Paper Scissors Rock Lizard Spock!" << endl;
    cout << "Please choose the Game Type that you prefer." << endl; 
    cout << "for best of 3 input '3', for best of 5 input '5', and for best of 7 input '7'," << endl << "then hit Enter." << endl;
//user input for how many rounds are to be played
    cin >> numRounds;
    scoreCount = numRounds; // this will allow for the while loop and the for loop to execute from seperate variables stored with the same begining value
    int i = 0;
    for (i = 0; i < numRounds; i++){
        if (numRounds == 3){ //~~~~~~~~~~~~~~~~~~~~~~The game will execute 3 rounds here
            cout << "3 rounds it is!" << endl;
            cout << "input 1 for Rock, 2 for paper, 3 for scissors, 4 for lizard, 5 for spock" << endl;
            cin >> userHand;
            computerHand = ((rand() % 5) + 1);
            while (numRounds >= scoreCount){ //this while loop exists for ties. allowing for rounds to continue because nobody scored
                if (userHand == 1){// possible outcomes are listed in a nested if else statement there are 25 in total
                    if (computerHand == 1){
                        tie();
                        cout << "you both chose rock" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        loss();
                        cout << "paper beats rock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        win();
                        cout << "rock beats scissors" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        win();
                        cout << "rock beats lizard" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        loss();
                        cout << "spock beats rock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 2){
                    if (computerHand == 1){
                        win();
                        cout << "paper beats rock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        tie();
                        cout << "you both chose paper" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        loss();
                        cout << "scissors beats paper" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        loss();
                        cout << "lizard beats paper" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        win();
                        cout << "paper beats spock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 3){
                    if (computerHand == 1){
                        loss();
                        cout << "rock beats scissors" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        win();
                        cout << "scissors beats paper" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        tie();
                        cout << "you both chose scissors" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        win();
                        cout << "scissors beats lizard" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        loss();
                        cout << "spock beats scissors" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 4){
                    if (computerHand == 1){
                        loss();
                        cout << "rock beats lizard" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        win();
                        cout << "lizard beats paper" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        loss();
                        cout << "scissors beats lizard" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        tie();
                        cout << "you both chose lizard" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        win();
                        cout << "lizard beats spock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 5){
                    if (computerHand == 1){
                        win();
                        cout << "spock beats rock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        loss();
                        cout << "paper beats spock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        win();
                        cout << "spock beats scissors" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        loss();
                        cout << "lizard beats spock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        tie();
                        cout << "you both chose spock" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else{
                    cout << "invalid input... you yield one point!!!" << endl;
                }
            }
            cout << "3 rounds are over!" << endl;
        }else if (numRounds == 5){ //~~~~~~~~~~~~~The game will execute 5 rounds here
            cout << "5 rounds it is!" << endl;
            cout << "input 1 for Rock, 2 for paper, 3 for scissors, 4 for lizard, 5 for spock" << endl;
            cin >> userHand;
            computerHand = ((rand() % 5) + 1);
                        while (numRounds >= scoreCount){ //the same loops exist again for if the user chose 5 rounds
                if (userHand == 1){
                    if (computerHand == 1){
                        tie();
                        cout << "you both chose rock" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        loss();
                        cout << "paper beats rock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        win();
                        cout << "rock beats scissors" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        win();
                        cout << "rock beats lizard" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        loss();
                        cout << "spock beats rock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 2){
                    if (computerHand == 1){
                        win();
                        cout << "paper beats rock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        tie();
                        cout << "you both chose paper" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        loss();
                        cout << "scissors beats paper" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        loss();
                        cout << "lizard beats paper" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        win();
                        cout << "paper beats spock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 3){
                    if (computerHand == 1){
                        loss();
                        cout << "rock beats scissors" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        win();
                        cout << "scissors beats paper" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        tie();
                        cout << "you both chose scissors" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        win();
                        cout << "scissors beats lizard" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        loss();
                        cout << "spock beats scissors" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 4){
                    if (computerHand == 1){
                        loss();
                        cout << "rock beats lizard" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        win();
                        cout << "lizard beats paper" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        loss();
                        cout << "scissors beats lizard" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        tie();
                        cout << "you both chose lizard" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        win();
                        cout << "lizard beats spock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 5){
                    if (computerHand == 1){
                        win();
                        cout << "spock beats rock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        loss();
                        cout << "paper beats spock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        win();
                        cout << "spock beats scissors" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        loss();
                        cout << "lizard beats spock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        tie();
                        cout << "you both chose spock" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else{
                    cout << "invalid input... you yield one point!!!" << endl;
                }
            }

            cout << "5 rounds are over!" << endl;
        }else if (numRounds == 7){ //~~~~~~~~~~~~~The game will execute 7 rounds here
            cout << "7 rounds it is!" << endl;
            cout << "input 1 for Rock, 2 for paper, 3 for scissors, 4 for lizard, 5 for spock" << endl;
            cin >> userHand;
            computerHand = ((rand() % 5) + 1);
                        while (numRounds >= scoreCount){ //once more the loops exist again for 7 rounds
                if (userHand == 1){
                    if (computerHand == 1){
                        tie();
                        cout << "you both chose rock" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        loss();
                        cout << "paper beats rock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        win();
                        cout << "rock beats scissors" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        win();
                        cout << "rock beats lizard" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        loss();
                        cout << "spock beats rock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 2){
                    if (computerHand == 1){
                        win();
                        cout << "paper beats rock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        tie();
                        cout << "you both chose paper" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        loss();
                        cout << "scissors beats paper" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        loss();
                        cout << "lizard beats paper" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        win();
                        cout << "paper beats spock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 3){
                    if (computerHand == 1){
                        loss();
                        cout << "rock beats scissors" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        win();
                        cout << "scissors beats paper" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        tie();
                        cout << "you both chose scissors" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        win();
                        cout << "scissors beats lizard" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        loss();
                        cout << "spock beats scissors" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 4){
                    if (computerHand == 1){
                        loss();
                        cout << "rock beats lizard" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        win();
                        cout << "lizard beats paper" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        loss();
                        cout << "scissors beats lizard" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        tie();
                        cout << "you both chose lizard" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        win();
                        cout << "lizard beats spock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else if (userHand == 5){
                    if (computerHand == 1){
                        win();
                        cout << "spock beats rock" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 2){
                        loss();
                        cout << "paper beats spock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 3){
                        win();
                        cout << "spock beats scissors" << endl;
                        userScore = userScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 4){
                        loss();
                        cout << "lizard beats spock" << endl;
                        computerScore = computerScore + 1;
                        scoreCount = scoreCount + 1;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                    }else if (computerHand == 5)
                        tie();
                        cout << "you both chose spock" << endl;
                        cout << "Next Round GO!" << endl;
                        cin >> userHand;
                        computerHand = ((rand() % 5) + 1);
                }else{
                    cout << "invalid input... you yield one point!!!" << endl;
                }
            }

            cout << "7 rounds are over!" << endl;
        //~~~~~~~~~~~~~~~~~~~~~~the last else is to catch invalid input when promted for amount of rounds~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
        }else{ 
            cout << "Your input was invalid." << endl << "Please select how many rounds you would like to play." << endl
            << "You can select 3, 5, or 7. Then press Enter." << endl;
            cin >> numRounds;// The numRounds selection is redone here
            i = i - 1;// this makes the invalid input not short us 1 round
        }
    }
}