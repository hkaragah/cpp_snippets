#include <iomanip>
#include <iostream>
using namespace std;

int main() {
   double s;
   double h;
   
   cout << "Enter s: ";
   cin >> s;
   
   h = (7.0 * s * s) + (2.0 * s) - 9.0;

   cout << "h = " << fixed << setprecision(3) << h << " when s = " << fixed << setprecision(1) << s << endl;

   return 0;
}