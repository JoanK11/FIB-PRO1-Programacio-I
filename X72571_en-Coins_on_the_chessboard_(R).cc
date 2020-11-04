#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    char number;
    int total = 0, odd = 0;
    for (int i = 1; i <= r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> number;
            if (i % 2 != 0)
                odd += int(number) - '0';
            total += int(number) - '0';
        }
    }
    cout << total << ' ' << odd << endl;
}
