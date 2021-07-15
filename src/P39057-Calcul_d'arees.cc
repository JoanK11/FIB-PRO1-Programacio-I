#include <cmath>
#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string type;
        cin >> type;
        if (type == "rectangle") {
            double a, b;
            cin >> a >> b;
            cout << a * b << endl;
        } else {
            double rad;
            cin >> rad;
            cout << M_PI * rad * rad << endl;
        }
    }
}
