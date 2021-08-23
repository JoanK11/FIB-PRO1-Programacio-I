#include <iostream>
#include <vector>
using namespace std;

void procediment(vector<int>& llista) {
    int last = llista.size() - 1, i = 0;
    while (i <= last) { // Llegim el vector
        cin >> llista[i];
        ++i;
    }
    --i; // Pre: 'i' apunta a l'últim element del vector
    while (i >= 0) { // Escrivim el vector
        cout << llista[i];
        if (i != 0) cout << ' ';
        --i; // Retrocedim una posició fins arribar al principi
    }
    cout << endl;
}

int main() {
    int n;
    while (cin >> n) {
    vector<int> llista(n);
    procediment(llista);
    }
}
