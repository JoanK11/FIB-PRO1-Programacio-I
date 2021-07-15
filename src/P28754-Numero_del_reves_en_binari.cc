#include <iostream>
using namespace std;

int main() {
    int n, result;
    cin >> n;
    if (n == 0) cout << 0;
    while (n != 0) {
        result = n % 2;
        cout << result;
        n /= 2;
    }
    cout << endl;
}
