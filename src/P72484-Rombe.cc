#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; ++i) {
        for (int j = n - 1 - i; j > 0; --j) cout << ' ';
        for (int j = 2*i + 1; j > 0; --j) cout << '*';
        cout << endl;
    }
  
    for (int k = 1; k < = n - 1; ++k) {
        for (int j = 1; j <= k; ++j) cout << ' ';
        for (int j = 1; j < 2*n - 2*k; ++j) cout << '*';
        cout << endl;
    }
}
