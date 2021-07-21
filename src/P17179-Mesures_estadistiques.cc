#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;
        double x;
        cin >> x;
        double max = x, min = x, avr = x;

        for (int j = 1; j < number; ++j) {
            cin >> x;
            if (x > max) max = x;
            else if (x < min) min = x;
            avr += x;
        }
        cout << min << ' ' << max << ' ' << avr/number << endl;
    }
}
