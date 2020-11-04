#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    string type;
    double x, y, z;
    while ((cin >> type) and type != "acabar") {
        if (type == "perimetro") {
            cin >> x >> y >> z;
            cout << x + y + z << endl;
        } else {
            cin >> x >> y;
            cout << x * y / 2 << endl;
        }
    }
}
