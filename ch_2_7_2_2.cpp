#include <iomanip>
#include <iostream>
using namespace std;

int main() {

   double powerApplied;
   double timeApplied;
   double workDone;

   cout << "Enter power applied: " ;
   cin >> powerApplied;

   cout << "Enter time applied: ";
   cin >> timeApplied;

   workDone = powerApplied * timeApplied;

   cout << "Work is " << fixed << setprecision(5) << workDone << endl;

   return 0;
}