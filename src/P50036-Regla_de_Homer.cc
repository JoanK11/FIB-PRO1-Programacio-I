#include <iostream>
#include <vector>
using namespace std;

int evaluate(const vector<int>& p, int x) {
    int last = p.size() - 1;
    // Comencem el comptador amb el terme independent
    // Anem arrastrant la potència de x en valor_x
    int total = p[0], valor_x = 1;
    for (int i = 1; i <= last; ++i) {
        valor_x *= x;
        total += valor_x * p[i];
    }
    return total;
}
/*
// Programa principal per provar el funcionament de la funció
int main() {
    // Agafem el nombre d'elements
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i = 0; i < n; ++i) cin >> P[i];
        //Declarem el valor de x
        int x;
        cin >> x;
        cout << evaluate(P, x) << endl;
    }
}
*/
