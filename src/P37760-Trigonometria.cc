#include <cmath>
#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    double x;
    while (cin >> x) {
        cout << sin(x * M_PI / 180) << ' ' << cos(x * M_PI / 180) << endl;
    }
}
