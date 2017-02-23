#include <iostream>
#include <cstdlib>     // Enables Random
#include <ctime>       // Enables Time
using namespace std;

void RandomNumber() {
   srand(time(0));     // "Seeds" the random number generator
   
   cout << "Your Random number is: " <<((rand() % 100) + 1) << endl; //Outputs the Random Number

    return;
}

int main() {
    RandomNumber();
   return 0;
}