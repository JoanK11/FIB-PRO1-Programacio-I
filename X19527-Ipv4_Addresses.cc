#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool abool = (a % 2 == 0), bbool = (b % 2 == 0), cbool = (c % 2 == 0), dbool = (d % 2 == 0);

    if ((abool and not bbool and cbool and not dbool) or (not abool and bbool and not cbool and dbool))
        cout << "LBA" << endl;

    if ((a < b) and (b < c) and (c < d))
        cout << "Increasing" << endl;
    else if ((a > b) and (b > c) and (c > d))
        cout << "Decreasing" << endl;

    if ((a == c) and (b == d))
        cout << "Folded" << endl;
}
