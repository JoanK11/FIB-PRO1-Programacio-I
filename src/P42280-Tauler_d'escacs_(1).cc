#include <iostream>
using namespace std;

int main() {
    int r, c, total = 0;
    cin >> r >> c;
    char x;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> x;
            total += x - '0';
        }
    }
    cout << total << endl;
}
