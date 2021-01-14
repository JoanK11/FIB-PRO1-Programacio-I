#include <iostream>
using namespace std;

bool venda(int m, int p, int& total) {
    int aux;
    for (int i = 1; i < p; ++i) {
        cin >> aux;
        total += aux;
    }
    return total >= m;
}

int main() {
    string v;
    while (cin >> v) {
        int m, p;
        cin >> m >> p;
        int x, total = 0;
        cin >> x;
        bool correcte = true;
        while (x != -1) {
            if (correcte) correcte = venda(m, p, x);
            total += x;
            cin >> x;
        }
        if (correcte) cout << v << ' ' << total << endl; 
        else cout << v << " discontinued" << endl;
    }
}