#include <iostream>
using namespace std;

int main() {
    string word;
    int x = 0;
    while (cin >> word) {
        if (word == "hola") ++x;
    }
    cout << x << endl;
}
