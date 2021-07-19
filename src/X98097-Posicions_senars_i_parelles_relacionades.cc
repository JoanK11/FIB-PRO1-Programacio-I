#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odds = 0;
    cin >> n;
    // First Part
    int x = n;
    while (x > 0) {
        odds += x % 10;
        x /= 10;
        even += x % 10;
        x /= 10;
    }
    cout << odds << ' ' << even << endl;
    // Second Part
    if (even != 0 and odds % even == 0) {
        cout << odds << " = " << odds / even << " * " << even << endl;
    } else if (odds != 0 and even % odds == 0) {
        cout << even << " = " << even / odds << " * " << odds << endl;
    } else
        cout << "res" << endl;
}
