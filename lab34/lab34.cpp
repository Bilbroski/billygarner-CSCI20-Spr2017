// Billy Garner
// 3/30/2017
// Guesing game with random number generator from 1-50 

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main (){
    srand(time(0)); //random number seed
    int userGuess = 0;
    int randomNumber = 0;
    randomNumber = ((rand() % 50) + 1);
    int i = 0;
    
    cout << "A random number has been selected between 1 and 50" << endl << "Guess what you think it is and press enter..." << endl << "NOTE: YOU ONLY GET 5 GUESSES!" << endl;
    
    for (i = 0; i <= 5; ++i){
        cin >> userGuess;
        while (userGuess != randomNumber){
            if (randomNumber > userGuess){
                cout << "Your guess was too low. Try a higher number" << endl;
                cout << endl;
            }else if (randomNumber < userGuess){
                cout << "Your guess was too high. Try a lower number" << endl;
                cout << endl;
            }else{
                randomNumber = userGuess;
            }
        }
    }
    
    cout << "The Random number is " << randomNumber << " Well Done!" << endl;
    return 0;
}