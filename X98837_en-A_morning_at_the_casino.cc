#include <iostream>
using namespace std;

int main()
{
    int a, b, c, total = 0;
    while (cin >> a >> b >> c) {
        if ((a == b) and (b == c)) {
            if (a % 2 == 0)
                total += 10;
            else if (a % 3 == 0)
                total += 15;
            else
                total += 5;
        }
    }
    cout << total << endl;
}
