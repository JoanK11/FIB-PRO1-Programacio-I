#include <iostream>
using namespace std;

int main()
{
    int first, x, pos = 2, counter = 1;
    cin >> first;
    while (cin >> x) {
        if (pos % 2 != 0 and x == first)
            ++counter;
        ++pos;
    }
    cout << counter << endl;
}
