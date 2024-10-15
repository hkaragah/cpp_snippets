#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double h;
    double i;
    double answer;

    cin >> h;
    cin >> i;

    answer = sqrt(fabs(h - pow(i, 3)));

    cout << fixed << setprecision(2);
    cout << answer << endl;
    
    return 0;
}