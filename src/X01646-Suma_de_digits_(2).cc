#include <iostream>
using namespace std;

int main() {
    int b, n;
    cin >> b;
    while (cin >> n) {
        int total = 0, x = n;
        while (x > 0) {
            total += (x % b);
            x /= b;
        }
        cout << n << ": " << total << endl;
    }
}
