#include <iostream>
using namespace std;

void canvi_base(int n, int b) {
    if (n/b > 0) canvi_base(n/b, b);
    if (n%b < 10) cout << n%b;
    else cout << char('A' + n%b - 10); // hexadecimal
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        canvi_base(n, 2);
        cout << ", ";
        canvi_base(n, 8);
        cout << ", ";
        canvi_base(n, 16);
        cout << endl;
    }
}
