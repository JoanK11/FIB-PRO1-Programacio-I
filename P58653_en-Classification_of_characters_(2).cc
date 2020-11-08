#include <iostream>
using namespace std;

void print_line(char c, string s, bool b)
{
    cout << s << "('" << c << "') = ";
    if (b)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

void procediment(char x)
{
    bool es_lletra = (((x >= 'a') and (x <= 'z')) or ((x >= 'A') and (x <= 'Z')));
    print_line(x, "letter", es_lletra);

    bool es_vocal = ((x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u')
        or (x == 'A' or x == 'E' or x == 'I' or x == 'O' or x == 'U'));
    print_line(x, "vowel", es_lletra and es_vocal);
    print_line(x, "consonant", es_lletra and not es_vocal);

    bool uppercase = (x >= 'A' and x <= 'Z');
    print_line(x, "uppercase", es_lletra and uppercase);
    print_line(x, "lowercase", es_lletra and not uppercase);

    bool es_digit = (x >= '0' and x <= '9');
    print_line(x, "digit", es_digit);
}

int main()
{
    char x;
    cin >> x;
    procediment(x);
}
