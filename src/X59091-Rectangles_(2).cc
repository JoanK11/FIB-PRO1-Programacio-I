#include <iostream>
using namespace std;

int main() {
    int n, m, space = 0;
    while (cin >> n >> m) {
        if (space != 0) cout << endl;
        int number = 9;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << number;
                --number;
                if (number < 0) number = 9;
            }
            cout << endl;
            space = 1;
        }
    }
}
