#include <iostream>
using namespace std;

int main() {
   int totalDollars;
   int numTens;
   int numFives;
   int numOnes;

   cin >> totalDollars;

   numTens = totalDollars / 10;
   numFives = (totalDollars % 10) / 5;
   numOnes = totalDollars % 5;

   cout << "10-dollar bills: " << numTens << endl;
   cout << "5-dollar bills: " << numFives << endl;
   cout << "One-dollar bills: " << numOnes << endl;

   return 0;
}