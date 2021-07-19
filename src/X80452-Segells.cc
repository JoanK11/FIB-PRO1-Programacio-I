#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int x = n%7;
        n /= 7;
        while (x%4 != 0) {
            --n;
            x += 7;
        }
        cout << n << ' ' << x/4 << endl;
    }
}
