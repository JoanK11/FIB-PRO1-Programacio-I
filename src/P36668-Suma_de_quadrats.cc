#include <iostream>
using namespace std;

int main() {
    int n, total = 0;
    cin >> n;
    for (int i = n; i > 0; i--) {
        total += i * i;
    }
    cout << total << endl;
}
