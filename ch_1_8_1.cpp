#include <iostream>
using namespace std;
 
int main() {
   int wage;
   
   cout << "Enter wage: ";
   cin >> wage;
 
   cout << "Salary is ";
   cout << wage * 40 * 52;
   cout << endl;
 
   return 0;
}