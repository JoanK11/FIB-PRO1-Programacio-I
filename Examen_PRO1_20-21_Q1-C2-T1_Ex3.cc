#include <iostream>
using namespace std;

int nombreSenseZeros(int x) {
    if (x == 0) return 0;
    else if (x%10 == 0) return nombreSenseZeros(x/10);
    return x%10 + 10*nombreSenseZeros(x/10);
}

int main() {
    int x;
    while (cin >> x) {
        cout << nombreSenseZeros(x) << endl;
    }
}
