//Billy Garner
//March 28 2017

#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string individualName;
    char filingStatus = 'x';
    double grossWage = 0.0;
    double taxWithheld = 0.0;
    int taxTableBracket = 0;
    
    //Inputs are requested and stored to their variables
    cout << "Enter your name..." << endl;
    cin >> individualName;
    
    cout << "Are you Married or Single? (press m for married or s for single)..." << endl;
    cin >> filingStatus;
    
    cout << "Enter your Gross Wage this year..." << endl;
    cin >> grossWage;
    
    cout << "Enter the ammount of Tax Withheld..." << endl;
    cin >> taxWithheld;
    //below is the switch given the individual is Single.
    if (filingStatus == 's' || filingStatus == 'S'){
            if (grossWage <= 8925){
                taxTableBracket = 1;
            }
            else if (grossWage > 8925 && grossWage <= 36250){
                taxTableBracket = 2;
            }
            else if (grossWage > 36251 && grossWage <= 87850){
                taxTableBracket = 3;
            }
            else {
                taxTableBracket = 4
            }
            
        switch (taxTableBracket){
            case 1:
                taxWithheld = (grossWage - (grossWage/100) * 10);
                break;
            case 2:
                taxWithheld = (892.50 + (grossWage - (grossWage/100) * 15));
                break;
            case 3:
                taxWithheld = (4991.25 + (grossWage - (grossWage/100) * 25));
                break;
            case 4:
                taxWithheld = (17891.26 + (grossWage - (grossWage/100) * 28));
                break;
        }
    }//below is the switch given the individual is Married.
    else if (filingStatus == 'm' || filingStatus == 'M'){
            if (grossWage <= 8925){
                taxTableBracket = 1;
            }
            else if (grossWage > 8925 && grossWage <= 36250){
                taxTableBracket = 2;
            }
            else if (grossWage > 36251 && grossWage <= 87850){
                taxTableBracket = 3;
            }
            else {
                taxTableBracket = 4
            }
            switch (taxTableBracket){
            case 1:
                taxWithheld = (grossWage - (grossWage/100) * 10);
                break;
            case 2:
                taxWithheld = (1785 + (grossWage - (grossWage/100) * 15));
                break;
            case 3:
                taxWithheld = (9982.50 + (grossWage - (grossWage/100) * 25));
                break;
                
            taxWithheld = taxWithheld - 3900;
            }
    }//This last else is only for people who failed to press M or S in marital status.
    else {
        cout << "Invalid input. Try again.";
    }
    
    return 0;
}