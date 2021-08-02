#include <iostream>
using namespace std;

void sequencia() {
    string s;
    if (cin >> s) {
        sequencia();
        cout << s << endl;
    }
}

int main() {
    sequencia();
}
