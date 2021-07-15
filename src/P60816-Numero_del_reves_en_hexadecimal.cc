#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) cout << 0; // cas especial
    while (n > 0) {
        int d = n % 16;
        if (d < 10) cout << d;
        else cout << char(d - 10 + 'A');
        n = n / 16;
    }
    cout << endl;
}
