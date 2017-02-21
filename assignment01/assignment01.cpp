#include <iostream>
#include <string>
using namespace std;
struct StuctTypeName {
    
    string userName;      //<---this is my struct
    double age = 0.0;
    double hourlyRate = 0.0;
    double hoursWorked = 0.0;
    
int main() {

double grossPay = 0.0; //Calculated variables
double netPay = 0.0;

cout << "Enter your Name: " << endl; //request for user input
cin >> userName;
cout << "Enter your Age: " << endl;
cin >> age;
cout << "Enter your hourly Wage: " << endl;
cin >> hourlyRate;
cout << "Enter your hours Worked: " << endl;
cin >> hoursWorked;

grossPay = hourlyRate * hoursWorked; //pay calculation
netPay = grossPay - 130; // insurance calculation
netPay = netPay - (netPay * 0.17); // tax calculation

cout << userName << " at your wage of " << hourlyRate << " in " << hoursWorked endl;
cout << " hours you make " << grossPay << " before deductions and " << netPay << " after deductions." endl;

return 0;
}
}