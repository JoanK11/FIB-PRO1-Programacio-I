#include <iostream>
using namespace std;

void canvi(char& a) {
    ++a;
    if (a > 'z') a = 'a';
}

bool trobat(int n, char a) {
    string s;
    bool b = false;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s[0] == a) b = true;
    }
    return b;
}

int main() {
    int n, count = 0;
    char a = 'a';
    while (cin >> n) {
        if (trobat(n, a)) ++count;
        else cout << "Could not find a match for " << a << endl;
        canvi(a);
    }
    cout << count << endl;
}
