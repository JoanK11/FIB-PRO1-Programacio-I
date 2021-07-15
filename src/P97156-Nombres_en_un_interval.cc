#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    for (int i = x; i < y; ++i) cout << i << ',';
    if (x <= y) cout << y;
    cout << endl;
}
