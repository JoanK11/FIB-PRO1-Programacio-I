#include <iostream>
using namespace std;

int main()
{
    int a;
    int total = 0, pos = 0, neg = 0;
    while (cin >> a) {
        if (a > 0)
            ++pos;
        else if (a < 0)
            ++neg;
        ++total;
    }
    cout << "Pos: " << pos << endl;
    cout << "Neg: " << neg << endl;
    cout << "Tot: " << total << endl;
}
