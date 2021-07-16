#include <iostream>
using namespace std;

int main() {
    int x, y;
    while (cin >> x >> y) {
        int result = 1;
        for (int i = 1; i <= y; ++i) result *= x;
        cout << result << endl;
    }
}
