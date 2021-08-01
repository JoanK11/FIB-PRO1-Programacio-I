#include <iostream>
using namespace std;

int mcd(int a, int b) {
    if (b == 0) return a;
    return mcd(b, a%b);
}

void read_rational(int& num, int& den) {
    int resultat;
    char x;
    cin >> num >> x >> den;
    resultat = mcd(num, den);
    num /= resultat;
    den /= resultat;
}
