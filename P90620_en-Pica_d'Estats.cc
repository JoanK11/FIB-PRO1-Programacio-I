#include <iostream>
using namespace std;

int main()
{
    int last, now, next;
    cin >> last >> now >> next;
    bool found = false;
    while (next != 0) {
        if ((now > last) and (now > next) and (now > 3143))
            found = true;
        last = now;
        now = next;
        cin >> next;
    }
    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
