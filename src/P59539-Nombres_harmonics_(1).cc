#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    double result = 0.0;
    for (int i = 1; i <= n; ++i) result += 1.0/i;
    cout << result << endl;
}
