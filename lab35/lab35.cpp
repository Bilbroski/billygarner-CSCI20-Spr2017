// Billy Garner
// 4/4/2017
// Loan Calculator Program Debugging Lab

#include <iostream> 
using namespace std; 
int main(){
  double a, m, r, I;
  int y;   // Input amount, payment, interest rate, and number of years
  cout << "Enter the amount borrowed: ";
  cin >> a;
  cout << "Enter the monthly payment you'll make: ";
  cin >> m;
  cout << "Enter the annual interest rate: ";
  cin >> r;
  cout << "Enter the number of years you want to simulate: ";
  cin >> y;
   // convert interest rate from percent to fraction
  r = r/100;
   // iterate through each month
  for(int i = 1; i <= y*12; i++)
  {
    // calculate additional interest
    I = a*(r/12);
    // add interest and subtract payment from balance
    a = a + I - m;
  }
   // Print ending amount
  cout << "At the end of " << y << " years you owe "       << a << " dollars" << endl;
   return 0;
}