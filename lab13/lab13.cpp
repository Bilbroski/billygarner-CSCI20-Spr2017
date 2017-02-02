#include <iostream>
using namespace std;

int main() {

int popCurrent = 324472967;
int popBirth = 0;
int popDeath = 0;
int popMigra = 0;
int yearsFuture = 0;
int popResult = 0;

cout << "Input how many years in the Future you would like to know the Population of the United States.";

cin >> yearsFuture;

popBirth = 1 * (60 * 60 * 24 / 8) * 365;
popDeath = 1 * (60 * 60 * 24 / 11) * 365;
popMigra = 1 * (60 * 60 * 24 / 29) * 365;

popResult = (yearsFuture * (popBirth - popDeath + popMigra)) + popCurrent;

cout << "In "<< yearsFuture << " the U.S. Population will be " << popResult;

return 0;
}