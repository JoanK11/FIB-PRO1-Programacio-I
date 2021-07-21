#include <iostream>
using namespace std;

int main() {
    int last, now, next;
    cin >> last >> now >> next;
    bool acabar = false;
    while (next != 0) {
        if ((now > last) and (now > next) and (now > 3143)) acabar = true;
        last = now;
        now = next;
        cin >> next;
    }
    if (acabar) cout << "YES" << endl;
    else cout << "NO" << endl;
}
