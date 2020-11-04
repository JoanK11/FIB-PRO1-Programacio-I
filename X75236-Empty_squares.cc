#include <iostream>
using namespace std;

int main() { 
    int n;
    char x;
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) { // Nombre de figures
        for (int j = 1; j <= i; ++j) { // Nombre de files
            for (int k = 1; k <= i; ++k) {
            if ((j == 1) or (j == i) or (k == 1) or (k == i))
                cout << x;
            else
                cout << ' ';
            }
        cout << endl;
        }
    cout << endl;
    }
}
