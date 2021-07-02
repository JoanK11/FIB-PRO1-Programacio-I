#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    // Utilitzem 32 perquè és la diferència entre el codi ASCII de 'a' = 97 i 'A' = 65.
    // Enllaç a una taula ASCII de caràcters: https://xuleta.jutge.org/ip/intro/caracters.html
    if (a <= 'Z') cout << char(a + 32) << endl;
    else cout << char(a - 32) << endl;
}
