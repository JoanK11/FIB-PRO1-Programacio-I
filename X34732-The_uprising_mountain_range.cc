#include <iostream>
using namespace std;

int main() {
    int n, counter = 0;
    char a, b, c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
    cin >> a >> b >> c;
    if (not (((a == '/' and b == '-') or (b == '/' and c == '-')) or
    (a == '-' and b == '-' and c == '-' )))
    ++counter;
    }
    cout << counter << endl;
}
