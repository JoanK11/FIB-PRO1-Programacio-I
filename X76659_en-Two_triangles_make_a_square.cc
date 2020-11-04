#include <iostream>
using namespace std;

int main()
{
    int n;
    char x, y;
    while (cin >> n >> x >> y) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i > j)
                    cout << x;
                else
                    cout << y;
            }
            cout << endl;
        }
        cout << endl;
    }
}
