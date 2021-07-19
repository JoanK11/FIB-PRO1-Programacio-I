#include <iostream>
using namespace std;

int main() {
    int n, total = 0;
    cin >> n;
    char x;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x;
            if (i == j or j == n - 1 - i)
                total += int(x) - '0';
        }
    }
    cout << total << endl;
}
