#include <iostream>
using namespace std;

void sequencia() {
    string s;
    cin >> s;
    if (s != "fi") {
        sequencia();
        cout << s << endl;
    }
}

int main() {
    sequence();
}
