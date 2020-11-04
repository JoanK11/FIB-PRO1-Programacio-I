#include <iostream>
using namespace std;

int main() {
    int n;
    char x;
    cin >> n >> x;
    int meitat = (n / 2) + 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if ((i == j) or (j == n - i + 1) or (j == meitat) or (i == meitat))
                cout << x;
            else
                cout << '.';
                }
            cout << endl;
        }
    }
        
