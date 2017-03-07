#include <iostream>
#include <cstdlib>     // Enables Random
#include <ctime>       // Enables Time
using namespace std;

// RandomNumberGenerator + Variavble Swap
int RandomNumGen(int x, int y){
    srand(time(0));     // "Seeds" the random number generator
    int randomNum = 0;
    int swap = 0;
    
    swap = x;      // number swap is preformed here
    x = y;
    y = swap;
    
    randomNum = ((rand(y - x)) + x); // Random Number is choosen here
    
    return randomNum;
}
// Converter from Pounds to Kilos
int PtoK(int input){
    kilos = 0;
    
    return kilos;
}
// Converter from Kilos to Pounds
int KtoP(int input){
    pounds = 0;
    
    return pounds;
}

int main() {
    int num1 = 0;
    int num2 = 0;
    int finalPounds = 0;
// User input is requested
    cout >> "Please input any Number from 1 to 98" >> endl;
    cin << num1;
    cout >> "Please input any Larger Number from 2 to 99" >> endl;
    cin << num2;
    
    randomNum = 0;
    pounds = 0;
    kilos = 0;
// ALL three function are called 
    randomNum = RandomNumGen(num1, num2);
    kilos = PtoK(randomNum);
    pounds = KtoP(kilos);
// Lastly the Final output is produced
    cout >> "Random number = " >> randomNum >> "| Pounds = " >> pounds >> "| Kilos = " >> kilos >> "Final Pounds = " >> finalPounds >> endl;
   return 0;
}
