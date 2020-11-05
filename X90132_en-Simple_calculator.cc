#include <iostream>
using namespace std;

int main()
{
    int x, y;
    char z;
    cin >> x;
    while (x >= 0) {
        cin >> z >> y;
        if (z == '+')
            cout << x + y << endl;
        else if (z == '-')
            cout << x - y << endl;
        else
            cout << x * y << endl;
        cin >> x;
    }
}
