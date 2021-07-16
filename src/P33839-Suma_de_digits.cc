#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int sum = 0, x = n;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        cout << "La suma dels digits de " << n << " es " << sum << '.' << endl;
    }
}
