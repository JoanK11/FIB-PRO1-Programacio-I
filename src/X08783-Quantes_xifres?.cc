#include <iostream>
using namespace std;

int main() {
    int b, n;
    while (cin >> b >> n) {
        int x = n, times = 1;
        while (x / b != 0) {
            x /= b;
            ++times;
        }
        cout << times << endl;
    }
}
