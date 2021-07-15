#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    for (int i = 2; i <= 16; ++i) {
        int n = x, times = 1;
        while (n/i != 0) {
            n /= i;
            ++times;
        }
        cout << "Base " << i << ": " << times << " cifras." << endl;
    }
}
