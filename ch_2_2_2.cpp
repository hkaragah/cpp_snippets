#include <iostream>
using namespace std;

int main() {
   int numLaptops;
   int numDesktops;
   int totalComputers;

   cout << "Enter current number of laptops: ";
   cin >> numLaptops;

   numDesktops = numLaptops;
   numLaptops = numLaptops + 2;
   totalComputers = numLaptops + numDesktops;

   cout << numLaptops << " laptops" << endl;
   cout << numDesktops << " desktops" << endl;
   cout << totalComputers << " total" << endl;
   
   return 0;
}