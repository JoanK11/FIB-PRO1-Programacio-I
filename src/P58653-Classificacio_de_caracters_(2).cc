#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

void procediment(char x) {
    bool es_lletra = (((x >= 'a') and (x <= 'z')) or ((x >= 'A') and (x <= 'Z')));
    escriu_linia(x, "lletra", es_lletra);

    bool es_vocal = ((x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u')
        or (x == 'A' or x == 'E' or x == 'I' or x == 'O' or x == 'U'));
    escriu_linia(x, "vocal", es_lletra and es_vocal);
    escriu_linia(x, "consonant", es_lletra and not es_vocal);

    bool es_majuscula = (x >= 'A' and x <= 'Z');
    escriu_linia(x, "majuscula", es_lletra and es_majuscula);
    escriu_linia(x, "minuscula", es_lletra and not es_majuscula);

    bool es_digit = (x >= '0' and x <= '9');
    escriu_linia(x, "digit", es_digit);
}

int main() {
    char x;
    cin >> x;
    procediment(x);
}
