#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    char number;
    int total = 0, even = 0;
    for (int i = 0; i < r; ++i) {
        for (int j = 1; j <= c; ++j) {
            cin >> number;
            if (j % 2 == 0)
                even += int(number) - '0';
            total += int(number) - '0';
        }
    }
    cout << total << ' ' << even << endl;
}
