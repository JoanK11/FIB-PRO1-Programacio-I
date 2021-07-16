#include <iostream>
using namespace std;

int main() {
    int x, n, times = 0;
    cin >> x;
    while (cin >> n) {
        if (n % x == 0) ++times;
    }
    cout << times << endl;
}
