//Billy Garner
//4/20/2017
//CSCI 20 (T/Th 2:00-4:15)

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main(){
    
    char userFirstName[10];
    char userLastName[20];
    
//~~~~~~~~~~~Request for users FirstName~~~~~~~~~~~~~~~
    cout << "input your first name then press enter..." << endl;
    cin >> userFirstName;
    cout << endl;
    
//~~~~~~~~~~~~Check for FirstName length~~~~~~~~~~~~~~~
    while (strlen(userFirstName) > 10){
        cout << "The first name must be between 0 and 10 characters long." << endl;
        cout << "please try again..." << endl;
        cin >> userFirstName;
    }
    
//~~~~~~~~~~~~Request for users LastName~~~~~~~~~~~~~~~
    cout << "input your last name then press enter..." << endl;
    cin >> userLastName;
    cout << endl;
    
//~~~~~~~~~~~~Check for LastName Length~~~~~~~~~~~~~~~~
    while (strlen(userFirstName) > 10){
        cout << "The first name must be between 0 and 20 characters long." << endl;
        cout << "please try again..." << endl;
        cin >> userFirstName;
    }
    
//~~~~~~~~~~~Warnign for same Last and First Names~~~~~
    if (strcmp(userFirstName, userLastName) == 0){
        cout << "WARNING: Your first and last name are the same!" << endl;
        cout << endl;
    }
    
//~~~~~~~~~3 different username options are stored~~~~~~
    char option1[11];
    char option2[13];
    char option3[30];
    
    strcpy(option1, userFirstName);
    strncat(option1, userLastName, 1);
    
    strcpy(option2, userFirstName);
    strncat(option2, userLastName, 3);
    
    strcpy(option3, userFirstName);
    strncat(option3, userLastName, 30);
    
//~~~~the user is propted with the username options~~~~
/*  cout << "Please choose one of the following usernames." << endl;
    cout << "You have 3 options." << endl;
    cout << "Press 1 for " << option1 << endl;
    cout << "Press 2 for " << option2 << endl;
    cout << "Press 3 for " << option3 << endl;
    cout << "then hit enter..." << endl;
    
//~~~~~~~~~the username choice is selected~~~~~~~~~~~~~
   int userChoice = 0;
    cin << userChoice;
    while (userChoice < 1 || userChoice > 3){
        cout << "Your selection was not 1, 2 or 3" << endl << "Please Try again..." << endl;
        cin >> userChoice;
    }
    if (userChoice == 1){
            cout << "You chose " << option1 << endl;
    }else if (userChoice == 2){
            cout << "You chose " << option2 << endl;
    }else(username == 3){
            cout << "You chose " << option3 << endl;
    }
*/
//~~~~~~~~~~~~~Final Output~~~~~~~~~~~~~~~~~~~
    cout << userFirstName << " " << userLastName << endl;
    cout << option1 << " " << option2 << " " << option3 << endl;
    return 0;
}