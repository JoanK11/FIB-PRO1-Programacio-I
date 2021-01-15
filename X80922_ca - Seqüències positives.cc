#include <iostream>
using namespace std;

int main() {
    int n, tpos = 0, tneg = 0, tneu = 0;
    cin >> n;
    while (n != 0) {
        string s1, s2;
        int pos = 0, neg = 0;
        for (int i = 0; i < n; ++i) {
            cin >> s1 >> s2;
            if (s1 == "si") ++pos;
            if (s2 == "si") ++neg;
        }
        if (pos > neg) ++tpos;
        else if (pos < neg) ++tneg;
        else ++tneu;
        cin >> n;
    }
    cout << tpos << ' ' << tneg << ' ' << tneu << endl;
}