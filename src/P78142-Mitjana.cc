#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double x, total = 0;
    int times = 0;
    while (cin >> x) {
        total += x;
        ++times;
    }
    cout << total / times << endl;
}
