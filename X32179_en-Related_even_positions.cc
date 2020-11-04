#include <iostream>
using namespace std;

int main()
{
    int second, x, pos = 3, counter = 1;
    cin >> second >> second;
    while (cin >> x) {
        if (pos % 2 == 0 and x == second)
            ++counter;
        ++pos;
    }
    cout << counter << endl;
}
