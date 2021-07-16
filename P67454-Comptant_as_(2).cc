#include <iostream>
using namespace std;

int main() {
    char x;
    int i = 0;
    while (cin >> x and x != '.') {
        if (x == 'a') ++i;
    }
    cout << i << endl;
}
