#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    string type;
    double a, b;
    while (cin >> type and type != "parar") {
        if (type == "suma") {
            cin >> a >> b;
            cout << a + b << endl;
        } else if (type == "resta") {
            cin >> a >> b;
            cout << a - b << endl;
        } else {
            cin >> a;
            cout << -a << endl;
        }
    }
}
