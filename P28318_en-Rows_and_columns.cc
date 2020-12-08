#include <iostream>
#include <vector>
using namespace std;

int main() {
    int f, c;
    cin >> f >> c;
    // Declarem Matriu
    typedef vector<int> Row;
    typedef vector<Row> Matrix;
    Matrix matriu(f, Row(c));
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) cin >> matriu[i][j];
    }
    // Procediment
    string type;
    int x;
    while (cin >> type >> x) {
        if (type == "row") {
            cout << "row " << x << ':';
            for (int i = 0; i < c; ++i) cout << ' ' << matriu[x - 1][i];
        }
        else if (type == "column") {
            cout << "column " << x << ':';
            for (int i = 0; i < f; ++i) cout << ' ' << matriu[i][x - 1];
        }
        else {
            int y;
            cin >> y;
            cout << "element " << x << ' ' << y << ": " << matriu[x - 1][y - 1];
        }
        cout << endl;
    }
}