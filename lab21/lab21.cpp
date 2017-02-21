#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double oldStyleWindChill = 0;
    double newStyleWindChill = 0;
    double userTemp = 0;
    double userSpeed = 0;
    double windChillDiff = 0;

    cout << "Input current Temperature in Fahrenheit: ";
    cin >> userTemp;
    
    cout << "Input current Wind Speed: ";
    cin >> userSpeed;
    
    oldStyleWindChill = 0.081*(3.71 * sqrt(userSpeed) + 5.81 - 0.25 * userSpeed) * (userTemp - 91.4) + 91.4;
    newStyleWindChill = 35.74 + 0.6215 * userTemp - 35.75 * (pow(userSpeed,0.16)) + 0.4275 * userTemp * (pow(userSpeed,0.16));
    windChillDiff = oldStyleWindChill - newStyleWindChill;
    
    cout << "Wind Speed     Old Formula     New Formula     Difference" << endl;
    cout << userSpeed << "              " << oldStyleWindChill << "          " << newStyleWindChill << "          " << windChillDiff << endl;
    
return 0;
}