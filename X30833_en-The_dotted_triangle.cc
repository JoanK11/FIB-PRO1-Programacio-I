#include <iostream>
using namespace std;

int main()
{
    int n;
    char x;
    cin >> n >> x;
    string space = "";
    for (int i = 0; i <= n / 2; ++i) {
        cout << space;
        space += "  ";
        for (int j = 1; j < ((2 * n) - (4 * i)); ++j) {
            if (j % 2 != 0)
                cout << x;
            else
                cout << '.';
        }
        cout << endl;
    }
}
