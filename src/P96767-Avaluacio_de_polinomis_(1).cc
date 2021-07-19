#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double n, total;
    cin >> n >> total;
    double x, z = 1;
    while (cin >> x) {
        z *= n;
        total += x*z;
    }
    cout << total << endl;
}
