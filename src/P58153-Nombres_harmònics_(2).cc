#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    double x, y;
    while (cin >> x >> y) {
        double total = 0;
        ++y;
        while (y <= x) {
            total += 1.0/y;
            ++y;
        }
        cout << total << endl;
    }
}
