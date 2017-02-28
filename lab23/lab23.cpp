#include <iostream>
#include <cstdlib>     // Enables Random
#include <ctime>       // Enables Time
using namespace std;

void NumberRandomizer() {
    srand(time(0));     // "Seeds" the random number generator
   
    int numFirst = 0;
    int numSecond = 0;
   
   cout << "TYPE a number between 1-99 and press ENTER... " << endl;
    cin >> numFirst;
   cout << "TYPE a SMALLER number between 1-99 and press ENTER... " << endl;
    cin >> numSecond;
    
    cout << ((rand() % (numFirst - numSecond)) + numSecond);
    
    return;
}

void NumberSwap(int numFirst, int numSecond) {
    int numHolder = 0;

    numHolder = numFirst; //THE SWAP IS PERFORMED HERE
    numFirst = numSecond;
    numSecond = numHolder;

    return;
    
}

int main() {
    
NumberRandomizer();
NumberSwap();

   return 0;
}

/*if (numFirst > numSecond){    ~~~~~THIS WAS NOT USED~~~~~~~~
   cout << ((rand() % (numFirst - numSecond)) + numSecond) endl;    
   }
   else {
   cout << ((rand() % (numSecond - numFirst)) + numFirst) endl;    
   }
*/