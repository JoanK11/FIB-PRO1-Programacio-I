#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        int total = 0, c = a;
        while (a <= b) {
            total += (a * a * a);
            ++a;
        }
        cout << "suma dels cubs entre " << c << " i " << b << ": " << total << endl;
    }
}
